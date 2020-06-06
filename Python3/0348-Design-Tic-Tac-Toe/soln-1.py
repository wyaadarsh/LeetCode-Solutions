class TicTacToe:

    def __init__(self, n: int):
        """
        Initialize your data structure here.
        """
        self.game =  [collections.Counter(), collections.Counter(), collections.Counter()]
        self.n = n
        

    def move(self, row: int, col: int, player: int) -> int:
        """
        Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins.
        """
        game = self.game[player]
        for condition in (1, row), (2, col), (3, row + col), (4, row - col):
            game[condition] += 1
            if game[condition] == self.n:
                return player
        return 0
        


# Your TicTacToe object will be instantiated and called as such:
# obj = TicTacToe(n)
# param_1 = obj.move(row,col,player)

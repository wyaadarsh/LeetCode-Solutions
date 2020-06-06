class Solution:
    def brokenCalc(self, X: 'int', Y: 'int') -> 'int':
        ans = 0
        while X != Y:
            if X >= Y:
                ans += X - Y
                break
            else:
                if Y % 2 == 1:
                    Y += 1
                    ans += 1
                else:
                    Y //= 2
                    ans += 1
        return ans

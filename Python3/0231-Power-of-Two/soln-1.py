class Solution:
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        # only has one bit in binary form
        if n < 1: return False
        while (n & 1 == 0):
            n >>= 1
        return n == 1
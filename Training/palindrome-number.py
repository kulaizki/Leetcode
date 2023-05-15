class Solution:
    def isPalindrome(self, x: int) -> bool:
        cast = str(x)
        end = len(cast) - 1
        half_len = int(len(cast) / 2)
        for i in range(half_len):
            if cast[i] != cast[end]:
                return False
            end -= 1
        return True

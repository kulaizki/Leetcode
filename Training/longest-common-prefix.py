class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        # zip returns an iterator of tuples that contains the characters from the input strings
        for a in zip(*strs):
            if len(set(a)) == 1: 
                res += a[0]
            else: 
                return res
        return res

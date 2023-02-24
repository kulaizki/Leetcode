class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        mp = {}
        for i, j in enumerate(nums):
            x = target - j
            if x in mp: return [mp[x], i]
            mp[j] = i
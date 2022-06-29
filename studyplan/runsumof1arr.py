class Solution:
    def runningSum(self, nums):
        ans=[]
        tmp=0
        for i in nums:
            tmp+=i
            ans.append(tmp)
        return ans

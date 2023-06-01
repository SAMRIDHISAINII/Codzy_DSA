class Solution:
    def hIndex(self, citations: List[int]) -> int:
        n = len(citations)
        citations.sort()
        left, right = 0, n
    
        while left < right:
            mid = (left + right) // 2
            if citations[mid] < n - mid:
                left = mid + 1
            else: 
                right = mid
        return n - left

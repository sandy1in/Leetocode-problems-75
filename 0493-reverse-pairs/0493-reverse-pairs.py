class Solution:
    def __init__(self):
        self.count = 0
    
    def reversePairs(self, nums: List[int]) -> int:
        self.mergeSort(nums)
        return self.count
    
    def mergeSort(self, nums):
        if len(nums) > 1:
            mid = len(nums) // 2
            left = nums[:mid]
            right = nums[mid:]
            
            self.mergeSort(left)
            self.mergeSort(right)
            
            j = 0
            for i in range(len(left)):
                while j < len(right) and left[i] > 2 * right[j]:
                    j += 1
                self.count += j

            i = j = k = 0
            while i < len(left) and j < len(right):
                if left[i] <= right[j]:
                    nums[k] = left[i]
                    k += 1
                    i += 1
                else:
                    nums[k] = right[j]
                    k += 1
                    j += 1
            while i < len(left):
                nums[k] = left[i]
                k += 1
                i += 1
            while j < len(right):
                nums[k] = right[j]
                k += 1
                j += 1
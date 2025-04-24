class Solution:
    def countCompleteSubarrays(self, nums: List[int]) -> int:
        k = len(set(nums))
        count = 0
        left = 0
        mpp = defaultdict(int)

        for right in range(len(nums)):
            mpp[nums[right]] += 1

            while len(mpp) == k:
                count += len(nums) - right
                mpp[nums[left]] -= 1
                if mpp[nums[left]] == 0:
                    del mpp[nums[left]]
                left += 1

        return count


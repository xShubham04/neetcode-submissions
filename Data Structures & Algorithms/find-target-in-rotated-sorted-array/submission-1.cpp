class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end])
                start = mid + 1;
            else
                end = mid;
        }
        int pivot = start;
        int ans = binarySearch(nums, target, 0, pivot - 1);
        if (ans != -1)
            return ans;

        return binarySearch(nums, target, pivot, nums.size() - 1);
    }
    int binarySearch(vector<int>& nums, int target, int left, int right) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
};
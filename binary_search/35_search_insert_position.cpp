class Solution {
public:
    int binsearch(int l, int r, const vector<int>& nums, int target) {
        if (l >= r) {
            return (nums[l] == target) ? l : (nums[l] > target) ? max(0, l) : l+1;
        }
        int pivot = (l + r) / 2;
        if (nums[pivot] == target) return pivot;
        if (nums[pivot] > target) return binsearch(l, max(0, pivot-1), nums, target);
        else return binsearch(pivot + 1, r, nums, target);

    }
    int searchInsert(vector<int>& nums, int target) {
        return binsearch(0, nums.size() - 1, nums, target);
    }
};
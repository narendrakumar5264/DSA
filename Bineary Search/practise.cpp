#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int findPivot(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] > nums[end]) {
                start = mid + 1;
            } else if (nums[mid] < nums[end]) {
                end = mid;
            } else {
                end--; // When nums[mid] == nums[end], reduce end
            }
        }
        return start;
    }

    int binarySearch(vector<int>& nums, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    bool search(vector<int>& nums, int target) {
        if (nums.empty()) {
            return false;
        }
        int pivot = findPivot(nums);
        
        if (nums[pivot] == target) {
            return true;
        }

        if (pivot == 0) {
            return binarySearch(nums, 0, nums.size() - 1, target) != -1;
        }

        if (target >= nums[0]) {
            return binarySearch(nums, 0, pivot - 1, target) != -1;
        } else {
            return binarySearch(nums, pivot, nums.size() - 1, target) != -1;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1};
    int target = 2;
    bool result = sol.search(nums, target);
    cout << "Found: " << result << endl;
    return 0;
}

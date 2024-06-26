class Solution {
public:
     int subArray(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> map;  // create an unordered map to store the count of each number in the current subarray
        int count = 0, start = 0, end = 0;  // initialize variables for count of valid subarrays, start and end index of subarray
        while (end < n) {  // loop through the array from the start to end index
            map[nums[end]]++;  // add the current element to the map and increment its count
            while (map.size() > k) {  // if the number of distinct elements in the map is greater than k, move the start index and remove elements from the map
                map[nums[start]]--;  // decrement the count of the element at the start index
                if (map[nums[start]] == 0) {  // if the count of the element at the start index becomes 0, remove it from the map
                    map.erase(nums[start]);
                }
                start++;  // increment the start index to move the window
            }
            count += end - start + 1;  // add the count of valid subarrays for the current subarray to the total count
            end++;  // increment the end index to move the window
        }
        return count;  // return the total count of valid subarrays
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        // return the count of subarrays with exactly k distinct elements minus the count of subarrays with less than k distinct elements
        return subArray(nums, k) - subArray(nums, k - 1);
    }
};
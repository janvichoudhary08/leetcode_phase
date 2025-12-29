class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_set<int> window;

        for(int i = 0; i<n;i++){
            if (window.count(nums[i])){
                return true;
            }
            window.insert(nums[i]);

            if(window.size() > k)
            window.erase(nums[i-k]);
        }
        return false;
    }

};


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;

        for (int i = 0; i < nums.size(); i++) {
            if (lastIndex.count(nums[i])) {
                if (i - lastIndex[nums[i]] <= k)
                    return true;
            }
            lastIndex[nums[i]] = i;
        }
        return false;
    }
};



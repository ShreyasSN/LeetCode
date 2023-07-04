class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto x: nums)
        {
            mp[x]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]] < 2){
                return nums[i];
            }
        }
        return -1;
    }
};
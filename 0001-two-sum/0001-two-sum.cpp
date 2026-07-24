class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target)
                    return{i,j};
            }
        }
        return{};
    //    unordered_map<int,int> map;
    //    for(int i=0;i<nums.size();i++){
    //     int complement=target-nums[i];
    //     if(map.count(complement)){
    //         return{map[complement],i};
    //     }
    //     map[nums[i]]=i;
    //    }
    //    return {};
    }
};
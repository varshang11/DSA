class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]==nums[i])
        //             count++;
        //     }
        //     if(count>n/2)
        //         return nums[i];
        // }
        // return -1;                     //TLE

        // unordered_map<int,int> countElement;
        // for(int num:nums)
        //     countElement[num]++;
        // int threshold=nums.size()/2;
        // for(auto it:countElement){
        //     if(it.second>threshold)
        //         return it.first;
        // }
        // return -1;

        int candidate=0;
        int count=0;
        for(int num:nums){
            if(count==0)
                candidate=num;

                if(num==candidate)
                    count++;
                else
                    count--;
        }
        return candidate;

       
    }
};
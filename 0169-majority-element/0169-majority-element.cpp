class Solution {
public:
    int majorityElement(vector<int>& nums) {

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
            if(num==candidate)
                count++;
            else if(count==0){
                candidate=num;
                count++;
            }
            else
                count--;
        }
        return candidate;
    }
};
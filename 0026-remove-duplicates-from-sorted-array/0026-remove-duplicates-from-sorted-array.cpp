class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // set<int> st;
        // for(int num:nums)
        //     st.insert(num);
        
        // int index=0;
        // for(auto it:st){
        //     nums[index++]=it;
        // }
        // return index;
    
        int i=1;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i-1]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int low=*min_element(nums.begin(),nums.end());
        int high=*max_element(nums.begin(),nums.end());
        unordered_set<int> st(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=low;i<=high;i++){
            if(st.find(i)==st.end())
                ans.push_back(i);
        }
        return ans;

      
        // vector<int>ans;
        // sort(nums.begin(),nums.end());
        // int start=nums[0];
        // int end=nums.back();
        // set<int>st(nums.begin(),nums.end());
        // for(int i=start+1;i<=end-1;i++){
        //     if(st.find(i)==st.end())
        //         ans.push_back(i);
        // }
        // return ans;
    }

};
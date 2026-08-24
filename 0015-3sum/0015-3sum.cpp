class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // int n=nums.size();
        // set<vector<int>> st;
        // for(int i=0;i<n;i++) {
        //     for(int j=i+1;j<n;j++) {
        //         for(int k=j+1;k<n;k++) {
        //             if(nums[i]+nums[j]+nums[k]==0) {
        //                 vector<int> temp={nums[i],nums[j],nums[k]};
        //                 sort(temp.begin(),temp.end());
        //                 st.insert(temp);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> ans(st.begin(), st.end());
        // return ans;                                                 //TLE


        // int n=nums.size();
        // set<vector<int>> st;
        // for(int i=0;i<n;i++){
        //     unordered_set<int> hashset;
        //     for(int j=i+1;j<n;j++){
        //         int third=-(nums[i]+nums[j]);
        //         if(hashset.find(third)!=hashset.end()){
        //             vector<int> temp={nums[i],nums[j],third};
        //             sort(temp.begin(),temp.end());
        //             st.insert(temp);
        //         }
        //         hashset.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>> ans(st.begin(),st.end());
        // return ans;


        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int left=i+1;
            int right=n-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])
                        left++;
                    while(left<right && nums[right]==nums[right+1])
                        right--;
                }
                else if(sum<0)
                    left++;
                else
                    right--;
            }
        }
        return ans;
    }
};
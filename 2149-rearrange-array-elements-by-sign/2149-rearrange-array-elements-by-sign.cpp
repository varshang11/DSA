class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        // vector<int> pos,neg;
        // for(int num:nums){
        //     if(num>0)
        //         pos.push_back(num);
        //     else 
        //         neg.push_back(num);
        // }
        // vector<int> ans;
        // for(int i=0;i<pos.size();i++){
        //     ans.push_back(pos[i]);
        //     ans.push_back(neg[i]);
        // }
        // return ans;

        int pos=0;
        int neg=1;
        int n=nums.size();
        vector<int> ans(n,0);
        for(int num:nums){
            if(num>0){
                ans[pos]=num;
                pos+=2;
            }
            else{
                ans[neg]=num;
                neg+=2;
            }
        }
        return ans;
    }
};
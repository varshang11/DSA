class Solution {
public:

    // bool isPalindrome(string s){
    //     int left=0;
    //     int right=s.size()-1;
    //     while(left<right){
    //         if(s[left]!=s[right])
    //             return false;
    //         left++;
    //         right--;
    //     }
    //     return true;
    // }
    // string longestPalindrome(string s) {
    //     if(s.size()<=1)
    //         return s;
    //     int maxLen=1;
    //     string ans=s.substr(0,1);
    //     for(int i=0;i<s.size();i++){
    //         for(int j=i+maxLen;j<=s.size();j++){
    //             if(j-i>maxLen && isPalindrome(s.substr(i,j-i))){
    //                 maxLen=j-i;
    //                 ans=s.substr(i,j-i);
    //             }
    //         }
    //     }
    //     return ans;
    // }                         //TLE


    string expandAroundCenter(string s,int left,int right){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }

    string longestPalindrome(string s){
        string ans="";
        for(int i=0;i<s.size();i++){
            string odd=expandAroundCenter(s,i,i);
            string even=expandAroundCenter(s,i,i+1);
            if(odd.size()>ans.size())
                ans=odd;
            if(even.size()>ans.size())
                ans=even;
        }
        return ans;
    }
};
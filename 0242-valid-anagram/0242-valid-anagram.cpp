class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size()!=t.size())
        //     return false;
        // for(int i=0;i<s.size();i++){
        //     bool found=false;
        //     for(int j=0;j<t.size();j++){
        //         if(s[i]==t[j]){
        //             found=true;
        //             t[j]='#';
        //             break;
        //         }
        //     }
        //     if(!found)
        //         return false;
        // }
        // return true;                       //TLE


        // if(s.size()!=t.size()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;


        // if(s.size() != t.size())
        //     return false;
        // unordered_map<char,int> mp;
        // for(char ch:s)
        //     mp[ch]++;
        // for(char ch:t)
        //     mp[ch]--;
        // for(auto it:mp){
        //     if(it.second!=0)    
        //         return false;
        // }
        // return true;


        if(s.size()!=t.size())
            return false;
        vector<int> freq(26,0);
        for(char c:s)
            freq[c-'a']++;
        for(char c:t)
            freq[c-'a']--;
        for(int x:freq){
            if(x!=0)
                return false;
        }
        return true;


    }   
    
};
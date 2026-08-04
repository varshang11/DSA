class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char c:s)
            freq[c]++;
        vector<pair<int,char>> v;
        for(auto it:freq)
            v.push_back({it.second,it.first});
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        string ans="";
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].first;j++)
                ans+=v[i].second;
        }
        return ans;

    }
};
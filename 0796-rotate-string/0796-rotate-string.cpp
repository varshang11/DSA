class Solution {
public:
    bool rotateString(string s, string goal) {
        // if(s.size()!=goal.size())
        //     return false;
        // int n=s.size();
        // for(int i=0;i<n;i++){
        //     char temp=s[0];
        //     for(int j=0;j<n-1;j++){
        //         s[j]=s[j+1];
        //     }
        //     s[n-1]=temp;
        //     if(s==goal)
        //         return true;
        // }
        // return false;

        if(s.size()!=goal.size())
            return false;
        return (s+s).find(goal)!=string::npos;

    }
};
class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max_count=0;
        for(char c:s){
            if(c=='('){
                count++;
                max_count=max(count,max_count);
            }
            else if(c==')')    
                count--;
        }
        return max_count;
    }
};
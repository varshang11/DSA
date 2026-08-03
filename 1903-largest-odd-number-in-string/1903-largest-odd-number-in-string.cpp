class Solution {
public:
    string largestOddNumber(string num) {

        // int n=num.size();
        // for(int i=n-1;i>=0;i--){
        //     string temp=num.substr(0,i+1);
        //     int lastDigit=temp[temp.size()-1]-'0';
        //     if(lastDigit % 2==1)
        //         return temp;
        // }
        // return "";               //MLE


        int n=num.size();
        for(int i=n-1;i>=0;i--){
            int lastDigit=num[i]-'0';
            if(lastDigit % 2==1)
                return num.substr(0,i+1);
        }
        return "";

        
    }
};
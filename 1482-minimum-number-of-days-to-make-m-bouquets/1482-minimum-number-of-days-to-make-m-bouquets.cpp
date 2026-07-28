class Solution {
public:

    bool canMakeBouquets(vector<int>& bloomDay,int day,int m,int k){
        int flowers=0;
        int bouquets=0;
        for(int bloom:bloomDay){
            if(bloom<=day){
                flowers++;
                if(flowers==k){
                    bouquets++;
                    flowers=0;
                }
            }
            else
                flowers=0;
        }
        return bouquets>=m;
    }
   
    int minDays(vector<int>& bloomDay, int m, int k) {
        // int n=bloomDay.size();
        // if(m*k>n)
        //     return -1;
        // int minDay=*min_element(bloomDay.begin(),bloomDay.end());
        // int maxDay=*max_element(bloomDay.begin(),bloomDay.end());

        // for(int day=minDay;day<=maxDay;day++){
        //     if(canMakeBouquets(bloomDay,day,m,k))
        //         return day;
        // }
        // return -1;


        int n=bloomDay.size();
        if((long long)m*k>n)
            return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<high){
            int mid=low+(high-low)/2;
            if(canMakeBouquets(bloomDay,mid,m,k))
                high=mid;
            else
                low=mid+1;
        }
        return low;

    }
};
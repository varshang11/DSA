class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        // int maxPile=*max_element(piles.begin(),piles.end());
        // for(int k=1;k<=maxPile;k++){
        //     long long hours=0;
        //     for(int pile:piles)
        //         hours+=(pile+k-1)/k;
        //     if(hours<=h)
        //         return k;     
        // }
        // return maxPile;                //TLE

        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid=low+(high-low)/2;
            long long hours=0;
            for(int pile:piles)
                hours+=(pile+mid-1)/mid;            //hours+=ceil((double)pile/mid));
            if(hours<=h)
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};
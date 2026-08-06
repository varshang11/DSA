class Solution {
public:
    int findMaxCol(vector<vector<int>>&mat,int row){
        int col=0;
        for(int i=1;i<mat[0].size();i++){
            if(mat[row][i]>mat[row][col])
                col=i;
        }
        return col;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows=mat.size();
        int low=0;
        int high=rows-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int col=findMaxCol(mat,mid);
            int up=(mid==0)?-1:mat[mid-1][col];
            int down=(mid==rows-1)?-1:mat[mid+1][col];
            if(mat[mid][col]>up && mat[mid][col]>down)
                return{mid,col};
            else if(mat[mid][col]<down)
                low=mid+1;
            else 
                high=mid-1;
        }
        return {-1,-1};
    }
};
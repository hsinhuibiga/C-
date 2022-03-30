class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         if(matrix.empty()||matrix[0].empty()) return false;
        int m=matrix.size();
        int n=matrix[0].size();
 
        if (matrix[0][0]>target||matrix[m-1][n-1]<target) return false;
        int start=0,end=m*n-1;
        int mid,midRow,midCol;
        while(start<=end){
            mid=start+(end-start)/2;
            midCol=mid%n;
            midRow=mid/n;
            if(matrix[midRow][midCol]<target) start=mid+1;
            else if(matrix[midRow][midCol]>target) end=mid-1;
            else return true;
        }
        return false;
    }
};
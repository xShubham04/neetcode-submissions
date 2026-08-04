class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            if(target<=matrix[i].back()){
                int start=0,end=matrix[i].size();
                while(start<=end){
                    int mid=start+(end-start)/2;
                    if(matrix[i][mid]==target) return true;
                    else if(matrix[i][mid]>target) end=mid-1;
                    else start=mid+1;
                }
            }
        }
        return false;
    }
};

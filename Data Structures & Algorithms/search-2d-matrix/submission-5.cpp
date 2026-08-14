class Solution {
public:
    void printArray(vector<int> arr){
        for(int i : arr){
            cout<<endl<<i;
        }
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i < matrix.size(); i++){
            int m = matrix[i].size();
            // if(m == 1){
            //     return binarySearch(0, m-1, matrix[i], target);
            // }
            if(target <= matrix[i][m-1]){
                printArray(matrix[i]);
                return binarySearch(0, m-1, matrix[i], target);
            }
            cout<<i;
        }
        return false;
    }

    bool binarySearch(int start, int end, vector<int>& arr, int target){
        if(start > end) return false;
        if(arr.size() == 1) return arr[0] == target;
        int mid = (start + end) / 2;
        if(arr[mid] == target) return true;
        return (target > arr[mid]) ?
            binarySearch(mid+1, end, arr, target) :
            binarySearch(start, mid-1, arr, target);
    }
};

class Solution {
public:
    int search(vector<int>& arr, int ele) {
        int start = 0;
        int end = arr.size() - 1;
        int mid;
        if(arr.size() == 1){
            return arr[0] == ele ? 0 : -1;
        }
        while(start <= end){
            mid = (start + end) / 2;
            if(arr[mid] == ele){
                return mid;
            }else if(ele > arr[mid]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return -1;
    }
};

#include<algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        return binarySearch(piles, left, right, h);
    }

    int binarySearch(vector<int>& piles, int left, int right, int h){
        if(left > right){
            return left;
        }
        int mid = (left + right) / 2 ;
        int hours = getCeil(piles, mid);
        if(hours <= h){
            return binarySearch(piles, left, mid - 1, h);
        }else{
            return binarySearch(piles, mid+1, right, h);
        }
    }

    int getCeil(vector<int>& arr, int h){
        int sum = 0;
        for(int i : arr){
            sum = sum + ((i + h - 1) / h);
        }
        return sum;
    }
};
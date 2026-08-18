#include<cmath>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        return binSearch(piles, low, high, h);
    }

    int binSearch(vector<int>& piles, int left, int right, int h) {

        if (left > right) {
            return left;
        }

        int mid = left + (right - left) / 2;

        int hours = getCeil(piles, mid);

        cout << "Speed: " << mid
             << " Hours: " << hours << endl;

        if (hours <= h) {
            // mid works.
            // But maybe something smaller also works.
            return binSearch(piles, left, mid - 1, h);
        }
        else {
            // mid is too slow.
            // Need a larger speed.
            return binSearch(piles, mid + 1, right, h);
        }
    }

    int getCeil(vector<int>& arr, int speed) {
        int hours = 0;

        for (int pile : arr) {
            hours += (pile + speed - 1) / speed;
        }

        return hours;
    }
};

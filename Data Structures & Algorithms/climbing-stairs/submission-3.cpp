class Solution {
public:
    int climbStairs(int n) {
        int n0 = 0;
        int n1 = 1;
        int result;
        for(int i = 0; i < n; i++){
            result = n0 + n1;
            n0 = n1;
            n1 = result;
        }
        return result;
    }
};

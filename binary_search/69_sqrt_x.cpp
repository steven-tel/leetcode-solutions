class Solution {
public:
    int mySqrt(int x) {
        long long left = 0, right = x + 1;
        while (left < right) {
            long long mid = left + (right - left) / 2;
            if (mid * mid > x) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return static_cast<int>(left - 1);
    }
};
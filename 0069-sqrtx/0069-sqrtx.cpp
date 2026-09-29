class Solution {
public:
    int mySqrt(int x) {
        int i = 0;

        while ((long long)i * i <= x) {
            i++;
        }

        return i - 1;
    }
};

// 0 × 0 = 0  ≤ 8
// 1 × 1 = 1  ≤ 8
// 2 × 2 = 4  ≤ 8
// 3 × 3 = 9  > 8
// so the anwer is 
// 3 - 1 = 2
// important: (long long)i * i prevents integer overflow for large values of x.
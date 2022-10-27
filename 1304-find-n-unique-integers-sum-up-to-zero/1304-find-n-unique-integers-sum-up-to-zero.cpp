class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vec(n, INT_MIN);
        int sign = 1,i = 0, value = 1;
        for (i = 0; i < n - 1; i++)
        {
            vec[i] = value * sign;
            sign *=-1;
            if (i % 2 != 0)
                value++;
        }
        // for (int i = 0; i < n; i++)
        //     printf("%d\n", vec[i]);
        if (n % 2 != 0)
            vec[i] = 0;
        else
            vec[i] = value * sign;
        return (vec);
    }
};
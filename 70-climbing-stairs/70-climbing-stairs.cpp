int a[50] = {0};
class Solution {
public:
  int climbStairs(int n){
    if (n == 1)
        return (1);
    if (n == 0)
        return (0);
    if (n == 2)
        return (2);
    if (a[n])
        return a[n];
    a[n] = climbStairs(n - 1) + climbStairs(n - 2);
    return (a[n]);
}
};
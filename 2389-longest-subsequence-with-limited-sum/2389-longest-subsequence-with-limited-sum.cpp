class Solution {
public:
    int binarySearch(vector<int> &nums, int target, int size){
        int start = 0, end = size - 1, med = 0;
        while (start <= end)
        {
            med = (start + end) / 2;
            if (nums[med] > target)
                end = med - 1;
            else if (nums[med] < target)
            {
                if (med < size - 1 && nums[med + 1] > target)
                    return (med + 1);                    
                else
                    start = med + 1;
            }
            else
                return (med + 1);
        }
        return (start);
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int sum = 0, queriesSize = queries.size(), numsSize = nums.size(), answer = 0;
        vector<int> summingElements(numsSize);
        printf("nums size is : %d\n", numsSize);
        vector<int> result(queriesSize);
        for (int i = 0; i < numsSize; i++){
            sum += nums[i];
            summingElements[i] = sum;
        }
        for (int i = 0; i < queriesSize; i++){
            result[i] = binarySearch(summingElements, queries[i], numsSize);
        }
        return (result);
    }
};
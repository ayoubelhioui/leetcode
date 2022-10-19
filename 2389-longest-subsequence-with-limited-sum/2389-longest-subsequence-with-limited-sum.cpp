class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int sum = 0, queriesSize = queries.size(), numsSize = nums.size(), answer = 0;
        vector<int> summingElements(numsSize);
        vector<int> result(queriesSize);
        
        for (int i = 0; i < numsSize; i++){
            sum += nums[i];
            summingElements[i] = sum;
        }
        for (int i = 0; i < queriesSize; i++)
        {
            answer = 0;
            for (int j = 0; j < numsSize; j++)
            {
                if (queries[i] >= summingElements[j])
                    answer++;
                else
                    break;
            }
            result[i] = answer;
        }
        return (result);
    }
};
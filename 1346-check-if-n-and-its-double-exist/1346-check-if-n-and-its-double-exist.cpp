class Solution {
public:
    
    bool    binarySearch(vector<int> &arr, int i ,int target, int size)
    {
        int end = size - 1, med = 0, start = 0;

        while (start <= end)
        {
            med = (start + end) / 2;
            if (arr[med] >  target)
                end = med - 1;
            else if (arr[med] < target)
                start = med + 1;
            else
            {
                if (med != i)
                    return (true);
                return (false);
            }
        }
        return (false);
    }
    bool checkIfExist(vector<int>& arr) {
        int size = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = 0; i < size; i++)
        {
            if (binarySearch(arr, i, arr[i] * 2, size))
                return (true);
        }
            
        return (false);
    }
};
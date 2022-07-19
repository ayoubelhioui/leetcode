class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int i = 0, student_counter = 0;
        while (i < startTime.size())
        {
            if (queryTime >= startTime[i] && queryTime <= endTime[i])
                student_counter++;
            i++;
        }
        return (student_counter);
    }
};
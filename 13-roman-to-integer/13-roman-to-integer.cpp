#include <map>
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> myMap = {{'I', 1},{'V' , 5}, {'X' , 10},{'L' , 50},{'C', 100},{'D', 500},{'M' , 1000}};
        int sum = 0;
        int i = 0;
        while (s[i])
        {
            if (s[i] == 'I')
            {
                if (myMap[s[i]] < myMap[s[i + 1]])
                {
                    sum+=myMap[s[i + 1]] - myMap[s[i]];
                    i++;
                }
                else
                    sum+=myMap['I'];
            }
            else if (s[i] == 'V')
            {
                if (myMap[s[i]] < myMap[s[i + 1]])
                {
                    sum+=myMap[s[i + 1]] - myMap[s[i]];
                    i++;
                }
                else
                    sum+=myMap['V'];
            }
            else if (s[i] == 'X')
            {
                if (myMap[s[i]] < myMap[s[i + 1]])
                {
                    sum+=myMap[s[i + 1]] - myMap[s[i]];
                    i++;
                }
                else
                    sum+=myMap['X'];
            }
            else if (s[i] == 'L')
            {
                // cout << "Im HEre";
                if (myMap[s[i]] < myMap[s[i + 1]])
                {
                    sum+=myMap[s[i + 1]] - myMap[s[i]];
                    i++;
                }
                else
                    sum+=myMap['L'];
            }
            else if (s[i] == 'C')
            {
                if (myMap[s[i]] < myMap[s[i + 1]])
                {
                    sum+=myMap[s[i + 1]] - myMap[s[i]];
                    i++;
                }
                else
                    sum+=myMap['C'];
            }
            else if (s[i] == 'D')
            {
                if (myMap[s[i]] < myMap[s[i + 1]])
                {
                    sum+=myMap[s[i + 1]] - myMap[s[i]];
                    i++;
                }
                else
                    sum+=myMap['D'];
            }
            else if (s[i] == 'M')
            {
                    sum+=myMap['M'];
            }
            i++;
        }
        // std::cout<<"the value is :" << sum;
        return (sum);
    }
};
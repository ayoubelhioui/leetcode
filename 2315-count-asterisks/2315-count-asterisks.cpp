#define ASTERISK '*'
#define VERTICAL_BAR '|'
class Solution {
public:
    
    int countAsterisks(string s) {
        int sLength = s.length(), flag = 0, asteriskCounter = 0;
        for (auto character : s)
        {
            if (character == VERTICAL_BAR)
                (flag == 0) ? flag = 1 : flag = 0;
            else if (character == ASTERISK && flag == 0)
                asteriskCounter++;
        }
        return (asteriskCounter);
    }
};
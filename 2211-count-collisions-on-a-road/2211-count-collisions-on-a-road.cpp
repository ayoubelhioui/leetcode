class Solution {
public:
    void collitionFound(std::string &str, int &CollisionCount)
    {
        CollisionCount++;
        str.pop_back();
        str += 'C';
    }

   int countCollisions(string directions) {
       int CollisionCount = 0;
        string str;
        for (auto i : directions)
        {
            if (i == 'L' && str != "" && (str.back() == 'R' || str.back() == 'C' || str.back() == 'S'))
            {
                if (str.back() == 'R')
                    CollisionCount++;
                collitionFound(str, CollisionCount);
            }
            else if (i == 'S' && str != "" && (str.back() == 'R'))
                collitionFound(str, CollisionCount);
            else
                str += i;
        }
        char current;
        while (str != "")
        {
            current = str.back();
            str.pop_back();
            if (str != "" && current == 'C' && str.back() == 'R')
                collitionFound(str, CollisionCount);
        }
        return (CollisionCount); 
    }
};
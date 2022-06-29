class Solution {
public:
    string interpret(string command) {
        string s = "";
        int i = 0;
        while (i < command.length())
        {
            if (command[i] == 'G')
                s += "G";
            else if (command[i] == '(' && command[i + 1] == ')')
                s += "o";
            else if (command[i] == '(' && command[i + 1] == 'a')
                s += "al";
            i++;
        }
        return (s);
    } 
};
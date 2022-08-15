class Solution {
public:
//     string recursive_method()
//     {
        
//     }
    
    string decodeString(string s) {
        string returned_string = "";
        stack<string> wordsStack;
        stack<int> numbersStack;
        int s_length = s.length(), count = 0;
        for (int i = 0; i < s_length; i++)
        {
            if (isdigit(s[i]))
            {
                count = count * 10 + (s[i] - '0');
            }
            else if (isalpha(s[i]))
            {
                returned_string += s[i];
            }
            else if (s[i] == '[')
            {
                wordsStack.push(returned_string);
                numbersStack.push(count);
                returned_string = "";
                count = 0;
            }
            else
            {
                string poppedString = wordsStack.top();
                wordsStack.pop();
                int poppedNumber = numbersStack.top();
                numbersStack.pop();
                for (int j = 0; j < poppedNumber; j++)
                {
                    poppedString += returned_string;
                }
                returned_string = poppedString;
            }
        }
        return (returned_string);
    }
};
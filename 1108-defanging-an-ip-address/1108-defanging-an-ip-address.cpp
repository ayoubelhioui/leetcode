class Solution {
public:
    string defangIPaddr(string address) {
        string newString = "";
        int addressLength = address.length();
        for (int i = 0; i < addressLength; i++)
        {
            if (address[i] == '.')
                newString += "[.]";
            else
                newString += address[i];
        }
        return (newString);
    }
};
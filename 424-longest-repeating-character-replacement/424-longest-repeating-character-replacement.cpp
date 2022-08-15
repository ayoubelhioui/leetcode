class Solution {
public:

int characterReplacement(string s, int k) {
    int maxFreq = 0;
    int st = 0;
    int maxi = 0;
    map<char,int> mp;
    
    for(int i=0; i < s.size(); i++){
        mp[s[i]]++;
        maxFreq=max(maxFreq,mp[s[i]]);
        if(((i-st+1)-maxFreq) > k){
            mp[s[st]]--;  
            st++;
        }
        maxi=max(maxi,i-st+1);
    }
    return maxi;
}
};
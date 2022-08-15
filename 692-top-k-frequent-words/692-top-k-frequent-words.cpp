class Solution {
public:
   void findStr(vector<pair<string,int>>& v, string s)
    {
        for(int i=0; i < v.size(); i++)
        {
            if(v[i].first==s)
            {
                v[i].second++;
                return;
            }
        }
        v.push_back(pair<string,int>(s,1));
    }
vector<string> topKFrequent(vector<string>& words, int k) {
    vector< pair<string,int> > vect;
    vector<string>ans;
    for(int i=0;i<words.size();i++){
        findStr(vect, words[i]);
    }
    sort(vect.begin(), vect.end());
    while(ans.size()!=k){
	int max=INT_MIN;
    for(int i=0; i<vect.size();i++)
    {
        if(find(ans.begin(),ans.end(),vect[i].first) == ans.end() && max<vect[i].second)
            max=vect[i].second;
    }
    for(int i=0; i<vect.size()&&ans.size()!=k;i++)
    {
        if(max==vect[i].second)
            ans.push_back(vect[i].first);
    }
}
    return ans;   
}
};
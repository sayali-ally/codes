class Solution {
public:
  
bool dictContains(vector<string>&wordDict,string word){
    for(int i=0;i<wordDict.size();i++){
        if(wordDict[i].compare(word)==0)
        return true;
    }
    return false;
}
   bool wordBreak(string s, vector<string>&wordDict){
    int n=s.size();
    if(n==0)
    return true;
    for(int i=1;i<=n;i++){
        if(dictContains(wordDict,s.substr(0,i)) && wordBreak(s.substr(i,n-i),wordDict))
        return true;
    }
    return false;
}
};


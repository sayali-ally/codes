

class Solution{
public:
    bool dictContains(vector<string>&dict,string word){
        int n=dict.size();
        for(int i=0;i<n;i++){
            if(dict[i].compare(word)==0)
            return true;
        }
        return false;
    }
    
    vector<string> wordBreakUtil(int m, string s,string result,vector<string>&dict)
    {
        vector<string>res;
        for(int i=1;i<=m;i++){
            string prefix=s.substr(0,i);
            if(dictContains(dict,prefix)){
                if(i==m){
                    result+=prefix;
                    res.push_back(prefix);
                    wordBreakUtil(m-i,s.substr(i,m-i),result+prefix+"",dict);
                }
            }
        }
        return res;
    }
    
    vector<string> wordBreak(int n,vector<string>&dict,string s){
        string res="";
        int m=s.size();
        return wordBreakUtil(m,s,res,dict);
    }
};
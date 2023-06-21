class Solution {                              Input: s = "aab"
                                              Output: [["a","a","b"],["aa","b"]]
   public:
    vector<string>&ans;
    vector<vector<string>>&res;

    bool isP(string s,int l,int r){
        l=0;
        r=s.size()-1;
        while(l<r){
            if(s[l++]!=s[r--])
            return false;
        }
        return true;
    }

    void func(string s,int start){
        if(start==s.size()){
            res.push_back(ans);
            return;
        }

        for(int i=start;i<s.size();i++){
            if(isP(s,start,i)){
                ans.push_back(s.substr(start,i-start+1));
                func(s,i+1);
                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<vector<string>>res;
        vector<string>ans;
        func(s,0);
        return res;
    }
}
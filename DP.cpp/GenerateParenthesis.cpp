class Solution {
public:
    void generate(vector<string>&res,int open, int close, int n, string str){
        if(open>n || close>open) return;
        if(str.size()==2*n){
            res.push_back(str);
            return;
        }
        else{
            generate(res,open+1,close,n,str+'(');
            generate(res,open,close+1,n,str+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string str="";
        generate(res,0,0,n,str);
        return res;
    }
};

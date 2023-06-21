class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int>res;
        int n=s.size();
        for(int i=0;i<n;i++){
            char curr=s[i];
            if(curr == '+' || curr == '-' || curr=='*'){
                vector<int>res1= diffWaysToCompute(s.substr(0,i));
                vector<int>res2= diffWaysToCompute(s.substr(i+1));

                for(auto n1: res1){
                    for(auto n2:res2){
                        if(curr=='+')
                        res.push_back(n1+n2);
                        else  if(curr=='-')
                        res.push_back(n1-n2);
                        else
                        res.push_back(n1*n2);
                    }
                }
            }
        }
        if(res.empty())
        res.push_back(atoi(s.c_str()));
        return res;
    }
};
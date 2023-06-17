class Solution
{
	public:
	    void find(int index,string S,set<string>&St){
	        if(index==S.size()){
	            St.insert(S);
	            return;
	        }
	        for(int i=index;i<S.size();i++){
	            swap(S[index],S[i]);
	            find(index+1,S,St);
	            swap(S[index],S[i]);
	        }
	    }
		vector<string>find_permutation(string S){
		    // Code here there
		    vector<string>ans;
		    set<string>St;
		    find(0,S,St);
		    for(auto it:St) ans.push_back(it);
		  //  sort(ans.begin(),ans.end());
		    return ans;
		    
		}
};

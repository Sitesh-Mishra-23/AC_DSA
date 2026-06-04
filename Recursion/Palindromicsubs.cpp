class Solution {
public:
    bool isPalindrome(string S){
        string s1=S;
        reverse(s1.begin(),s1.end());

        return S==s1;
    }

    void getSS(string S,vector<string>&comb,vector<vector<string>>&ans){
        if(S.size()==0){
            ans.push_back(comb);
            return;
        }

        for(int i=0;i<S.size();i++){
            string part =S.substr(0,i+1);

            if(isPalindrome(part)){
                comb.push_back(part);
                getSS(S.substr(i+1),comb,ans);
                comb.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
      vector<string>comb;
      vector<vector<string>>ans;

      getSS(s,comb,ans);
      return ans;
        
    }
};
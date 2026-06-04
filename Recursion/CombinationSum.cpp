class Solution {
public:
    set<vector<int>>s;
    void getS(vector<int>& candidates, int target,vector<int>&comb,vector<vector<int>>&ans,int i){
        if(target==0){
            if(s.find(comb)==s.end()){
                ans.push_back(comb);
                s.insert(comb);
            }
            
            return;
        }
        if(i==candidates.size() || target<0){
            return;
        }

        comb.push_back(candidates[i]);
        getS(candidates,target-candidates[i],comb,ans,i+1);
        getS(candidates,target-candidates[i],comb,ans,i);
        comb.pop_back();

        getS(candidates,target,comb,ans,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>comb;
        vector<vector<int>>ans;

        getS(candidates,target,comb,ans,0);
        return ans;
    }
};
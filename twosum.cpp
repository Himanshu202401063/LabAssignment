class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

      unordered_map<int,int>a;
      for(int i=0;i<n;i++){
        int dif=target-nums[i];
    if(a.find(dif) !=a.end()) {
                return {a[dif], i};
            }
        a.insert({nums[i], i});
      }
      return {};

    
    }
};



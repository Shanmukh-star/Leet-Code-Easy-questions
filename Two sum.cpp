class Solution {
public:
       vector<int> twoSum(vector<int>& nums, int target) {
             int i,j,a;
             a=1;
             vector<int> ans;
             for(i=0;i<nums.size()-1;i++)
             {
                 for(j=i+1;j<nums.size();j++)
                 {
                    if(nums[i]+nums[j]==target)
                    {
                        ans.push_back(i);
                        ans.push_back(j);
                        a=0;
                        break;
                    }
                 }
                 if(a==0)
                    {
                        break;
                    }
             }
            return ans;
    }
};

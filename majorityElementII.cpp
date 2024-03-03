class Solution
{
public:
 vector<int> majorityElement(vector<int> &nums)
 {

  unordered_map<int, int> m;

  vector<int> ans;

  int n = nums.size();

  for (int i = 0; i < n; i++)
  {
   m[nums[i]]++;
  }

  n = n / 3;

  for (auto x : m)
  {

   if (x.second > n)
   {
    ans.push_back(x.first);
   }
  }

  return ans;
 }
};
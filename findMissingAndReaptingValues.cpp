class Solution
{
public:
 vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
 {
  unordered_map<int, int> mp;
  vector<int> s;

  int outsize = grid.size(), sum = 0;

  for (int i = 0; i < outsize; i++)
  {
   for (int j = 0; j < grid[i].size(); j++)
   {

    sum = sum + grid[i][j];
    s.push_back(grid[i][j]);
   }
  }

  sort(s.begin(), s.end());

  vector<int> ans(2);

  for (int i = 0; i < s.size(); i++)
  {
   if (i > 0 && s[i] == s[i - 1])
   {
    ans[0] = s[i - 1];
   }
  }

  // to get the missing number , we must find the sum of number based on the size of 2d array and subtract the sum so we could get the missed value

  int arraysize = outsize * outsize;

  int count = (arraysize * (arraysize + 1)) / 2;

  ans[1] = count - sum + ans[0];

  return ans;
 }
};
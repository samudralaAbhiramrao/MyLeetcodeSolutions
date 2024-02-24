class Solution
{
public:
 vector<vector<int>> merge(vector<vector<int>> &intervals)
 {

  vector<vector<int>> mergedintervals;

  if (intervals.size() == 0)
  {
   return mergedintervals;
  }

  sort(intervals.begin(), intervals.end());

  vector<int> tempIntervals = intervals[0];

  for (auto it : intervals)
  {

   if (it[0] <= tempIntervals[1])
   {
    tempIntervals[1] = max(it[1], tempIntervals[1]);
   }
   else
   {

    mergedintervals.push_back(tempIntervals);
    tempIntervals = it;
   }
  }

  mergedintervals.push_back(tempIntervals);

  return mergedintervals;
 }
};
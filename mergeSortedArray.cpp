class Solution
{
public:
 void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
 {
  // Considering the size of nums1 as m + n -1

  // we are putting a pointer at last position where all the 0s are there.

  int last = m + n - 1;

  while (m > 0 & n > 0)
  {
   if (nums1[m - 1] > nums2[n - 1])
   {
    nums1[last] = nums1[m - 1];
    m--;
   }
   else
   {
    nums1[last] = nums2[n - 1];
    n--;
   }
   last--;
  }

  // If there are any elements left in nums2 then copy those elements to nums1[]

  while (n > 0)
  {
   nums1[last] = nums2[n - 1];
   n--;
   last--;
  }
 }
};
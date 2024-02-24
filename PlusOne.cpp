class Solution
{
public:
 vector<int> plusOne(vector<int> &digits)
 {
  int rightindex = digits.size() - 1;

  while (rightindex >= 0)
  {

   if (digits[rightindex] == 9)
   {
    digits[rightindex] = 0;
   }
   else
   {
    digits[rightindex] += 1;
    return digits;
   }
   rightindex--;
  }

  digits.insert(digits.begin(), 1);
  return digits;
 }
};
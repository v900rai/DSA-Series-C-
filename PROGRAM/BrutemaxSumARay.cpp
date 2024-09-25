#include <iostream>
using namespace std;
int main()
{
  int n = 7;
  int arr[7] = {3,
                -4,
                5,
                4,
                -1,
                7,
                -8};

  int maxi = INT32_MIN;
  for (int st = 0; st < n; st++)
  {
    int curSum = 0;
    for (int end = st; end <= n; end++)
    {
      curSum += arr[end];
      maxi = max(curSum, maxi);
    }
  }
  cout << "max subarrays sum " << maxi << endl;
}

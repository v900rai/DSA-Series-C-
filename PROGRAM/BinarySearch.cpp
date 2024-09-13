#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
  int left = 0;
  int right = size - 1;

  while (left <= right)
  {
    int mid = left + (right - left) / 2;

    // Check if the target is at mid
    if (arr[mid] == target)
    {
      return mid;
    }

    // If target is greater, ignore the left half
    if (arr[mid] < target)
    {
      left = mid + 1;
    }
    // If target is smaller, ignore the right half
    else
    {
      right = mid - 1;
    }
  }

  // Target is not present in the array
  return -1;
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  int target = 40;
  int size = sizeof(arr) / sizeof(arr[0]); // Get the size of the array
  int result = binarySearch(arr, size, target);

  if (result != -1)
  {
    cout << "Element found at index: " << result << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }

  return 0;
}

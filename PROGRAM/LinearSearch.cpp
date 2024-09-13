class LinearSearch
{
#include <iostream>
  using namespace std;

  int main()
  {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 40;
    bool found = false; // Flag to track if the target is found

    // Loop through the array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
      if (arr[i] == target)
      {
        cout << "Found the element: " << arr[i] << endl;
        found = true; // Set the flag to true if the target is found
        break;
      }
    }

    if (!found)
    {
      cout << "Element not found" << endl;
    }

    return 0;
  }
}
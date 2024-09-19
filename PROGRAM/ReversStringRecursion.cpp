

#include <iostream>
#include <string>
using namespace std;

void solve(string str, int idx) // Correct data types and parameters
{
  if (idx >= str.length()) // Base case
  {
    return;
  }
  solve(str, idx + 1);      // Recursive call
  cout << str[idx] << endl; // Print the current character
}

int main()
{
  string str = "abc"; // Correct string type
  solve(str, 0);      // Call with initial index 0
  return 0;
}

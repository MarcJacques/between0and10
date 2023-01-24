#include <iostream>
using namespace std;
int main() 
{
  int x;
  cin >> x;

  if ((x > 0) && (x < 10)) {
    cout << "This is what were looking for" << endl;
  } else {
    cout << "wrong";
  }
  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter Any Number :";
  cin >> num;

  bool prime = true;

  for (int i =2; i <=num/2; i++)
  {
    if(num%i == 0)
      prime = false;
  }
  if(prime)
    cout << num << "is a prime number";
  else
    cout << num << "is a not prime number";



  return 0;
}

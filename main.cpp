#include <iostream>
using namespace std;

int main()
{
  int num;  //deklarasi number
  cout << "Enter Any Number :";
  cin >> num; //untuk input angka

  bool prime = true;  //tipe data yg bisa di isi salah satu nilai dari 2 nilai : true atau false

  for (int i =2; i <=num/2; i++) //perulangan di mulai dari 2
  {
    if(num%i == 0) // jika inputan angka di bagi i 0
      prime = false; //maka prime  salah
  }
  if(prime) //jika prime true
    cout << num << "is a prime number"; //output akan menghasilkan bilangan itu adalah prima
  else
    cout << num << "is a not prime number"; //jika bukan prime maka output akan angka bukan bilangan prima



  return 0;
}

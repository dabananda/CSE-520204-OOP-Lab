// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Write a program to find largest and smallest number between two numbers of different classes

#include <iostream>

using namespace std;

class B;
class A {
  int number;

 public:
  A(int n) {
    number = n;
  }
  friend void Compare(A, B);
};

class B {
  int number;

 public:
  B(int n) {
    number = n;
  }
  friend void Compare(A, B);
};

void Compare(A a, B b) {
  a.number > b.number ? cout << "Maximum is number 1: " << a.number << endl : cout << "Maximum is number 2: " << b.number << endl;
}

int main() {
  int number1, number2;
  cout << "Enter number 1: ";
  cin >> number1;
  cout << "Enter number 2: ";
  cin >> number2;
  A a(number1);
  B b(number2);
  Compare(a, b);

  return 0;
}
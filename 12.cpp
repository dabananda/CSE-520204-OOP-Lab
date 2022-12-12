// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

// Q: Operator(+, -, *, /) overloading

#include <iostream>

using namespace std;

class Solution {
  float number;

 public:
  Solution() {}
  Solution(float n) {
    number = n;
  }
  void Print() {
    cout << number << endl;
  }
  Solution operator+(Solution& obj) {
    Solution x;
    x.number = this->number + obj.number;
    return x;
  }
  Solution operator-(Solution& obj) {
    Solution x;
    x.number = this->number - obj.number;
    return x;
  }
  Solution operator*(Solution& obj) {
    Solution x;
    x.number = this->number * obj.number;
    return x;
  }
  Solution operator/(Solution& obj) {
    Solution x;
    x.number = this->number / obj.number;
    return x;
  }
};

int main() {
  float x, y;
  cout << "Enter two numbers: ";
  cin >> x >> y;

  Solution a(x), b(y), result;

  cout << "Summation: ";
  result = a + b;
  result.Print();

  cout << "Substraction: ";
  result = a - b;
  result.Print();

  cout << "Multiplication: ";
  result = a * b;
  result.Print();

  cout << "Division: ";
  result = a / b;
  result.Print();

  return 0;
}
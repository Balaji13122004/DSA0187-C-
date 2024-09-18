#include <iostream>
using namespace std;

class Cube {
private:
  int n;

public:
  Cube(int num) {
    n = num;
    cout << "Cube of the numbers from 1 to " << n << " are: " << endl;
  }

  ~Cube() {
    for (int i = 1; i <= n; i++) {
      cout << i * i * i << " ";
    }
  }
};

int main() {
  int num;
  cout << "Enter a positive integer: ";
  cin >> num;
  Cube c(num);
  return 0;


#include <iostream>
#include <queue>
using namespace std;
int main() {

  queue<int> roll;

  roll.push(28);
  roll.push(29);
  cout << "Queue: ";

  while(!roll.empty()) {
    cout  << roll.front() << ", ";
    roll.pop();
  }
  cout << endl;
  return 0;
}

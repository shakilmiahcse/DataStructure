#include <iostream>
#include <vector>
using namespace std;
int main(){

  vector<int> num {1, 2, 3, 4};
  cout << "Initial Vector: ";

  for (const int& i : num){
    cout << i<<"  ";
  }
  num.push_back(5);
  num.push_back(6);
  num.push_back(7);

  cout << "\nUpdated Vector: ";

  for (const int& i : num) {
    cout << i << "  ";
  }
  return 0;
}


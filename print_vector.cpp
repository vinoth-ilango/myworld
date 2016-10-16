#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void printVec(const std::vector<T>& vec) {
  for (const auto& e : vec) {
    cout << "(" << e << ") ";
  }
  cout << endl;
  cout << "number of elements : " << vec.size() << endl;
}

int main() {
  std::vector<double> dblVec = {0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8};
  printVec(dblVec);
  return 0;
}

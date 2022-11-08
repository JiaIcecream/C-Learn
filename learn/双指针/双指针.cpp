#include<iostream>

const int Max = 5;

int sum_arr(const int *begin, const int *end);

int main() {
  using namespace std;

  int cook[Max] = {10,2,6,8,3};

  const int *const pt = cook;

  int total = sum_arr(cook, cook + Max);

  cout << "total is " << total <<  endl;
  return 0;
}

int sum_arr(const int *begin, const int *end) {
  const int *pt = nullptr;
  int total = 0;
  for (pt=begin; pt != end;pt++) {
    total += *pt;
  }
  return total;
}
#include<iostream>
char * getString(char c,int n);
int main() {
  using namespace std;
  // 输入char c
  char c;
  int n = 10;
  cout << "please input char" << endl;
  cin >> c;

  char *ptf = getString(c,n);
  // 传入指针，打印指针指向的字符串内容
  cout << ptf << endl;
  delete[] ptf;
  return 0;
}

char * getString(char c,int n) {
  char *pt = new char[n + 1];
  pt[n] = '\0';
  while(n-- > 0) {
    pt[n] = c;
  }
  // pt 表示的是地址，正好返回给*ptf初始化
  return pt;
}
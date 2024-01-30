#include <iostream>
using namespace std;
int factorial(int n){
  if (n <= 1){
    return 1;
  }
  else{
    return n + factorial(n-1);
  }
}

int main(){
  int n;
  cout << "Please Enter Integer: ";
  cin >> n;
  int ans = factorial(n);
  cout << n << "! is " << ans;
  return 0;
}

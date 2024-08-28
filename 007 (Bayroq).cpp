#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  long long F[46] = {0, 1};
  for(int i= 2; i <= 45; i++) F[i] = F[i-2] + F[i-1];
  cout << F[N] * 2;
  return 0;
}

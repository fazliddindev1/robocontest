#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int y;
    cin >> y;
    if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)){
        cout << "12/09/";
    }
    else
    cout << "13/09/";
    
    cout << setfill('0')  << setw(4) << y;
    
  return 0;
}

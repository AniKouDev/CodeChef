#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    n = 25-n;
    if(n%4 == 0)
        cout << n/4;
    else
        cout << n/4 + 1;
}
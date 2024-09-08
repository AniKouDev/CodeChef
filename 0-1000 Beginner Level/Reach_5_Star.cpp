#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    x = x+y;
    if(x>=2000)
        cout << "Yes";
    else
        cout << "No";
}
#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if(x==y)
        cout << "SAME";
    else if(x<y)
        cout << "INCREASED";
    else
        cout << "DECREASED";
}
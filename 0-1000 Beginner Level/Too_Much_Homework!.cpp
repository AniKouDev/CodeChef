#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if(x+(y*10) >= 100)
        cout << "Yes";
    else
        cout << "No";
}
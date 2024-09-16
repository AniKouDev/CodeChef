#include <iostream>
using namespace std;

int main(){
    int r, o, c;
    cin >> r >> o >> c;
    r = r-c;
    o = 20-o;
    if(o*6*6 > r)
        cout << "Yes";
    else
        cout << "No";
}
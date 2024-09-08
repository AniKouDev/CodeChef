#include <iostream>
using namespace std;

int main(){
    int x;
    double y;
    cin >> x >> y;
    if(x%5 == 0){
        if(x <= (y-0.5))
            y = y-float(x)-0.5;
    }
    cout << y;
}
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double x, y;
        cin >> x >> y;
        double case1 = pow(x,4) + (4*pow(y,2));
        double case2 = 4*pow(x,2)*y;
        if(x==y)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;

    }
}
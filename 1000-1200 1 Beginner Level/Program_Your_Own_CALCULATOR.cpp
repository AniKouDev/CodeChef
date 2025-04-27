#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b;
    char c;
    cin >> a >> b >> c;
    if(c=='+')
        cout << a+b;
    else if(c=='-')
        cout << a-b;
    else if(c=='*')
        cout << a*b;
    else 
        cout << fixed << setprecision(7) << a/b;
}
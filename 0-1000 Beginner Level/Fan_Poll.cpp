#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int max1 = max(a,b);
    max1 = max(max1,c);
    cout << ((max1==a)?"YES":"NO");
}
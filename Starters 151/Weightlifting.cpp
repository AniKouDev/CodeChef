#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << max(a,b) + max(c,d) + max(e,f);
}
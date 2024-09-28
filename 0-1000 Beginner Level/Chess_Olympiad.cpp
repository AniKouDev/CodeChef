#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    float me = a + b*(0.5);
    float them = b*(0.5) + c;
    int rounds = 4-(a+b+c);

    if(me+rounds>them)
        cout << "YES";
    else
        cout << "NO";
}
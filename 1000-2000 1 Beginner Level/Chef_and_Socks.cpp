#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    c = c-a;
    b = c/b;
    if(b%2 == 1)
        cout << "Unlucky Chef";
    else
        cout << "Lucky Chef";
}
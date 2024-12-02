#include <iostream>
using namespace std;

int main(){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a/b == c/d) || (a/b == d/c) || (a/c == d/b) || (a/c == b/d) || (a/d == b/c) || (a/d == c/b)){
        cout << "Possible";
    }
    else
        cout << "Impossible";
}
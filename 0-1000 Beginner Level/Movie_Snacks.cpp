#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    cout << (((x+y)<=z)?((2*x)+(3*y)):((2*z)+y));
}
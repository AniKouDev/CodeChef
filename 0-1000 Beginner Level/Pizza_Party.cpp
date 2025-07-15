#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    a++;
    int total = a*4 + b*3;
    if(total%8 == 0)
        cout << total/8;
    else
        cout << total/8 + 1;
}
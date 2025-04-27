#include <iostream>
using namespace std;

#define No "No"
#define Yes "Yes"

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if((a+b > c) && (b+c > a) && (c+a > b))
        cout << Yes;
    else
        cout << No;
}
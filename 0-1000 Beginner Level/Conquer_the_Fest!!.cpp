#include <iostream>
using namespace std;

#define No "No"
#define Yes "Yes"

int main(){
    int x, y;
    cin >> x >> y;
    if(x >= (y*10))
        cout << Yes;
    else
        cout << No;
}
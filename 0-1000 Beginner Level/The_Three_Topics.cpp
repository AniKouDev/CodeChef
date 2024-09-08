#include <iostream>
#include <set>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a==d || b==d || c==d)
        cout << "Yes";
    else
        cout << "No";
}
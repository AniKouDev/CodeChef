#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 0;
    while(a--){
        int x;
        cin >> x;
        if(x+c == b)
            flag = 1;
    }
    if(flag)
        cout << "Yes";
    else
        cout << "No";
}
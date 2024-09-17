#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int num = 10 + b - a;
        if(num<=0)
            cout << 0;
        else if(num%3 == 0)
            cout << num/3;
        else
            cout << num/3 + 1;
        breakline;
    }
}
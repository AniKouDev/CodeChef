#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        if(k%4 != 0){
            int a = k/4;
            int help = k - (a*2);
            int b = help/2;
            cout << a * b;
        }
        else
            cout << (k/4) * (k/4);
        breakline;
    }
}
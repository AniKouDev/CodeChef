#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if(a%4 == 0)
            cout << a/4;
        else
            cout << a/4 + 1;
        breakline;
    }
}
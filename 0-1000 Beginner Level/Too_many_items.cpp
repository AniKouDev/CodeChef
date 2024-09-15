#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if(a%10 == 0)
            cout << a/10;
        else
            cout << a/10 + 1;
        breakline;
    }
}
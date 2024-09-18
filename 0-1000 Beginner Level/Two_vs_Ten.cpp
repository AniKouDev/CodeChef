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
            cout << 0;
        else if(a%10 == 5)
            cout << 1;
        else
            cout << -1;
        breakline;
    }
}
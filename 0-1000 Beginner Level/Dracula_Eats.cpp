#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%7 > 1)
            cout << n/7 + 1;
        else
            cout << n/7;
        breakline;
    }
}
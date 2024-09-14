#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%4 == 0)
            cout << n/4;
        else
            cout << n/4 + 1;
        breakline;
    }
}
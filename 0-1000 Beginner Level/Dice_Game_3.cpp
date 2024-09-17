#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1)
            cout << 1;
        else
            cout << n*6 + (n/2);
        breakline;
    }
}
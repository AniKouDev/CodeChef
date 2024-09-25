#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, n;
        cin >> x >> n;
        x = x*100;
        if(n<=x)
            cout << 0;
        else{
            n = n-x;
            if(n%100==0)
                cout << n/100;
            else   
                cout << n/100 - 1;
        }
        breakline;
    }

}
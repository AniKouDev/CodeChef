#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a<=b)
            cout << c;
        else{
            if(a%b == 0)
                cout << (a/b)*c;
            else
                cout << (a/b+1)*c;
        }
        breakline;
    }
}
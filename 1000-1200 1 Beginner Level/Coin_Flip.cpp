#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int q;
        cin >> q;
        while(q--){
            int a, b, c;
        cin >> a >> b >> c;
        if(a==1){
            if(c==1){
                cout << b/2;
            }
            else{
                cout << b - (b/2);
            }
        }
        else{
            if(c==1){
                cout << b - (b/2);
            }
            else{
                cout << (b/2);
            }
        }
        breakline;
        }
    }
}
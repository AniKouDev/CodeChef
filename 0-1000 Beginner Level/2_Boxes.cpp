#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, k;
        cin >> a >> b >> k;
        if(((a%2 == 0) && (b%2 == 0)) || ((a%2 != 0) && (b%2 != 0))){
            if(k%2 == 0 && k <= (a+b)){
                int help = abs(a-b);
                help = abs(k-help);
                cout << help/2;
            }
            else{
                cout << -1;
            }
        }
        else{
            if(k%2 != 0 && k <= (a+b)){
                int help = abs(a-b);
                help = abs(k-help);
                cout << help/2;
            }
            else{
                cout << -1;
            }
        }
        breakline;
    }
}
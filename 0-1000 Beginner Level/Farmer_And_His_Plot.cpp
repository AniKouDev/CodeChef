#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        for(int i = min(a,b); i>0; i--){
            if((a%i == 0) && (b%i == 0)){
                cout << (a/i)*(b/i);
                breakline;
                break;
            }
        }
    }
}
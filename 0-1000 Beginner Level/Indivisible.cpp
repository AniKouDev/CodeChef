#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        for(int i = 2; i < 101; i++){
            if(a%i!=0 && b%i!=0 && c%i!=0){
                cout << i;
                break;
            }
        }
        breakline;
    }
}
#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        while(b>a){
            b = b-a-1;
        }
        cout << b;
        breakline;
    }
}
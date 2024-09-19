#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if(b>a-2){
            cout << b/(a-1);
        }
        else
            cout << 0;
        breakline;
    }
}
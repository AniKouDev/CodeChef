#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a%3==0 || b%3==0){
            cout << 0; 
        }
        else if(abs(a-b)%3 == 0)
            cout << 1;
        else    
            cout << 2;
        breakline;
    }
}
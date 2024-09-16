#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a%b == 0)
            cout << (a*a)/(b*b);
        else{
            int n = a/b;
            n = a - n*b;
            n = n*(2*a-n);
            cout << ((a*a)-n)/(b*b);
        }
            
        breakline;
    }
}
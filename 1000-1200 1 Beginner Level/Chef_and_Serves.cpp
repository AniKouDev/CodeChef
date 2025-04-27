#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, k;
        cin >> a >> b >> k;
        a = a+b;
        a = a/k;
        if(a%2 == 0)
            cout << "CHEF";
        else
            cout << "COOK";
        breakline;
    }
}
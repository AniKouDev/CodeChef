#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a%10 == 0)
            a--;
        if(b%10 == 0)
            b--;
        cout << abs(a/10 - b/10);
        breakline;
    }
}
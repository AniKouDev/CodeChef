#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        a = a-1;
        b = b-a;
        cout << b*c;
        breakline;
    }
}
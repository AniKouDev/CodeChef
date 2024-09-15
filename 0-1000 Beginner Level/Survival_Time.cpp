#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        b *= 5;
        c += (a/b);
        cout << c;
        breakline;
    }
}
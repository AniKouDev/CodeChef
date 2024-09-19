#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        cout << ((c%a == 0)?c/a:c/a+1)+(c/b);
        breakline;
    }
}
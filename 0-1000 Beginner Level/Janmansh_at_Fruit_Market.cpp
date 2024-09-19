#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, x;
        cin >> x >> a >> b >> c;
        int h1 = min(a,b);
        h1 = min(h1, c);
        int h2 = max(a,b);
        h2 = max(h2, c);
        int h3 = a+b+c-h1-h2;
        cout << h3+((x-1)*h1);
        breakline;
    }
}
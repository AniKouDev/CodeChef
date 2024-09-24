#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int max1 = max(a,b);
        max1 = max(max1,c);
        int min1 = min(a,b);
        min1 = min(min1,c);
        cout << a+b+c-max1-min1;
        breakline;
    }
}
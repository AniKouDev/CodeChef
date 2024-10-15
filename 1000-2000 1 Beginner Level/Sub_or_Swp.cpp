#include <iostream>
using namespace std;

#define breakline cout<<endl

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << gcd(x, y);
        breakline;
    }
}
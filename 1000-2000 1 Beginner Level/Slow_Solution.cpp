#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        long long sum = 0;
        while(c >= b && a>0){
            sum += (b*b);
            c -= b;
            a--;
        }
        if(a!=0)
            sum += (c*c);
        cout << sum;
        breakline;
    }
}
#include<iostream>
#include<cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        a = log2(a);
        int res = a*b + c*(a-1);
        cout << res;
        breakline;
    }
}
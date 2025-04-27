#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if(((a+b <= d) && (c <= e)) || ((a+c <= d) && (b <= e)) || ((b+c <= d) && (a <= e)))
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}
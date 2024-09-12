#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if((a+b % 2 != 0) || (c+b % 2 != 0) || (a+c % 2 != 0))
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}
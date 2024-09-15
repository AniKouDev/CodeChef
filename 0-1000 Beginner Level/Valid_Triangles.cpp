#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a+b+c;
        if(sum==180)
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}
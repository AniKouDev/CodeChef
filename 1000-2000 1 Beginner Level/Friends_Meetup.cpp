#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a>=b)
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}
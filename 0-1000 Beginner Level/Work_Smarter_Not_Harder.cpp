#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int v1 = (a%b == 0)?a/b:a/b+1;
        int v2 = (a%c == 0)?a/c:a/c+1;
        if(v1-v2 < 1)
            cout << -1;
        else if(v1-v2 == 1)
            cout << 0;
        else 
            cout << v1-v2-1;
        breakline;
    }
}
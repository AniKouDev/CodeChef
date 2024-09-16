#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        a = abs(a-b);
        if(a==0)
            cout << 0;
        else if(a<=c)
            cout << 1;
        else{
            if(a%c == 0)
                cout << a/c;
            else
                cout << a/c+1;
        }
        breakline;
    }
}
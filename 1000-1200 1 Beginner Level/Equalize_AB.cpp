#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a==b)
            cout << "yes";
        else if(a>b){
            a = a-b;
            if(a%c == 0 && (a/c)%2 == 0)
                cout << "yes";
            else
                cout << "no";
        }
        else{
            b = b-a;
            if(b%c == 0 && (b/c)%2 == 0)
                cout << "yes";
            else
                cout << "no";
        }
        breakline;
    }
}
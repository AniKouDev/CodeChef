#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int count = 1;
        a = a-c;
        if(a>0){
            if(a%b == 0)
                count += a/b;
            else
                count += a/b + 1;
        }
        cout << count;
        breakline;
    }
}
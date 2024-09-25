#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int s, a, b, z;
        cin >> s >> a >> b >> z;
        int total = a+b+z;
        if(s>=total)
            cout << 0;
        else if(s>= (total-max(a,b)))
            cout << 1;
        else
            cout << 2;
        breakline;
    }
}
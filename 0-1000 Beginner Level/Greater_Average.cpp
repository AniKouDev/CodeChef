#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float a, b, c;
        cin >> a >> b >> c;
        if((a+b)/2 > c)
            cout << "yes";
        else
            cout << "no";
        breakline;
    }
}
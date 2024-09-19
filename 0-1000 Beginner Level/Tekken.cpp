#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a<=abs(b-c))
            cout << "No";
        else
            cout << "Yes";
        breakline;
    }
}
#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        a = b-a;
        b = a%3;
        b = 3-b;
        if(b<2)
            cout << "No";
        else
            cout << "Yes";
        breakline;
    }
}
#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a>b+c || b>a+c || c>a+b)
            cout << "Yes";
        else 
            cout << "No";
        breakline;
    }
}
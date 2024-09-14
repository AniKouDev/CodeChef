#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a%b == 0 && (a/b)%2==0)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}
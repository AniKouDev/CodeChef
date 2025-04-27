#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(b-a >= a || (a==b))
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}
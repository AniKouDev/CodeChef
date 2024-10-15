#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a%2 == 0)
            cout << "Yes";
        else{
            if(b%2 == 0)
                cout << "No";
            else
                cout << "Yes";
        }
        breakline;
    }
}
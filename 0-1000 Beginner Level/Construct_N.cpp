#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0)
            cout << "Yes";
        else if(n%7 == 0)
            cout << "Yes";
        else{
            n=n-7;
            if(n%2 == 0 && n>0)
                cout << "Yes";
            else
                cout << "No";
        }
        breakline;
    }
}
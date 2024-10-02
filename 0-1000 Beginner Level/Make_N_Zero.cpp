#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n!=5 && n>2)
            cout << "Yes";
        else 
            cout << "No";
        breakline;
    }
}
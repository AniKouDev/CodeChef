#include<iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0)
            cout << n/2;
        else    
            cout << n/2 + 1;
        cout << " " << n;
        breakline;
    }
}
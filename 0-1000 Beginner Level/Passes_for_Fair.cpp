#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(n<=k-1)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}
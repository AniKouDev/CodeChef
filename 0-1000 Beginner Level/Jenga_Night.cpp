#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        if(x%n==0)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}
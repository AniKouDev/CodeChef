#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if((6*m*6) >= n)
            cout << "yes";
        else
            cout << "No";
        breakline;
    }
}
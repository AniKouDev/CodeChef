#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==0)
            cout << 1;
        else{
            cout << 3 * n;
        }
        breakline;
    }
}
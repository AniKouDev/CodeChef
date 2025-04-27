#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << "1 2 " << (3*n) - 1 - 2;
        breakline;
    }
}
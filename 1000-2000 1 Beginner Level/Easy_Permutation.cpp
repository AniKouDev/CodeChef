#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        while(n!=0){
            cout << n << " ";
            n--;
        }
        breakline;
    }
}
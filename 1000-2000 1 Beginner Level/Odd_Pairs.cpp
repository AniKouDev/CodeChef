#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long odd = n/2;
        if(n%2 == 0){
            cout << 2 * (odd) * (n-odd);
        }
        else{
            odd++;
            cout << 2 * (odd) * (n-odd);
        }
        breakline;
    }
}
#include <iostream>
using namespace std;

#define breakline cout<<endl 

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long n = a-1;
        long long r = a-b;
        if(r>n/2)
            r = n-r;
        long long res = 1;
        for(int i = 0; i < r; i++){
            res *= n;
            res /= (i+1);
            n--;
        }
        cout << res;
        breakline;
    }
}
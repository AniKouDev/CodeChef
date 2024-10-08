#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int sum = 0;
        while(n--){
            int a;
            cin >> a;
            if(a>k)
                sum += (a-k);
        }
        cout << sum;
        breakline;
    }
}
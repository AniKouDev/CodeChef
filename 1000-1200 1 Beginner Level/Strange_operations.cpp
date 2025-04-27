#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            sum += help;
        }
        sum++;
        sum = sum * pow(2,(k-1));
        cout << ((sum%2==0)?"even":"odd");
        breakline;
    }
}
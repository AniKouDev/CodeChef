#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = n/100;
        n = n%100;
        sum += n/50;
        n = n%50;
        sum += n/10;
        n = n%10;
        sum += n/5;
        n = n%5;
        sum += n/2;
        n = n%2;
        sum += n;
        cout << sum;
        breakline;
    }
}
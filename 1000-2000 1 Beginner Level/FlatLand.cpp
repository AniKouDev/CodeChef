#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int total = 0;
        while(n){
            int help = (int)sqrt(n);
            n = n-(help*help);
            total++;
        }
        cout << total;
        breakline;
    }
}
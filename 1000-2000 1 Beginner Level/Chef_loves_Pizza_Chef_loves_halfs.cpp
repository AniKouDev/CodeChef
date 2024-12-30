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
        if((n&(n-1)) == 0)
            cout << 0;
        else{
            int help = n;
            int count = 0;
            while(help != 0){
                help = help >> 1;
                count++;
            }
            cout << 2*n - (pow(2,count));
        }
        breakline;
    }
}
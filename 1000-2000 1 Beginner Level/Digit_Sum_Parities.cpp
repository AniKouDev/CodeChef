#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int help = n;
        int count = 0;
        while(true){
            if(n%10 == 9){
                count++;
                n=n/10;
            }
            else{
                break;
            }
        }
        cout << ((count%2 == 0)?(help+1):(help+2));
        breakline;
    }
}
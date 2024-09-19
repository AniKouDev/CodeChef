#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> k;
        int count = 0;
        while(k){
            int help = k%10;
            if(help==4)
                count++;
            k/=10;
        }
        cout << count;
        breakline;
    }
}
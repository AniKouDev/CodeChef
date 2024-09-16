#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int primes[50002] = {0};


int main(){
    primes[0]=1;
    primes[1]=1;
    for(int i = 2; i <50002; i++){
        if(primes[i]==0){
            for(int j = i*i; j < 50002; j+=i)
                primes[j]=1;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = 1;
        for(int i = 2; i<=sqrt(n); i++){
            if(primes[i]==0){
                if(n%i == 0){
                    cout << "Yes";
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
            cout << "No";
        breakline;
    }
}
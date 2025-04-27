#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int dp[100001]={0};
vector<int> primes;

void generate(){
    dp[0] = 1;
    dp[1] = 1;
    for(long long i = 2; i <= 100000; i++){
        if(dp[i] == 0){
            primes.push_back(i);
            for(long long j = i*i; j <= 100000; j+=i)
                dp[j] = 1;
        }
    }
}

int main(){
    int t;
    cin >> t;
    generate();
    while(t--){
        int m, n;
        cin >> m >> n;
        for(long long i = m; i <= n; i++){
            if(i <= 100000){
                if(dp[i]==0){
                    cout << i;
                    breakline;  
                }
            }
            else{
                int flag = 0;
                for(long long j : primes){
                    if(j>sqrt(i))
                        break;
                    if(i%j == 0){
                        flag = 1;
                        break;
                    }
                }
                if(flag==0)
                    cout << i;
                    breakline;
            }
        }
        breakline;
    }
}
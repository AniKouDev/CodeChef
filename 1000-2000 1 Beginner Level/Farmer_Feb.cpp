#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){

    int prime[3001] = {0};
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2; i < 3001; i++){
        if(prime[i] == 0){
            for(int j = i*i; j < 3001; j += i)
                prime[j] = 1;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int sum = x+y;
        for(int i = sum+1; i < 3001; i++){
            if(prime[i] == 0){
                cout << i-sum;
                break;
            }
        }
        breakline;
    }
}
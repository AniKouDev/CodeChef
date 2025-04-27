#include<iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum = 0;
        long long k;
        cin >> k;
        for(int i = 0; i < n-1; i++){
            long long help;
            cin >> help;
            sum += (abs((long long)(k-help)) - 1);
            k = help;
        }
        cout << sum;
        breakline;
    }
}
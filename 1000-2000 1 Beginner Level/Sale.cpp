#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long  maxSum = 0, sum = 0;
        for(int i = 0; i < n; i++){
            long long help, helpSum = sum;
            cin >> help;
            if(i == n-1)
                sum += (help*2);
            else 
                sum += help;
            helpSum += (2*help);
            if(helpSum > sum){
                if(maxSum < helpSum)
                    maxSum = helpSum;
            }
            else
                if(maxSum < sum)
                    maxSum = sum;
        }
        cout << maxSum;
        breakline;
    }
}
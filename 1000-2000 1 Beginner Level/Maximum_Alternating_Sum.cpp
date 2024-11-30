#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        int sum2 = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            arr.push_back(help);
            sum2 += arr[i];
        }
        sort(arr.begin(), arr.end());
        int sum = 0;
        if(n%2 == 0){
            for(int i = 0; i < n/2; i++){
                sum += arr[n-1-i];
            }
        }
        else{
            for(int i = 0; i < (n/2)+1; i++){
                sum += arr[n-1-i];
            }
        }
        sum2 = sum2-sum;
        cout << sum-sum2;
        breakline;
    }
}
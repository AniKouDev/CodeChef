#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[7] = {0};
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            arr[help]++;
        }
        int sum = ((arr[4]*4) + (arr[5]*5) + (arr[6]*6));
        if(arr[1] <= k){
            k -= arr[1];
            sum += arr[1]*6;
        }
        else{
            sum += 6*k;
            sum += 1*(arr[1]-k);
            k = 0;
        }
        if(arr[2] <= k){
            k -= arr[2];
            sum += arr[2]*5;
        }
        else{
            sum += 5*k;
            sum += 2*(arr[2]-k);
            k = 0;
        }
        if(arr[3] <= k){
            k -= arr[3];
            sum += arr[3]*4;
        }
        else{
            sum += 4*k;
            sum += 3*(arr[3]-k);
            k = 0;
        }
        cout << sum;
        breakline;
    }
}
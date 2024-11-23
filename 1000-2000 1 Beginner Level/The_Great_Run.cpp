#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int max = 0;
        for(int i = 0; i < n; i++){
            int sum = arr[i];
            for(int j = i+1; j < i+k && j < n; j++){
                sum += arr[j];
            }
            if(max < sum)
                max = sum;
        }
        cout << max;
        breakline;
    }
}
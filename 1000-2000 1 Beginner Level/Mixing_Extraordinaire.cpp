#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum = 0;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++)
                sum += (arr[i] * arr[j]);
        }
        cout << sum;
        breakline;
    }
}
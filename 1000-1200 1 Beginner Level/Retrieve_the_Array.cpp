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
        long long arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        long long ac_sum = sum/(n+1);
        for(int i = 0; i < n; i++){
            cout << arr[i] - ac_sum << " ";
        }
        breakline;
    }
}
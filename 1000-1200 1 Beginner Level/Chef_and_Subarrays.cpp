#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int ans = 0;
        for(int i = 0; i < n; i++){
            int mul = arr[i];
            int sum = arr[i];
            for(int j = i+1; j < n; j++){
                mul *= arr[j];
                sum += arr[j];
                if(mul == sum)
                    ans++;
            }
        }
        cout << ans+n;
        breakline;
    }
}
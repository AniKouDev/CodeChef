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
        int ans=0, max = 0;
        int i, j;
        for(int i = 0; i < n-ans; i++){
            int sum = 0;
            for(int help = i; help < i+ans; help++)
                sum += arr[help];
            for(int j = i+ans; j < n; j++){
                sum += arr[j];
                if(sum%2 == 0){
                    if(max<(j-i+1))
                        max = j-i+1;
                }
            }
            ans = max;
        }
        cout << ans;
        breakline;
    }
}
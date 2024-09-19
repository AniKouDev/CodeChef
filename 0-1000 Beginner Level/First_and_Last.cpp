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
        int maxn = -1;
        int maxi;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n-1; i++){
            if(maxn < (arr[i]+arr[i+1]))
                maxn = arr[i]+arr[i+1];
        }
        if(maxn<arr[0]+arr[n-1]);
            maxn = arr[0]+arr[n-1];
        cout << maxn;
        breakline;
    }
}
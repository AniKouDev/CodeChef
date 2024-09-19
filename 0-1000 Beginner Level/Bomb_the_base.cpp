#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int j = n-1;
        while(j>=0 && arr[j]>x);
        cout << j+1;
        breakline;
    }
}
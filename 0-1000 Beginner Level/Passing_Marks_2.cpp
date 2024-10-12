#include <iostream>
using namespace std;

#define breakline cout<<endl

void insert(int arr[], int k, int n){
    while(arr[n-1]>k && n != 0){
        arr[n]=arr[n-1];
        n--;
    }
    arr[n]=k;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            insert(arr,k,i);
        }

        cout << arr[n-x]-1;
        breakline;
    }
}
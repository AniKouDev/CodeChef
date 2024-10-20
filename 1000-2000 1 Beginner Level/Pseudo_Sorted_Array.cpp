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
        for(int i = 0; i < n-1; i++)
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
                break;
            }
        int flag = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                flag++;
                break;
            }
        }
        if(flag != 0)
            cout << "No";
        else
            cout << "Yes";
        breakline;
    }
}
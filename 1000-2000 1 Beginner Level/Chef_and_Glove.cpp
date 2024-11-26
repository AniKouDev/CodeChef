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
        int brr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < n; i++)
            cin >> brr[i];
        int front = 0, back = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > brr[i]){
                front = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] > brr[n-1-i]){
                back = 1;
                break;
            }
        }
        if(front == 0 && back == 0){
            cout << "both";
        }
        else if(front == 0 && back == 1){
            cout << "front";
        }
        else if(front == 1 && back == 0){
            cout << "back";
        }
        else
            cout << "none";
        breakline;
    }
}
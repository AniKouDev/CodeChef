#include <iostream>
using namespace std;

#define breakline cout<<endl

void insert(int *arr, int value, int index){
    if(index%2 == 0){
        if(value < arr[index-2]){
            arr[index-1] = arr[index-2];
            arr[index-2] = value;
        }
        else{
            arr[index-1] = value;
        }
    }
    else{
        if(value > arr[index-2]){
            arr[index-1] = arr[index-2];
            arr[index-2] = value;
        }
        else{
            arr[index-1] = value;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(i==0)
                arr[0] = help;
            else{
                insert(arr, help, i+1);
            }
        }
        for(int i : arr)
            cout << i << " ";
        breakline;
    }
}
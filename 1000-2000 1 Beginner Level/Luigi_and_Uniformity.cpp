#include <iostream>
#include <climits>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int min = INT_MAX;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(min > arr[i])
                min = arr[i];
        }
        int count = 0, flag = 0;
        for(int i : arr){
            if(i%min == 0 && i!=min)
                count++;
            else if(i%min != 0)
                flag = 1;
        }
        if(flag)
            cout << n;
        else
            cout << count;
        breakline;
    }
}
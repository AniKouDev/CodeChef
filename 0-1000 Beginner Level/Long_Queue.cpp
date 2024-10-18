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
        int i;
        for(i = n-2; i >= 0; i--){
            if(arr[i] > (arr[n-1]/2))
                break;
        }
        cout << i+2;
        breakline;
    }
}
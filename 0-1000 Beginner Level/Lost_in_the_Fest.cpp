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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int help = arr[n-1];
        for(int i = 0; i < n; i++){
            if(arr[i]>=help){
                cout << n-1-i;
                break;
            }
        }
        breakline;
    }
}
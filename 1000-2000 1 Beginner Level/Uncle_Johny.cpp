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
        int m;
        cin >> m;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] < arr[m-1])
                count++;
        }
        cout << count+1;
        breakline;
    }
}
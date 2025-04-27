#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] == (arr[i] & arr[j]))
                    count++;
            }
        }
        cout << count;
        breakline;
    }
}
#include <iostream>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p = 0;
        int arr[n], hash[n+1];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            hash[arr[i]]++;
        }
        int max = -1, num = 0;
        for(int i = 0; i < n+1; i++){
            if(max<hash[i]){
                num = i;
                max = hash[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i]==0)
                arr[i] = num;
        }
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] == arr[j])
                    p++;
            }
        }
        cout << p << endl;
    }
}
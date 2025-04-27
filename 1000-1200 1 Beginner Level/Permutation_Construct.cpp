#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[k] = {0};
        int flag = 0;
        for(int i = 1; i <= n; i++){
            arr[i%k]++;
        }
        for(int i = 0; i < k; i++){
            if(arr[i] == 1){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout << -1;
        else{
            for(int i = k+1; i <= n; i++)
                cout << i << " ";
            int help = n%k;
            help += 1;
            help = help%k;
            if(help == 0)
                help = k;
            for(int i = help; i <= k; i++)
                cout << i << " ";
            for(int i = 1; i < help; i++)
                cout << i << " ";
        }
        breakline;
    }
}
#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int x2 = x;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int maxLen = 0;
        for(int i = 0; i < n; i++){
            int len = 1;
            int h = x;
            int help = arr[i], ind = i;
            if(maxLen >= n-i)
                break;
            for(int j = i+1; j < n; j++){
                if(arr[j] >= arr[j-1]){
                    len++;
                }
                else{
                    
                    if(arr[j]*h >= arr[j-1]){
                        len++;
                        help = arr[j];
                        ind = j;
                        arr[j] *= h;
                        h = 1;
                    }
                    else{
                        arr[ind] = help;
                        break;
                    }
                }
                if(maxLen < len)
                        maxLen = len;
            }
        }
        cout << maxLen;
        breakline;
    }
}
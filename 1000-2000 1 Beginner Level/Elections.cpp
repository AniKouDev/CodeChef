#include <iostream>
#include <algorithm>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            arr[i] = arr[i] - help;
        }
        int count = 0;
        sort(arr, arr+n);
        for(int i = n-1; i >= 0; i--){
            if(arr[i]>0)
                count++;
            else{
                int help = 1-arr[i];
                if(x>=help){
                    x-=help;
                    count++;
                }
            }
        }
        if(count>(n/2))
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}
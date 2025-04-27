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
        arr[n-1] = n;
        int help = 0;
        for(int i = n-1; i > 0; i--){
            if(help^1 == 1)
                n = n-i;
            else 
                n = n+i;
            help ^= 1;
            arr[i-1] = n;
        }
        for(int i : arr)
            cout << i << " ";
        breakline;
    }
}
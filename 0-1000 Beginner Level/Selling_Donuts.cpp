#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int arr[n], brr[m];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < m; i++)
            cin >> brr[i];
        int sad = 0;
        for(int i = 0; i < m; i++){
            if(arr[brr[i]-1] > 0)
                arr[brr[i]-1]--;
            else 
                sad++;
        }
        cout << sad;
        breakline;
    }
}
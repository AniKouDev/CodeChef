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
        int count = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 1)
                count++;
        }
        count = n-count;
        cout << ((count%2)?"NO":"YES");
        breakline;
    }
}
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
        int flag = 1;
        int sm = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 1)
                flag = 0;
            sm += arr[i];
        }
        if(flag == 0)
            cout << "CHEF";
        else if(sm%2 == 0)
            cout << "CHEFINA";
        else
            cout << "CHEF";
        breakline;

    }
}
#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n+1] = {0};
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            arr[help]++;
        }
        int flag = 0;
        for(int i = 1; i < n+1; i++){
            if(arr[i]%i != 0){
                flag = 1;
                break;
            }
        }
        cout << ((flag)?"NO":"YES");
        breakline;
    }
}
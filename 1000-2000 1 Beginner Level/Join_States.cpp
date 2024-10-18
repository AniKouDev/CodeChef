#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int arr[a];
        for(int i = 0; i < a; i++)
            cin >> arr[i];
        int count = 0;
        int sum = 0;
        for(int i = 0; i < a; i++){
            if(arr[i]+sum >= b){
                count++;
                sum = 0;
            }
            else{
                sum += arr[i];
            }
        }
        cout << count;
        breakline;
    }
}
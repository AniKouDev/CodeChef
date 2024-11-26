#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[11] = {0};
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            arr[help]++;
        }
        int max = 0;
        int point;
        for(int i = 0; i < 11; i++){
            if(max < arr[i]){
                max = arr[i];
                point = i;
            }
        }
        for(int i = 0; i < 11; i++){
            if(i == point)
                continue;
            else if(max == arr[i]){
                max = -1;
                break;
            }
        }
        if(max == -1)
            cout << "CONFUSED";
        else
            cout << point;
        breakline;
    }
}
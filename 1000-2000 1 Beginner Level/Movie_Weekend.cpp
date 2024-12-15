#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int l[n], r[n];
        for(int i = 0; i < n; i++){
            cin >> l[i];
        }
        for(int i = 0; i < n; i++){
            cin >> r[i];
        }
        int index = 0;
        int max = 0;
        int rmax = 0;
        for(int i = 0; i < n; i++){
            int res = l[i] * r[i];
            if(max < res){
                max = res;
                rmax = r[i];
                index = i;
            }
            else if(max == res){
                if(rmax < r[i]){
                    rmax = r[i];
                    index = i;
                }
            }
        }
        cout << index+1;
        breakline;
    }
}
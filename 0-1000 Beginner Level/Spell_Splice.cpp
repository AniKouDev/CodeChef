#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cin >> b[i];
        }
        int max = -1;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int help = (a[i]*b[j]) + (b[i]*a[j]);
                if(max<help)
                    max = help;
            }
        }
        cout << max;
        breakline;
    }
}
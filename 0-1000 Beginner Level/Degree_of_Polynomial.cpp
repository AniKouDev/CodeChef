#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int degree;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            if(k!=0)
                degree = i;
        }
        cout << degree;
        breakline;
    }
}
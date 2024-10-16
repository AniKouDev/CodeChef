#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, b;
        cin >> n >> b;
        int max = 0;
        for(int i = 0; i < n; i++){
            int l, w, p;
            cin >> l >> w >> p;
            if(p<=b){
                int area = l*w;
                if(max < area)
                    max = area;
            }
        }
        if(max!=0)
            cout << max;
        else 
            cout << "no tablet";
        breakline;
    }
}
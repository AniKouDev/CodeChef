#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        int max = 0, ac=0;
        for(int i = 0; i < n; i++){
            char k;
            cin >> k;
            if(k=='1'){
                count++;
                if(max < ac)
                    max = ac;
                ac = 0;
            }
            else{
                ac++;
            }
        }
        if(max < ac)
            max = ac;
        cout << count+max;
        breakline;
    }
}
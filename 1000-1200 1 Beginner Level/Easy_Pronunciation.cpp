#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cons = 0, flag = 1;
        for (int i = 0; i < n; i++){
            char a;
            cin >> a;
            if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
                cons = 0;
            }
            else
                cons++;
            if(cons == 4)
                flag = 0;
        }
        cout << ((flag)?"Yes":"No");
        breakline;
    }
}
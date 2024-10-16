#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int i = 1;
        while(true){
            if(i%2 == 0){
                b = b-i;
                if(b<0)
                    break;
            }
            else{
                a = a-i;
                if(a<0)
                    break;
            }
            i++;
        }
        cout << ((i%2 == 0)?"Limak":"Bob");
        breakline;
    }
}
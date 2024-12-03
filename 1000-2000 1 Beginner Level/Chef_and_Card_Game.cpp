#include <iostream>
using namespace std;

#define breakline cout<<endl

int getSum(int x){
    int sum = 0;
    while(x){
        int help = x%10;
        sum += help;
        x = x/10;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int chef = 0, morty = 0;
        while(n--){
            int a, b;
            cin >> a >> b;
            if(getSum(a) > getSum(b)){
                chef++;
            }
            else if(getSum(a) == getSum(b)){
                chef++;
                morty++;
            }
            else{
                morty++;
            }
        }
        if(chef > morty){
            cout << "0 " << chef;
        }
        else if(chef == morty){
            cout << "2 " << chef;
        }
        else{
            cout << "1 " << morty;
        }
        breakline;
    }
}
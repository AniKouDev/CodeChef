#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int sum = 0;
        int p;
        cin >> p;
        if(p>=2048){
            sum += p/2048;
            p -= (2048*(p/2048));
        }
        if(p>=1024){
            sum += p/1024;
            p -= (1024*(p/1024));
        }
        if(p>=512){
            sum += p/512;
            p -= (512*(p/512));
        }
        if(p>=256){
            sum += p/256;
            p -= (256*(p/256));
        }
        if(p>=128){
            sum += p/128;
            p -= (128*(p/128));
        }
        if(p>=64){
            sum += p/64;
            p -= (64*(p/64));
        }
        if(p>=32){
            sum += p/32;
            p -= (32*(p/32));
        }
        if(p>=16){
            sum += p/16;
            p -= (16*(p/16));
        }
        if(p>=8){
            sum += p/8;
            p -= (8*(p/8));
        }
        if(p>=4){
            sum += p/4;
            p -= (4*(p/4));
        }
        if(p>=2){
            sum += p/2;
            p -= (2*(p/2));
        }
        if(p>=1){
            sum += p/1;
            p -= (1*(p/1));
        }
        cout << sum;
        breakline;
    }
}
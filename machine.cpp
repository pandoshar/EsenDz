#include <iostream>

using namespace std;
int main(){
    double E= 1;
    int n = 0;
    while(1+E>1){
        E /= 10;
        cout <<E<<endl;
        n++;
    }
    cout<<n;
    return 0;
}
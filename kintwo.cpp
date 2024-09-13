#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long double I= 1;
    int n= 0;
    while(2*I>I){
        I*= 2;
        cout <<I<<endl;
        n++;
    }
    cout<<n;
    return 0;
}
#include <iostream>

using namespace std;
int main(){
    double Z= 1;
    int n = 0;
    while(2*Z>Z){
        Z /= 10;
        cout <<Z<<endl;
        n++;
    }
    cout<<n;
    return 0;
}
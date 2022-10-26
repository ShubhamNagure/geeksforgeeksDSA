#include <iostream>  
using namespace std;  

int main(){
    int res = 1,n=5;
    for (int i=2; i<=n;i++){
        res = res*i;
    }
    cout << "factorial of "<< n <<" is " << res <<endl;
}

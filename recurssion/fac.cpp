#include<iostream>
using namespace std;

int getfac(int n){
    if(n==0||n==1){
        return 1;
    }
    int ans = n*getfac(n-1);
    return ans ;
}

int main(){
    int n;
    cin>>n;
    int ans = getfac(n);
    cout<<"the factorial of the given number is "<<ans<<endl;
    return 0;
}
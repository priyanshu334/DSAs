#include<iostream>
using namespace std;

int power2(int n){
    if(n==0){
        return 1;
    }
    int ans  = n*power2(n-1);
    return ans;
}
int main(){
    int n ;
    cin >>n;
   int ans =  power2(n);
   cout<<"the power of 2 of given number is "

    return 0;
}
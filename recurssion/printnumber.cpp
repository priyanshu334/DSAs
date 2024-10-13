#include<iostream>
using namespace std ;
void printcount(int n){
    if(n==0) return ;

  
    printcount(n-1);
      cout<<"the number is "<<" "<<n;
}

int main(){
    int n;
    cin>>n;
    printcount(n);
return 0;
}
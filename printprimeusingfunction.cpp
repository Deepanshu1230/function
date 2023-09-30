#include<iostream>
using namespace std;
bool isprime(int num){
    for(int i=2;i<=(num-1);i++){
    if(num % i==0){
        return false;
    }
    else {
        return true;
    }
    }

    }

int main(){
    int a=1,b=10;
    for(int i=a;i<=b;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
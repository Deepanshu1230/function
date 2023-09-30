#include<iostream>
using namespace std;
bool checkeligibility(int age,int limit){
    if(age>=limit){
        return true;
    } else 
    return false;
}
int main(){
    int limit =18;
    int eligible_for_voting=checkeligibility(2,limit);
    if(eligible_for_voting){
        cout<<"yes the person is eligible for voting"<<endl;
    } else
    {cout<<"no the person is not eligible for voting"<<endl;
    }
    return 0;
}
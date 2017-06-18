#include<iostream>
using namespace std;
int isodd(int num){
    if(num%2==1)
        return 1;
    else
        return 0;
}
int main (){
    
    long long int a;
    while(cin>>a){
        if(isodd(a))
            cout<<(a+1)/2*a<<endl<<endl;
        
        else
            cout<<(a+1)*(a/2)<<endl<<endl;
    }
    return 0;
}

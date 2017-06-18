#include<iostream>
using namespace std;
int main(){
    int count;
    int a, b;
    cin >> count;
    while (count){
        cin >> a >> b;
        cout << a + b<<endl;
        count--;
    }
    return 0;
}

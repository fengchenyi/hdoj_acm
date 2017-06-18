#include<iostream>
using namespace std;
int main(){
    int count;
    while (cin >> count){
        if (count == 0)
            break;
        else{
            int sum = 0;
            int temp=0;
            for (int i = 0; i < count; i++){
                cin >> temp;
                sum += temp;
            }
            cout << sum << endl;
        }
    }
    return 0;
}

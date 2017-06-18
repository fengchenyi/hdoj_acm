#include<iostream>
using namespace std;
int main(){
    int all = 0;
    cin >> all;
    while (all){
        int count;
        cin >> count;
        if (count == 0){
            all--;
            cout << 0 << endl;
            cout << endl;
            continue;
        }
        else{
            int sum = 0;
            int temp = 0;
            for (int i = 0; i < count; i++){
                cin >> temp;
                sum += temp;
            }
            cout << sum << endl;
            if (all != 1)
                cout << endl;
        }
        all--;
    }

    return 0;
}

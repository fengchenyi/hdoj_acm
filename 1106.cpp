#include<string>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    string have;

    
    while (cin >> have){
        int num[1000];
        string temp = "";
        int count = 0;
        for (int i = 0; i <= have.size(); i++){
            if (have[i] != '5'&&have[i] != 0){
                temp += have[i];
            }
            else if (have[i] == '5' || have[i] == 0){
                if (temp != ""){
                    num[count++] = atoi(temp.c_str());
                    temp="";
                }
            }
        }
        sort(num, num + count);
        for (int i = 0; i < count; i++){
                cout << num[i];
                    if (i != count-1 )
                    cout << ' ';
                }
        cout << endl;
    }
    return 0;
}

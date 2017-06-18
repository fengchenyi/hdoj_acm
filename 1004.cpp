#include<iostream>
#include<string>
#include<vector>
using namespace std;

typedef struct dd{
    string color;
    int num;
    bool operator == (const string & i);
}ball;
bool dd::operator==(const string &i){
    return this->color == i;
}
int main(){
    int count = 1;
    do{
        cin >> count;
        if (count == 0){
            break;
        }
        vector<ball> ballean;
        ball test;
        for (int i = 0; i < count; i++){
            string temp;
            cin >> temp;
            vector<ball>::iterator flag = find((ballean.begin()), ballean.end(),temp);
            if (flag == ballean.end()){
                test.color = temp;
                test.num = 1;
                ballean.push_back(test);
            }
            else{
                (*flag).num += 1;
            }
        }
        int max = 0;
        int flag = 0;
        for (int i = 0; i < ballean.size(); i++){
            if (ballean[i].num>max){
                flag = i;
                max = ballean[i].num;
            }
        }
        cout << ballean[flag].color<<endl;
    } while (count != 0);

    return 0;
}

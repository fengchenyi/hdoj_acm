#include<iostream>
#include<string>
using namespace std;
string add(string a, string b){
    string temp;
    int max;
    if (b.size()>a.size()){
        int cal = b.size() - a.size();
        a.insert(0, cal ,'0');
        temp.resize(b.size());
        max = b.size();
    }
    else if (b.size()<a.size()){
        int cal = a.size() - b.size();
        b.insert(0,cal,'0');
        temp.resize(a.size());
        max = a.size();
    }
    else{
        temp.resize(a.size());
        max = a.size();
    }
    int jingwei = 0;
    int i = max - 1;
    for (; i >= 0; i--){
        int mid = a[i] +b[i]+ jingwei-96;
        if (mid >= 10){
            jingwei = 1;
            temp[i] = mid - 10 + 48;
        }
        else{
            jingwei = 0;
            temp[i] = mid + 48;
        }
    }
    if (jingwei == 1 ){
        temp.insert(0, 1, '1');
    }
    return temp;
}
int main(){
    int count = 1;
    int t = 0;
    cin >> t;
    //string *a=new string[t];
    //string *b=new string[t];
    string end;
    string a;
    string b;
    for (int i = 0; i < t;i++){
        cin >> a >> b;
        end = add(a, b);
        cout << "Case " << count++ << ":" << endl;
        cout << a << " + " << b<< " = " << end << endl;
        if (i <t-1)
            cout << endl;
    }

    return 0;
}

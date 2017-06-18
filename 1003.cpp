#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
int getmax(vector<short> num, int &beg, int &end){
    int max = -1001;
    int count = num.size();
    int sum = 0;
    int temp_beg = 1;
    for (int i = 1; i<=count; i++){
        sum = num[i-1] + sum;
        if (sum>max){
            max = sum;
            beg = temp_beg;
            end = i ;
        }
        if (sum < 0){
            sum = 0;
              temp_beg=i + 1;
        }
      
    
    }
    return max;
}
int main(){

    vector<short> num;
    int all_count;
    cin >> all_count;
    num.resize(all_count);
    int i = 0;
    while (all_count){
        int num_count;
        cin >> num_count;
        num.resize(num_count);
        for (int t = 0; t<num_count; t++){
            short temp;
            cin >> temp;
            num[t] = temp;
        }
        int beg, end;
        int max = 0;
        max=getmax(num, beg, end);
        cout << "Case " << i + 1 << ":" << endl;
        cout << max <<' '<< beg <<' '<< end << endl;
        if (all_count != 1)
            cout << endl;
        all_count--;
        i++;
    }

    return 0;

}

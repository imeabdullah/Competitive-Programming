#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long row,col;
        cin>>row>>col;

        if(row==1 and col==1) cout <<1<<endl;

        else{
            long long high=max(row,col);
            long long fAns=(long long)pow(high,2);

            if(row>col){
                cout<<(fAns-(col-1))<<endl;
            }else
                cout<<(fAns-(row-1))<<endl;
        }
    }
}
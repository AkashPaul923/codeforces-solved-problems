#include<iostream>
using namespace std;
int main(){
    int a,sumx=0,sumy=0,sumz=0;
    cin>>a;
    int x[a][3];
    for(int i=0;i<a;i++){
        for(int j=0;j<3;j++){
            cin>>x[i][j];
        }
        sumx+=x[i][0];
        sumy+=x[i][1];
        sumz+=x[i][2];
    }
    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES";
        }
    else{
        cout<<"NO";
        }
return 0;
}

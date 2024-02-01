#include<iostream>
using namespace std;
int main(){
    int a;
    double sum=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum/a;

}

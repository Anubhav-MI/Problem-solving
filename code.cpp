#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum;
    for(int i=1;i<=n;i++){
        int in;
        cin>>in;
        sum=sum+in;
    }
    if(sum>n*100){
        cout<<"Director is not capable"<<endl;
    }
    else{
        cout<<"Best director"<<endl;
    }
    return 0;
}
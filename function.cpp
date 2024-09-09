#include <iostream>
using namespace std;
//definition 
void printh(){  // jab kuch return karega to int,char,etc use hoga agr kuch nahi return nahi karega to void
    cout <<"hello baby \n";
}

 int summ(int a,int b){
    cout<<a+b<<endl;
    
 }
int minn(int a,int b){
    if(a>b){
        cout<<b;
    }else{
        cout<<a;
    }
    cout<<endl;
}
int sum1ton(int n){
    cout<<n*(n+1)/2;
}
int main(){
    printh();
    summ(3,6);
    minn(6,9);
    sum1ton(8);
return 0;
}




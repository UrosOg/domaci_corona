#include<iostream>
using namespace std;
int main(){
int n[10],o=0;
cin>>o;
for(int i=1;i<10; i++){
cin>>n[i];
if(o=n[i]){
cout<<"Taj broj se nalazi na mestu: "<<i<<endl;
}
}


return 0;
}

#include<iostream>
#include<bitset>
using namespace std;
main(){
    int regvar;
    regvar=0;
    cout<<"old= "<<regvar<<endl;
    regvar =(1<<4);
    cout<<"new= "<<regvar<<endl;
    cout<<bitset<16>(regvar)<<endl;
    regvar|=(1<<2);
     cout<<bitset<16>(regvar)<<endl;
    regvar &=~(1<<4);
    cout<<bitset<16>(regvar)<<endl;
}
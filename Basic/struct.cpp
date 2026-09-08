#include<bits/stdc++.h>
using namespace std;
int main(){

    struct{
        int disit;
        string myString;
        bool myBool;
    }  myStructure;

    myStructure.disit= 23;
    myStructure.myString= "Structure code";
    myStructure.myBool= true;


    cout<<myStructure.disit<<endl;
    cout<<myStructure.myString<<endl;
    cout<<myStructure.myBool<<endl;

    return 0;
}
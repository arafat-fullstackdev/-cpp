#include<bits/stdc++.h>
using namespace std;

void myCode(){
    cout<<"Function code here"<<endl;
}
void breakCode(){
    string codeSplit;
    codeSplit= "String char";
    cout<<codeSplit<<endl;
}

void funParameter(string name,bool code){
  cout<<name<<" "<<code<<endl;
}

//* Default parameter
void defaultParam(string state="Siberia"){
    cout<<state<<endl;
}

//? return value

int returnValue(int a,int b){
 return a + b;
}

int main(){

    // myCode();
    // breakCode();
    // funParameter("Tenstack",true);
    // funParameter("NextStack",false);

    //  defaultParam("Saint Petsburg");
    //  defaultParam("Vladibostok");
    //  defaultParam();

    cout<<returnValue(10,88)<<endl;;
    return 0;
}
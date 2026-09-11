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

string returnString(string code){
    return code + "My code Here";
}

//?Pass By Reference
void changeValue(int &num){
    num = 40;
}

//! parse array
void parseArray(int myArray[5]){
    for(int i =0; i<5;i++){
        cout<<myArray[i]<<" "<<endl;
    }
}


//? pass struct
struct Car{
    string model;
    int year;
    bool gps;
};

void myVehicle(Car C){
 cout<<"Model:"<<C.model<<"Year: "<<C.year<<" "<<C.gps<<endl;
}

int main(){

    // myCode();
    // breakCode();
    // funParameter("Tenstack",true);
    // funParameter("NextStack",false);

    //  defaultParam("Saint Petsburg");
    //  defaultParam("Vladibostok");
    //  defaultParam();

    // cout<<returnValue(10,88)<<endl;

    // for(int i =0; i<5;i++){
    //     cout<<returnString("Return String ")<<endl;
    // }

    // int value =12;
    // cout<<value;
    // changeValue(value);
    // cout<<value<<endl;


    // int numberArray[5]={10,20,30,40,50};
    // parseArray(numberArray);     

    Car myCar={"Dunlop ",2008,true};

    myVehicle(myCar);
    return 0;
}
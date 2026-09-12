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

void myVehicle(Car &C){
 cout<<"Model:"<<C.model<<"Year: "<<C.year<<" "<<C.gps<<endl;
}

//! function to Farhenit to celcious

int toCelcious(float farhenheit){
    return (0.5/0.9) * (farhenheit - 32.0);
};

//* Recursion  call
void printHello(int n){
 //base case
 if(n == 0) return;
 cout<<"Pront Hello"<<endl;
 printHello(1);
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

    // Car myCar={"Dunlop ",2008,true};

    // myVehicle(myCar); 

    //? temperature

    //set value farhenz
    // float f_value = 100.8;

    // int result = toCelcious(f_value);

    // //Farhenit value
    // cout<<"Given value: "<<f_value<<endl;
    // cout<<"Convert value:"<<result<<endl;

    printHello(5);
    return 0;
}
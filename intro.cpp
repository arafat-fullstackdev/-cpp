#include<bits/stdc++.h>;
using namespace std;


int main(){
    string stingC= "Hello CPP";
    // cout<<stingC<<endl;
    string text = "A scuola e treto";
    // cout<<text<<" "<<text.length()<<endl;
    // cout<<text<<" "<<text.size()<<endl;
    cout<<text.at(text.length() -1)<<endl;
    cout<<text.at(3)<<endl;

    text.at(0)='D';
    cout<<text<<endl;

return 0;

};
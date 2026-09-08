#include <iostream>
using namespace std;

void printNum(int n){
    if(n == 1){
         cout<< " "<<"n\1";
         return;
    }

    cout<<n<<" ";
    printNum(n-1);
}


main(){
    printNum(100);

    return 0;
}

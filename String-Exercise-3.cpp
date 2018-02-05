//use the string compare function to compare input string with the setup string
//make a check with the string password(if else)

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    char strpswrd[80];
    
    cout <<"enter password:";
    cin >> strpswrd;
    //gets(strpswrd);
    
    if(strcmp(strpswrd ,"password")!=0){
        cout<<"invalid password.\n";
    }
    else 
        cout<<"logged on.\n";
        
    return 0;
}

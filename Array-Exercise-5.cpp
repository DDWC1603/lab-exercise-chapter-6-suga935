//using the random function, the program make it own random number and find the maximum random number and print it out.
//finish this program up
//thank you.

#include <iostream>
using namespace std;

int main() {

    int i;
    int max=0;
    int list[100];
    
    for(i=0;i<100;i++)list[i]=rand();
    for(i=0;i<100;i++)
      if(max<list[i])max=list[i];
    cout<<"maximum value:"<<max;
    return 0;
}

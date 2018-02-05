//dapatkan 10 input dan keluarkan hasil tambahnya.
//hasilkan program anda dengan menggunakan array


#include <iostream>
#include <conio.h>
using namespace std;

int main() {
   
    int arr[10];
    int sum=0;
    int x;
    
    cout<<"enter 10 number"<<endl;
    for(x=0;x<10;x++)
    {
        cin>>arr[x]; 
        sum=sum+arr[x];
    }
    cout<<"sum="<<sum;
    //std::cin.get;
    return 0;
}

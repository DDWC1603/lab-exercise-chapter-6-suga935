#include <iostream>
#include <conio.h>

using namespace std;

int main() {
int array[10][10][10],dim1,dim2,dim3,i,j,k;
     cout<<"enter the three dimension       sizes"<<endl;
     cin >> dim1;
     
     cout << "dim2 = ";
     cin >> dim2;
     
     cout << "dim3 = ";
     cin >> dim3;
     
     cout<<"enter elements of array(row rise)"<<endl;
     
     for(i=0;i<dim1;i++)
         for(j=0;j<dim2;j++)
             for(k=0;k<dim3;k++)
     {
         cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]=";
         array[i][j][k];
     }
     
     cout<<"displaying elements of array"<<endl;
     
     for(i=0;i<dim1;i++)
         for(j=0;j<dim2;j++)
             for(k=0;k<dim3;k++) {
         cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]=";
         array[i][j][k];
     }
     
     std::cin.get();
    return 0;
}

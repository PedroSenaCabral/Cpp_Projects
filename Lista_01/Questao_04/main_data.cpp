#include <iostream>
#include <ctime>
#include "Data.h"

using namespace std;


int main(){
 cout<<endl;
 Data Data01(27, 10 , 2018) ;
 cout<<"Hoje: "<<Data01;
 Data01.proximoDia();
 cout<<"Amanha: "<<Data01<<endl;

 Data Data02(30, 11 , 2018) ;
 cout<<"Hoje: "<<Data02;
 Data02.proximoDia();
 cout<<"Amanha: "<<Data02<<endl;

 Data Data03(31, 11 , 2018) ;
 cout<<"Hoje: "<<Data03;
 Data03.proximoDia();
 cout<<"Amanha: "<<Data03<<endl;

 Data Data04(31, 12 , 2018) ;
 cout<<"Hoje: "<<Data04;
 Data04.proximoDia();
 cout<<"Amanha: "<<Data04<<endl;

 return 0;

} 
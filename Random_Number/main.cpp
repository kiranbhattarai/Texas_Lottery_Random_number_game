#include<iostream>
#include "C:\Users\udas_\Desktop\c,c++\Random_Number\randomnumbers.h"

using namespace std;

int main()
{

  char yes_no;
  int lwr,upr,num;

  RandGame object;

  do{

    cout<<"Enter an lower bound for the range:"<<endl;
  	cin>>lwr;
    cout<<"Enter an upper bound for the range:"<<endl;
  	cin>>upr;
    cout<<"Enter a number n to generate n random numbers in the range ["<<lwr<<"....."<<upr<<"]"<<endl;
  	cin>>num;
    cout<<endl<<endl;
  object.RandInput(lwr,upr,num);
  object.RandGen();
  object.RandCalc();
  object.print();

  cout<< "Do you want to repeat? (enter Y/N): ";
  cin >> yes_no;
  } while ( yes_no == 'y' || yes_no == 'Y' );

	return 0;
}

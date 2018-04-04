//Guess the random number class

#ifndef RANDOM
#define RANDOM

#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class RandGame {
	private:
	int num,lwr,upr,random,max,min;
  vector<int> numbers;
  double average;

	public:

	void RandInput(int a,int b,int c)
	{
    lwr = a;
    upr = b;
    num = c;
  }

  void RandGen()
	{
    numbers.resize(0);
    time_t t;
    srand(time(&t));

      for (int i=0; i<num ; i++){
		    random=rand()%((upr-lwr)+1)+lwr;
        numbers.push_back(random);
        cout<<numbers[i]<<endl;
      }
	}

  void RandCalc(){
    double sum=0;
    int temp=0;

      for(int i=0; i<numbers.size(); i++ ){ //this is the random number generated
        sum=sum+numbers[i];
        average=sum/numbers.size();   //this is the average

          if(numbers[i]>temp){ //this is for maximum
            temp=numbers[i];
          }
      }

    max = *max_element(numbers.begin(), numbers.end());
    min = *min_element(numbers.begin(), numbers.end());

  }

  void print(){
    cout<<"The lower bound is : "<<lwr<<endl;
    cout<<"The upper bound is : "<<upr<<endl;
    cout<<"The amount of number generated is : "<<num<<endl;
    cout<<"Average : "<<average<<endl;
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min<<endl;
  }

};

#endif

//Author: Carter Fitzsimons
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  int n1; //first inputted number
  int n2; //second inputted number
  int biggest; //value of largest number 
  cout<<"Please enter a whole number:\n";
  cin>>n1; //stores the first value in n2 
  cout<<"Please enter another whole number:\n";
  cin>>n2; //stores the second value in n2

  if(n1 > n2){
  biggest = n1; //gives biggest the value of n1 if it is bigger than n2 
  }
  else {
  biggest = n2; //gives biggest the value of n2 if it is bigger than n1 
  }

  cout<<"Of those two numbers, the biggest is: "<<biggest;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}

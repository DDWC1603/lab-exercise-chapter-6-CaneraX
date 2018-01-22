//use the string compare function to compare input string with the setup string
//make a check with the string password(if else)
#include <iostream>
#include<string.h>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	char strPswd[80];
     	cout<<"Enter password: ";
	    cin>>strPswd;     //get the strPswd
	    
	    if(strcmp(strPswd,"aiman"))
		{
		cout<<"Invalid Password "<<endl;	
		  }
		  else{
		  	cout<<"Logged in "<<endl;
		  }
		                            //make an if else that check the password(strPswd)
	                                 //(string compare function (strPswd,"Check")) 
	

	return 0;
  

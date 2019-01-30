#include <iostream>
#include<fstream>
#include <cmath>
#include <time.h>
#include <windows.h>
using namespace std;
int main()
{

  
  
 
 int  i = 0 , j = 0 ;  // val is the data, i is a counter and j is a data counter
   
  
   float sum = 0.0, mean, variance = 0.0, stdDeviation,max=0,min=1;
   float val [i];
  
    string textname;
	
	cout<<"Insert the amount of data to be generated";
    
	cin>> j;
    srand( (unsigned)time( NULL ) );
	
	
	
	
	for (int i = 0; i < j; i++)  

	{
 	

   val[i]= (float) rand()/RAND_MAX ;
      
   
    

    	
      sum  = sum + val[i];
      mean = sum/j;
      
	  if (min>val[i]){
	 
      min = val[i] ;}
      
      if (max<val[i])
      {
      max = val[i];}
     
	  variance = variance + pow(val[i] - mean, 2);
      
		  cout<< val[i] <<" ";
	  
	 
	  
	   }
    
	  variance=variance/j;
      stdDeviation = sqrt(variance);
  
    cout<<endl;
   cout<<"The mean or average of these data values is "<<mean;
    
   cout<<endl;
   cout<<"The Standar of these data values is "<<stdDeviation;
   
    cout<<endl;
   cout<<"The max of these data values is "<<max;
   
    cout<<endl;
   cout<<"The min of these data values is "<<min;
   cout<<endl;


 cout<<"Please write text name, ending with .txt";
 cin >> textname;

 ofstream file;
  file.open (textname);
  file << "There is the mean of data  "<<mean<<endl<<"There is the min of data "<<min<<endl<<"There is the max of data "<<max<<endl<<"There is the Standar Deviation "<<stdDeviation<<endl;
  file<< "This are the Random numbers"<<endl;
  
  for (int i = 0; i < j; i++)  
	{
		file<<val[i]<<endl;
	
	}
  file.close();
  return 0;

} 

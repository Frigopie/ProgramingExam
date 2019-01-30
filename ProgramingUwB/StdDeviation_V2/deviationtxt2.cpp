#include <iostream>
#include<fstream>
#include <cmath>
using namespace std;
int main()
{
    ifstream txtFile;
    txtFile.open("data.txt");
  
  if (txtFile.is_open()) {
  
  
 
 int  i = 0 , j = 0 ;  // val is the data, i is a counter and j is a data counter
   
  
   float sum = 0.0, mean, variance = 0.0, stdDeviation;
   float val [i];
    
	
	cout<<"The data values are: ";
    
	while (txtFile >> val[i])
    {
      sum  = sum + val[i];
      mean = sum/i;
     
	  variance += pow(val[i] - mean, 2);
      
	
	 
	  cout<< val[i] <<" ";
	  
	  i++;
	   }
    
	  variance=variance/i;
      stdDeviation = sqrt(variance);
  
    cout<<endl;
   cout<<"The mean or average of these data values is "<<mean;
    
   cout<<endl;
   cout<<"The sum of these data values is "<<sum;

 ofstream file;
  file.open ("data_out.txt");
  file << "There is the mean of data  "<<mean<<endl<<"There is the sumatory of data "<<sum;
  file.close();
  return 0;

}

else cout << "Unable to open file";
 
    return 0;
}

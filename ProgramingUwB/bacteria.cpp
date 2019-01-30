#include <iostream>

using namespace std;

  int  hour, hourlimit;
long  double bacteria;

int main () {
	cout<<" Amount of hours you want to calculate    ";
	cin>> hourlimit;
	bacteria=1;
	
	
	
	while (hour <= hourlimit) {
		cout<<"Hour  " <<hour<<" There are "<<bacteria<< "bacterias"<<endl;
		hour++;
		bacteria=bacteria*2;
	}
}

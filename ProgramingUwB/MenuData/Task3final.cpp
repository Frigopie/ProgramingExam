#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void openFile(){
    string getcontent;
    
	ifstream openfile ("names.txt");
    if(openfile.is_open())
    {
        while(getline(openfile, getcontent))
        {
            cout << getcontent << endl;
        }
    }
	else {
	 ofstream file;
  openfile.open ("names.txt");

	
	}
    
}

void addName(){
    string name;
    ofstream outfile; 
	
	cout << "Please type a name you would like to add:";
    
       outfile.open("names.txt", std::ios_base::app);
    
    cin >> name;
    
    	if (name[0]>90)
		{ 
		name[0]=name[0]-32;}
		
    
    outfile << name << endl;
    cout << "This name  "<< name <<" was added" << endl;
      outfile.close();
}

void exitF(){
	int number;
	ofstream outfile;
	
	cout<<"You choosed quit the program,press 1 if you want to print names"<<endl<<"press any other number to leave without printing";
	
	cin>> number;
	
	if (number=1) {
		
   
    outfile.close();
    
	}

	
}


int main() {
    char ch;

    while(1) {
        /// print the menu
        cout << "Menu Programing 1 Exam" << endl;
        cout << "--------------" << endl;
        cout << endl;
        cout << "A) Print all Names in list" << endl;
        cout << "B) Add a new name to the base" << endl;
        cout << "C) Exit and print" << endl;
        cout << endl;
        cout << "Enter your choice:";
        cin >> ch;
        cout << endl;

        /// do something based on the choice
        switch (ch)
        {
            case 'a':
            case 'A':
                openFile();
                break;
            case 'b':
            case 'B':
                addName();
                break;
            case 'c':
            case 'C':
                exitF();
				return 0;
                break;
            default:
                cout << "You entered an invalid option" << endl;
        }
        cout << endl;
        cout << endl;
    }
    return 0;
}

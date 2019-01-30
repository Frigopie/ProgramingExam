#include <iostream>

using namespace std;

int main ()
{
    string User;
    string Password;
    string loginUser;
    string loginPassword;
    short Attempt = 0;

  
        cout << "Please enter your new user name: ";
        cin >> User;
        cout << "Please enter your user password: ";
        cin >> Password;
         
	 
	 while (Attempt < 4)
  
    {
	    cout << "Login: ";
        cin >> loginUser;
        cout << "Password: ";
        cin >> loginPassword;
       
	    if (loginUser == User && loginPassword == Password) 
        {
            cout << "You have logged in succesfuly    ";
            return 0;
         
        }
        
       
	     if (loginUser != User )
        {
            cout<< "That username doesnt exists    "  ;
          
        }
       
	     else if (loginUser == User && loginPassword != Password )
        {
            Attempt++;
			cout << "Wrong password" << " "<< "You have used   " <<Attempt<<" out of 3 tries"; 
            
        }
    }
    if (Attempt == 4)
    {
            cout<<"  " << "   You haved failed to login 3 times.  Please wait and restart the program";
            return 0;
    }

    
}

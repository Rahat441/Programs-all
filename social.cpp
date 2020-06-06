
#include <iostream>
#include <string>
using namespace std;
class Profile {
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};
Profile::Profile(string usrn, string dspn){		//hkhkhh
     username=usrn;
     displayname=dspn;
 }
 Profile::Profile(){
     username="";
     displayname="";
 }
string Profile:: getUsername(){		//asas
     return username;
 }						//asasa
 string Profile:: getFullName(){
      return displayname + "(@"+username+")";
  }
  void Profile::setDisplayName(string dspn){		//sdsd
       displayname=dspn;
  }
 

int main() {
    Profile p1("marco", "Marco");			
    cout << p1.getUsername() << endl; 
    cout << p1.getFullName() << endl; 

    p1.setDisplayName("Marco Rossi");
    cout << p1.getUsername() << endl; 
    cout << p1.getFullName() << endl; 

    Profile p2("tarma1", "Tarma Roving");		
    cout << p2.getUsername() << endl; 
    cout << p2.getFullName() << endl; 
}


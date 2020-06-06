//Rahat Bhuiyan 
//CS135

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
Profile::Profile(string usrn, string dspn){
     username=usrn;
     displayname=dspn;
 }
 Profile::Profile(){
     username="";
     displayname="";
 }
string Profile:: getUsername(){
     return username;
 }
 string Profile:: getFullName(){
      return displayname + "(@"+username+")";
  }
  void Profile::setDisplayName(string dspn){
       displayname=dspn;
  }                                             //TEND OF CLASS
  
class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
                                   // mapping integer ID -> Profile

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (string usrn);
public:
  // Constructor, makes an empty network (numUsers = 0)
 Network();
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
  bool addUser(string usrn, string dspn);
};

 int Network::findID (string usrn){
     for(int i=0;i<numUsers;i++){
         if(profiles[i].getUsername()==usrn){
             return i;
         }
         else {
             return -1;
         }
     }
 }
 Network:: Network(){
     numUsers=0;
 }
 
 bool Network::addUser(string usrn, string dspn){
    if(numUsers==MAX_USERS){
        return false;
    }for(int i=0;i<numUsers;i++){
         if(profiles[i].getUsername()==usrn){
             return false;
         }
    }
    for(int j=0;j<usrn.length();j++){
        if(!isalpha(usrn[j])&&!isdigit(usrn[j])){
            return false;
        }
    }
    profiles[numUsers]=Profile(usrn,dspn);
    numUsers++;
    return true;
    
    
}

int main()
{
    Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;  
}
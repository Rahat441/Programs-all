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

class Network {
private:
    static const int MAX_USERS = 20;
    int numUsers;
    Profile profiles[MAX_USERS];
    bool following[MAX_USERS][MAX_USERS];    // new
    int findID (string usrn);
public:
    Network();
    bool addUser(string usrn, string dspn);
    bool follow(string usrn1, string usrn2); // new
    void printDot();                         // new
};


int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");

    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}

//Part A
// Profile constructor for a user (initializing
// private variables username=usrn, displayname=dspn)
Profile::Profile(string usrn, string dspn){
    username = usrn;
    displayname = dspn;
}
// Default Profile constructor (username="", displayname="")
Profile::Profile(){
    username = "";
    displayname = "";
}
// Return username
string Profile::getUsername(){
    return username;
}
// Return name in the format: "displayname (@username)"
string Profile::getFullName(){
    return displayname + "(@" + username + ")";
}
// Change display name
void Profile::setDisplayName(string dspn){
    displayname = dspn;
}

//Part B
// Returns user ID (index in the 'profiles' array) by their username
// (or -1 if username is not found)
int Network::findID(string usrn){
    for(int i=0; i<numUsers; i++){
        if(profiles[i].getUsername() == usrn){
            return i;
        }
    }
    return -1;
}
// Constructor, makes an empty network (numUsers = 0)
Network::Network(){
    numUsers = 0; //part B
    //part C
    for(int i=0; i<MAX_USERS; i++){
        for(int j=0; j<MAX_USERS; j++){
            following[i][j] = false;
        }
    }
}
// Attempts to sign up a new user with specified username and displayname
// return true if the operation was successful, otherwise return false
bool Network::addUser(string usrn, string dspn){
    //Check if the array is already full
    if(numUsers == MAX_USERS){
        return false;
    }
    //Check if the username is already taken
    for(int i=0; i<MAX_USERS; i++){
        if(profiles[i].getUsername() == usrn){
            return false;
        }
    }
    //Check if the username is alphanumeric
    for(int i=0; i<usrn.length(); i++){
        if(!isalpha(usrn[i]) && !isdigit(usrn[i])){
            return false;
        }
    }
    //Otherwise, if the username is valid, add it to the array profiles
    profiles[numUsers] = Profile(usrn, dspn);
    //Increase numUsers by 1
    numUsers++;
    return true;
}

//Part C
// Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
// return true if success (if both usernames exist), otherwise return
bool Network::follow(string usrn1, string usrn2){
    //make sure that usrn1 exists
    for(int i=0; i<numUsers; i++){
        if(profiles[i].getUsername().compare(usrn1)==0){
            for(int j=0; j<numUsers; j++){
                if(profiles[j].getUsername().compare(usrn2)==0){
                    following[i][j] = true;
                    return true;
                }
            }
        }
    }
    return false;
}
// Print Dot file (graphical representation of the network)
void Network::printDot(){
    cout<<"digraph {\n";
    for(int i=0; i<numUsers; i++){
        cout<<"\t\"@"<<profiles[i].getUsername()<<"\""<<endl;
    }
    for(int i=0; i<numUsers; i++){
        for(int j=0; j<numUsers; j++){
            if(following[i][j] == true){
                cout<<"\t\"@"<<profiles[i].getUsername()<<"\" -> \"@"<<profiles[j].getUsername()<<"\""<<endl;
            }
        }
    }
    cout<<endl;
    cout<<"}";
}
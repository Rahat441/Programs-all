#include <iostream>
#include <string>
using namespace std;

struct Post{
  string username;
  string message;
};

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
    
      static const int MAX_POSTS = 100;
    int numPosts;                    // number of posts
    Post posts[MAX_POSTS];
   
    
public:
    
     
    bool writePost(string usrn, string msg);
                                                // Print user's "timeline"
    bool printTimeline(string usrn);
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
   
  nw.follow("mario", "luigi");
  nw.follow("luigi", "mario");
  nw.follow("luigi", "yoshi");
  nw.follow("yoshi", "mario");

  // write some posts
  nw.writePost("mario", "It's a-me, Mario!");
  nw.writePost("luigi", "Hey hey!");
  nw.writePost("mario", "Hi Luigi!");
  nw.writePost("yoshi", "Test 1");
  nw.writePost("yoshi", "Test 2");
  nw.writePost("luigi", "I just hope this crazy plan of yours works!");
  nw.writePost("mario", "My crazy plans always work!");
  nw.writePost("yoshi", "Test 3");
  nw.writePost("yoshi", "Test 4");
  nw.writePost("yoshi", "Test 5");

  cout << endl;
  cout << "======= Mario's timeline =======" << endl;
  nw.printTimeline("mario");
  cout << endl;

  cout << "======= Yoshi's timeline =======" << endl;
  nw.printTimeline("yoshi");
  cout << endl;
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
    numPosts=0;
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

bool Network::writePost(string usrn, string msg){
    if (numPosts==MAX_POSTS){
        return false;
 }
    else if(findID(usrn)!=-1){
       posts[numPosts]={usrn,msg};
       numPosts++;
       return true;
        
    }
    return false;
    }
    
bool Network::printTimeline(string usrn){
    int userID=findID(usrn);
    int currentUserId;
    for(int i=numPosts;i>=0;i--){
        currentUserId=findID(posts[i].username);
        if(currentUserId==userID || following[userID][currentUserId]){
             cout<<profiles[userID].getFullName()<<posts[i].message;
        
    }
    cout<<endl;
    
}
}
/******************************************************************************

          Rahat Bhuiyan 
          Csi135
          lab 10D

*******************************************************************************/

#include <iostream>

using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};
class Time { 
public:
    int h;
    int m;
};
class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

int minutesSinceMidnight(Time time){
    int noMins= time.h*60+time.m;
    return noMins;
}


int minutesUntil(Time earlier, Time later){
    int noMins=((later.h-earlier.h)*60)+(later.m-earlier.m);        //rebel
    return noMins;
}   
Time addMinutes(Time time0, int min){       //time is going on 
    
    Time new_time;
    new_time.h=(time0.h)+(time0.m+min)/60;      // whattttuupppp 
    new_time.m=(time0.m+min)%60;
    
    return new_time;        // sonss
}
void printMovie(Movie mv){      //chilling 
    string g;
    switch (mv.genre) {         //ponggg
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";     //sss
}

void printTimeSlot(TimeSlot ts){
    Time endingTime=addMinutes(ts.startTime,ts.movie.duration);
    printMovie(ts.movie);
    cout<<"[starts at"<<" "<<ts.startTime.h<<':'<<ts.startTime.m<<", ends by"<<endingTime.h<<':'<<endingTime.m<<']';
    
    
}
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot nextSlot;
    nextSlot.movie=nextMovie;
    nextSlot.startTime=addMinutes(ts.startTime,ts.movie.duration);
    return nextSlot;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    
    
    if((minutesSinceMidnight(ts1.startTime))>(minutesSinceMidnight(ts2.startTime))){
        return ts2.movie.duration>minutesSinceMidnight(ts1.startTime)-minutesSinceMidnight(ts2.startTime);
       }
   
    else {
        
   return ts1.movie.duration>minutesSinceMidnight(ts2.startTime)-minutesSinceMidnight(ts1.startTime);
    }}
    

int main()
{   
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}}; 
    
    TimeSlot p=scheduleAfter(morning,movie2);
    printTimeSlot(p);

    return 0;
}
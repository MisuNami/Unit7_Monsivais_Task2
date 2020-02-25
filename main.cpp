//Unit7_Monsivais_Task2 DrT STRUCTS C++11 2-24-2020
#include "appDate.h"
#include "timeOfDay.h"
#include "event.h"


using namespace std;





void createEvent(timeOfDay t, appDate a, Event e)
{

      short h = 0, m = 0, s = 0;
      short mo = 0, d=0;
      int y = 0, decision = 0;
      string urgent = "";
      string eName ="";
      
      //Populate timeOfDay
      cout << "Enter Hour: ";
      cin >> h;
      t.hour = h; //set the values based upon user Input

      cout << "Enter Minutes: ";
      cin >> m;
      t.minute = m; // set the values based upon user input

      cout << "Enter Seconds: ";
      cin >> s;
      t.second = s;
  
  //populate appDate
  cout << "Enter Month: ";
  cin >> mo;
  a.month = mo;
  
  cout << "Enter Day: ";
  cin >> d;
  a.dayOfMonth = d;

  cout <<"Enter Year: ";
  cin >> y;
  a.year = y;

  //set event details
  //get event information
  cout << "Enter Event Name: ";
  cin >> eName;
  
  cout <<"Is the event urgent? (1 = yes, 2 = no: )" ;

  cin >> decision;
  if(decision ==1)
  {
    e.isUrgent = true;
    urgent = "yes";
  }
  else if(decision == 2)
  {
  e.isUrgent = false;
  urgent = "no";
  }
else
{
  cout <<"Invalid input";
}

//put dMain in Event eMain
e.eventDate = a;
//put tMain in Event eMain
e.eventTime = t;
//print the event
cout << "\nEVENT DETAILS: " << endl;
cout << "Event name: " + e.eventName<< endl;
cout <<"\nIs urgent: " << e.isUrgent << "-->" << urgent << endl;
cout << e.toString();

}

int main() 
{
 //declare the instance of the STRUCT we need for this work
 Event eMain;
 timeOfDay tMain;
 appDate dMain;

 createEvent(tMain, dMain, eMain);
 
 
 return 0;
}
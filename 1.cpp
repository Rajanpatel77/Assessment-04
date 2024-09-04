#include <iostream>

using namespace std;

class Event {
public:
    string eventName;
    string firstName;
    string lastName;
    int numGuests;
    int numMinutes;
    const double CostPerHour = 18.50;
    const double CostPerMinute = 0.40;
    const double CostOfDinner = 20.70;

    void Ask()
     {
        cout << "*******Event Management System*********" << endl <<endl;

        cout<<"Enter the name of event "<<endl;
        cin>>eventName;
        
        cout<<"Enter the customer's first and last name "<<endl;
        cin>>firstName>>lastName;

        cout<<"Enter the of guests "<<endl<<endl;
        cin>>numGuests;

        cout<<"Enter the number of minutes in the event ";
        cin>>numMinutes;

    }

    void Cost()
    {

        // number of servers 
        int numberOfServers = (numGuests + 19) / 20; 
        
        // cost one server
        double costForOneServer = (numMinutes / 60) * CostPerHour + (numMinutes % 60) * CostPerMinute;

        // total cost servers
        double costForServers = numberOfServers * costForOneServer;

        // cost for food
        double totalFoodCost = numGuests * CostOfDinner;

        // average cost per person
        double averageCostPerPerson = CostOfDinner;

        // total cost
        double totalCost = costForServers + totalFoodCost;

        // deposit amount
        double depositAmount = totalCost * 0.25;

        // Display results
        cout<<"========Event estimate for "<<firstName<<" "<<lastName<<"============"<<endl;
        cout<<"Number Of Server: "<<numberOfServers<<endl;
        cout<<"The Cost for Servers: "<<costForServers<<endl;
        cout<<"The Cost for Food is: "<<totalFoodCost<<endl;
        cout<<"Average Cost Per Person: "<<averageCostPerPerson<<endl<<endl;
        cout<<"Total cost is: "<<totalCost<<endl;
        cout<<"Please deposit a 25% deposit to reserve the event"<<endl;
        cout<<"The deposit needed is: "<<depositAmount<<endl;
    }



};



int main() {

    Event data;
    //Call method 
    data.Ask();
    data.Cost();


    return 0;
}
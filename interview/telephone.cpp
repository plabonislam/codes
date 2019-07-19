
/*A Telephone company charges the following for long distance calls:
•	.50 per minute for regular rate
•	Any calls after 6:00 pm (1800) and before 6:00 am(600) receive a 50% discount
•	Any calls longer than 1 hour receive an addition 15% discount after all other discounts are applied.
•	All calls receive 4% federal tax and 2% state tax to be calculated into the final cost. After all discounts are applied.
Write a program that will get the cost for a long distance phone call. Prompt the user to enter in the time of the start of the phone call (in 24-hour clock format) and the length of the call. Print the gross cost of the phone call before any discounts are applied, the costs after all the discounts are applied, and the total cost of the phone call with the taxes added.

What I have so far:
*/
#include <iostream>
using namespace std;

int main()
{
int hrln, minln, hrout, minout;
float hours = 0;
float minutes = 0;
float total_minutes = 0;
double start_call, end_call;
start_call = 0.0;
end_call = 0.0;
double cost = 0.0;


cout << "What time did the call start?: "<<endl;

cout << "Enter the time(24 hour format): ";
cin>> start_call;

cout << "At what time did the call end?: ";
cin>> end_call;

minutes = (end_call/100 - start_call/100)* 60;
cout << "The minutes are: " << minutes <<endl;

if((start_call >= 6) || (start_call <= 18))

cost = minutes * .50;
else
cost = minutes * .50;

cout << "The cost of your call is: " <<cost<<".";
cout <<endl;
cout << "Duration of the call is: " <<hours<<".";
 hours = hrout - hrln;

cout << " y " <<minutes<< "minutes:";
total_minutes = (hours * 60) + minutes;
cout << ", or" <<total_minutes<< "minutes.\n" <<endl;
}

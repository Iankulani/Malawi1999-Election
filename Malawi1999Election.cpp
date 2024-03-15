/*This software prompts the user to enter total number of published centers, 
total number of registered voters, total number of null and void votes, total 
number of valid votes and total valid votes for each candidate. Afterward, 
it determines the candidate with the majority of votes and displays the results on the screen.

NOTE:For a candidate to be a majority winner the candidate total valid votes should be greater than majority.
*/ 

#include<iostream>
using namespace std;
int main(void){
system("color A");
cout<<"=============================== MALAWI ELECTORAL COMMISSION ===============================\n\n";
long long int  totalvalidvotesfor_Bakilimuluzi, 
totalvalidvotesfor_Gwandachakuamba, 
totalvalidvotesfor_Danielkanfosinkhumbwe, 
totalvalidvotesfor_Kamlepokalua,
totalvalidvotesfor_Bingumutharika,
totalvalidvotes,
totalregisteredvotes, 
totalvotescast, 
total_nullandvoid,
totalpublished_Centers, 
total_Centers,
majority;

/*Get total published centers */
cout<<"Enter Total Published Centers:";
cin>>totalpublished_Centers;
cout<<"Enter Total Centers:";
cin>>total_Centers;
// Get the total number of registered votes
cout<<"Enter Total Registered Voters/Turnout Votes:";
cin>>totalregisteredvotes;
// Get the total number of votes casted
cout<<"Enter Total Votes Cast:";
cin>>totalvotescast;
// Get total number of Null_&_Void votes
cout<<"Enter Total Null & Void Votes/Invalid Votes:";
cin>>total_nullandvoid;
// Get total votes
cout<<"Enter Total Valid Votes:";
cin>>totalvalidvotes; 
//Get Total Valid Votes for Dr Bakili Muluzi
cout<<"Enter Total Valid Votes for Dr Bakili Muluzi:";
cin>>totalvalidvotesfor_Bakilimuluzi;
//Get Total Valid Votes for  Gwanda Chakuamba
cout<<"Enter Total Valid Votes for Gwanda Chakuamba:";
cin>>totalvalidvotesfor_Gwandachakuamba;
//Get Total Valid Votes for  Daniel Kanfosi Nkhumbwe 
cout<<"Enter Total Valid Votes for Daniel Kanfosi Nkhumbwe:"; 
cin>>totalvalidvotesfor_Danielkanfosinkhumbwe;
//Get Total Valid Votes for Kamlepo Kalua
cout<<"Enter Total Valid Votes for Kamlepo Kalua:";
cin>>totalvalidvotesfor_Kamlepokalua;
//Get Total Valid Votes fo Bingu Wa Mutharika
cout<<"Enter Total Valid Votes fo Bingu Wa Mutharika:";
cin>>totalvalidvotesfor_Bingumutharika;

/*fifty plus one formular to determine the majority winner of an Election is majority=(totalvalidvotes/2)+1; */

majority=(totalvalidvotes/2)+1;

if (totalvalidvotesfor_Bakilimuluzi>majority){
cout<<"Cogratulations  Dr Bakili Muluzi you're the winner of 1999 presidential Election\n\n";
} else if(totalvalidvotesfor_Gwandachakuamba>majority){
cout<<"Congratulation Gwanda Chakuamba you're the winner of 1999 presidential Election\n\n";
} else if(totalvalidvotesfor_Danielkanfosinkhumbwe>majority){
cout<<"Cogratulations Daniel kanfosi Nkhumbwe  you're the winner of 1999 presidential Election\n\n";
} else if(totalvalidvotesfor_Kamlepokalua>majority){
cout<<"Cogratulations Kamlepo Kalua you're the winner of 1999 presidential Election\n\n";
}else if(totalvalidvotesfor_Bingumutharika>majority){
cout<<"Cogratulations Bingu Wa Mutharika  you're the winner of 1999 presidential Election\n\n";
} 
else 
{
cout<<"No majority winner was found RUNOF may be required Thank you.\n\n";

return 0;
}
}



























#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
cout<<"\n \t Welcome To The Number Guessing Game";
cout<<"\n You have to Guess number between 1 and 50.";
cout<<"\n Best of luck for this game";
srand(time(0));
int randomNumber=(rand()%50)+1;
cout<<"\n You have 6 chances to find random number between 1 and 50";
int choicesleft=6;
int playerinput;
for(int i=1;i<=6;i++)
{
cout<<"\n Enter the Number:";
cin>>playerinput;
if(playerinput==randomNumber)
{
cout<<"\n Well played! You won"<<playerinput<<"is the random number";
break;
}
else
{
if(playerinput>randomNumber)
{
cout<<"\n The random number is smaller than the number you have choosen";
}
else
{
cout<<"The random number is greater than the number you have choosen "<<endl;
}
}
choicesleft=choicesleft-1;
cout<<"\n Choices Left"<<choicesleft;
if(choicesleft==0)
{
cout<<"\n You could not find the random number!!it was"<<randomNumber;
cout<<"you lose the game";
}
}
return 0;
}

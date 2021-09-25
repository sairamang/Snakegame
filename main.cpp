
#include "Snake.hpp"
int main()
{
    char start_choice,end_choice;
    cout<<"Welcome to my Game"<<endl;
    cout<<"Do you want to start a new game"<<endl;
    cin>>start_choice;
    if(start_choice == 'y' )
    {
        Snake s;
    }
  
    cout<<"Press 'y' to exit "<< endl;
    while(end_choice != 'y' )
    {
        cin>>end_choice;  
    };
    return 0;
}
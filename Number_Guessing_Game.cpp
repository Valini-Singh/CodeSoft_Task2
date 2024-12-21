#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(static_cast<unsigned>(time(0)));
    int n;
    int attempts = 0;

    int lower = 1, upper = 100;
    int random_number = lower + (rand() % (upper - lower + 1));

    cout<<"I have choose a number between 1 to 100. Can you guess it"<<endl; 

    do{
    cout<<"Enter a number: ";
    cin>>n;
    attempts++;
    if(n < random_number)
        cout<<"Guess is low!"<<endl;
    else if(n > random_number)
        cout<<"Guess is high!"<<endl;
    else
        cout<<"Congratulation!! Correct Guess in "<<attempts<<endl;
    }while(n != random_number);
    
    return 0;
}
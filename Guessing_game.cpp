#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int number_to_guess;
    number_to_guess=1+(rand()%100);
    cout<<"Welcome to the guessing game! Let's get started\n";
    for(;;){
        cout<<"Enter your guess:";
        int guess;
        cin>>guess;
        if(guess==number_to_guess){
            cout<<"You guessed the number right!\n";
            break;
        }else if(guess>number_to_guess){
            cout<<"Your guess is high. Try any smaller number.\n";
        }else if(guess<number_to_guess){
            cout<<"Your guess is low. Try any greater number.\n";
        }
    }
}

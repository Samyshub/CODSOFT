#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    cout<<"NUMBER GUESSING GAME"<<endl;
    srand(time(0));
    int guessnum=rand()%100+1;
    int n;
    int chance;
    cout<<"Guess the number"<<endl;
    do{
        cout<<"Enter guess number "<<endl;
        cin>>n;
        chance++;
        if(n<guessnum){
            cout<<"TOO LOW! TRY AGAIN"<<endl;
        }
        else if(n>guessnum){
            cout<<"TOO HIGH! TRY AGAIN"<<endl;
        }
        else{
            cout<<"CONGRSTULSTIONS!!!"<<chance<<" Number of chances you took"<<endl;
        }
    }
    while(n != guessnum);


    return 0;
}
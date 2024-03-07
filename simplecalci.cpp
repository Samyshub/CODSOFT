#include<iostream>
using namespace std;
int main(){
    cout<<"SIMPLE CALUCULATOR"<<endl;
    int num1;
    cout<<"ENTER YOUR 1ST NUMBER"<<endl;
    cin>>num1;
    int num2;
    cout<<"ENTER YOUR 2ND NUMBER"<<endl;
    cin>>num2;
    char op;
    cout<<"SELECT ('+','-','*','/')"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<num1 << op << num2 <<"THE Addition is "<< num1 + num2 <<endl;
        break;
    case '-':
    cout<<num1 << op << num2 <<"THE Subtraction is "<< num1 - num2 <<endl;
    break;
    case '*':
        cout<<num1 << op << num2 <<"THE Multiplication is "<< num1 * num2 <<endl;
    break;
    case '/':
        if (num2==0){
            cout<<"cannot be determined"<<endl;
        }
        else{
                cout<<num1 << op << num2 <<"THE Division is "<< num1 / num2 <<endl;

        }

    break;

    
    default:
    cout<<"error"<<endl;
        break;
    }
    
    
    

    return 0;
}
#include<iostream>
using namespace std;
void show_task(string task[], int t_count){
    cout<<" The Tasks Are "<<endl;
    cout<<"------------------------"<<endl;
    for(int i=0; i<t_count; i++){
        cout<<"Task "<<i<<"--"<<task[i]<<endl;
    }
    cout<<"------------------------"<<endl;
}
int main(){
    string task[20] = {""};
    int t_count=0;
    int op=-1;
    while (op != 0)
    {
       cout<<" MY TO DO LIST "<<endl;
       cout<<" 1 - Enter your task "<<endl;
       cout<<" 2 - View My tasks "<<endl;
       cout<< " 3 - Mark as done "<<endl;
       cout<<" T - Teminate "<<endl;
       cin>>op;
       switch (op)
       {
       case 1:
       {
        if(t_count>19)
        {
            cout<<" THE LIST IS ALREADY FULL "<<endl;
        }
        else
        {
            cout<<"Enter Your Task: ";
            cin.ignore();
            getline(cin,task[t_count]);
            t_count++;
        }
        break;
       }
       case 2:{
        show_task(task,t_count);
        break;
       }
       case 3:{
        int done_task=0;
        cout<<"Enter the task to mark Done"<<endl;
        cin>>done_task;
        if(done_task<0 || done_task > 19)
        {
            cout<<" Invalid Task Number "<<endl;
            break;
        }
        for(int i= done_task ; i<t_count; i++)
        {
            task[i]= task[i+1];
        }
        t_count = t_count - 1;
        break;
       }
       case 0:
       cout<<" TERMINATING THE TO DO LIST "<<endl;
       break;
       default: 
       cout<<"INvalid Input "<<endl;
       }
    }
    return 0;
}
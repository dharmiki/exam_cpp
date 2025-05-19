#include<iostream>
using namespace std;

void push(int userValue,int top,int stack[]){

    stack[top]=userValue;

    for (int i = 0; i <= top; i++)
    {
        cout<<stack[i]<<endl;
    }

}

void pop(int userValue,int top,int stack[]){

    top--;

    for (int i = 0; i <= top; i++)
    {
        cout<<stack[i]<<endl;
    }

}

void peek(int top,int stack[]){

    
    cout << stack[top]<< endl;

}

void isEmpty(int top,int stack[]){

    if (stack[top] == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

}

void isFull(int top,int scale){

    
    if (top==scale)
    {
        cout << "stack is Full" << endl;
    }
    else
    {
        cout << "stack is Empty" << endl;
    }

}

void size(int top){

    cout<<top;

}

int main(){

    int scale;

    int *stack=new int[scale];

    int userOption;

    int top=-1;

    do
    {
        cout<<"---------------------------------OPTIONS---------------------------------"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.peek"<<endl;
        cout<<"4.isEmpty"<<endl;
        cout<<"5.isFull"<<endl;
        cout<<"6.size"<<endl;
        cout<<"0.exit"<<endl;

        cout<<"---------------------------------------------------------------------"<<endl;

        cout<<"Enter The Choose Options::"<<endl;
        cin>>userOption;

        cout<<"---------------------------------------------------------------------"<<endl;

        switch (userOption)
        {
        case 1:

            int userValue;

            cout<<"Enter UserValue::";
            cin>>userValue;

            top++;
            cout<<top<<endl;

            push(userValue,top,stack);

            break;

            cout<<"---------------------------------------------------------------------"<<endl;

        case 2:

            pop(userValue,top,stack);

            break;

            cout<<"---------------------------------------------------------------------"<<endl;

        case 3:

            peek(top,stack);

            break;

            cout<<"---------------------------------------------------------------------"<<endl;

        case 4:

            isEmpty(top,stack);

            break;

            cout<<"---------------------------------------------------------------------"<<endl;

        case 5:

            isFull(top,scale);

            break;

            cout<<"---------------------------------------------------------------------"<<endl;

        case 6:

            size(top);

            break;

            cout<<"---------------------------------------------------------------------"<<endl;

        case 0:

        cout << "Exiting the program. Goodbye!" << endl;

        break;

        cout<<"-------------------------------------------------"<<endl;

    default:

            cout<<"Invalid Choice....please try again:)";

            break;
        }


    } while (size!=0);
    




}
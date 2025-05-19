#include<iostream>
using namespace std;

int main(){

    int size,temp;

    cout<<"Enter the array size::";
    cin>>size;

    cout<<"-------------------------------------"<<endl;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter The Value::";
        cin>>array[i];
    }

    for (int i = 0; i <= size-1; i++)
    {
        for (int j = 0; j <= size-1; j++)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<"  ";
    }
    
}
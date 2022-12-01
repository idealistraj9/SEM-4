#include <iostream>
using namespace std;
class Queue
{
private:
    int f=-1,r=-1;
    int arr[5];

public:
    Queue()
    {   
        f=r=-1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool IsEmpty()
    {
        if (f == -1 && r == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool IsFull()
    {
        if (r==4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int v)
    {
        if (IsFull())
        {
            cout << "Queue Full"<<endl;
        }
        else if(IsEmpty())
        {
            f=r=0;
        }
        else{
            r++;
        }
            arr[r]=v;
    }
    int dequeue()
    {
        int returnV;
        if (IsEmpty())
        {
            cout << "Queue is Empty"<<endl;
            return 0;
        }
        else if(f==r)
        {
            returnV = arr[f];
            arr[f]=0;
            f=r=-1;
            return returnV;
        }
        else{
            returnV = arr[f];
            arr[f]=0;
            f++;
            return returnV;
        }
    }
    int count()
    {
        return (r-f + 1);
    }
    void display(){
        cout<<"All Value of Queue;"<<endl;
        for (size_t i = 0; i < 5; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    Queue s1;
    int value,option;
    do
    {
        cout<<"Select option:- "<<endl<<endl;
        cout<<"1.Enque"<<endl;
        cout<<"2.Deque"<<endl;
        cout<<"3.IsEmpty"<<endl;
        cout<<"4.IsFull"<<endl;
        cout<<"5.count"<<endl;
        cout<<"6.Display"<<endl;
        cout<<"7.Clear"<<endl<<endl<<endl;

        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"item :-";
            cin>>value;
            s1.enqueue(value);
            break;
        
        case 2:
            // cout<<"item :-";
            // cin>>value;
            cout<<"deque value is "<<s1.dequeue()<<endl;
            break;

        case 3:
            // cout<<"item :-";
            // cin>>value;
            cout<<" "<<s1.IsEmpty()<<endl;
            break;

        case 4:
            // cout<<"item :-";
            // cin>>value;
            cout<<s1.IsFull()<<endl;
            break;

        case 5:
            // cout<<"Position :-";
            // cin>>positon;
            cout<<s1.count()<<endl;
            break;

        case 6:
            // cout<<"item :-";
            // cin>>value;
            s1.display();
            break;

        case 7:
            system("cls");
            break;

        default:
        cout<<"Enter proper choice"<<endl;
            break;
        }
    } while (option!=0);

    
        
}
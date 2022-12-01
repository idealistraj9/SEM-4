#include <iostream>
using namespace std;
class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool IsEmpty()
    {
        if (top == -1)
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
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int v)
    {
        if (IsFull())
        {
            cout << "Stack OverFlow";
        }
        else
        {
            top++;
            arr[top] = v;
        }
    }
    int pop(int v)
    {
        if (IsEmpty())
        {
            cout << "Stack UnderFlow";
            return 0;
        }
        else
        {
            int returnV = arr[top];
            arr[top] = 0;
            top--;
            return returnV;
        }
    }
    int count()
    {
        return (top + 1);
    }
    int peck(int pos)
    {
        if (IsEmpty())
        {
            cout << "Stack UnderFlow";
        }
        else
        {
            return arr[pos];
        }
    }
    void change(int pos , int v){
        arr[pos]=v;
        cout<<"Value changed at location :"<<pos<<endl;
    }
    void display(){
        cout<<"All Value of Stack;"<<endl;
        for (size_t i = 0; i < 5; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    Stack s1;
    int option,positon,value;
    do
    {
        cout<<"Select option:- "<<endl<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.IsEmpty"<<endl;
        cout<<"4.IsFull"<<endl;
        cout<<"5.Peek"<<endl;
        cout<<"6.Count"<<endl;
        cout<<"7.Change"<<endl;
        cout<<"8.Display"<<endl;
        cout<<"9.Clear"<<endl<<endl<<endl;

        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"item :-";
            cin>>value;
            s1.push(value);
            break;
        
        case 2:
            cout<<"item :-";
            cin>>value;
            s1.pop(value);
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
            cout<<"Position :-";
            cin>>positon;
            s1.peck(positon);
            break;

        case 6:
            // cout<<"item :-";
            // cin>>value;
            cout<<s1.count()<<endl;
            break;

        case 7:
            cout<<"Position :-";
            cin>>positon;
            cout<<endl<<"item :-";
            cin>>value;
            s1.change(positon,value);
            break;

        case 8:
            // cout<<"item :-";
            // cin>>value;
            s1.display();
            break;

        case 9:
            system("cls");
            break;

        default:
        cout<<"Enter proper choice"<<endl;
            break;
        }
    } while (option!=0);

    
        
}
#include <iostream>
using namespace std;
class Node
{
private:
    /* data */
public:
    int key;
    int data;
    Node *next;
    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
        next = NULL;
    }
};
class SLinkedList
{
private:
    /* data */
public:
    Node *head;
    SLinkedList()
    {
        head = NULL;
    }
    SLinkedList(Node *n)
    {
        head = n;
    }

    Node *NodeAva(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    void insertNodeEnd(Node *n)
    {
        if (NodeAva(n->key) != NULL)
        {
            cout << "Node already Available" << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node inserted" << endl;
            }
            else
            {
                Node* ptr = head;
                while (ptr->next != NULL)
                {

                    ptr = ptr->next;
                }
                ptr->next = n;
                cout << "Node inserted" << endl;
            }
        }
    }

    void insertNodeStart(Node *n)
    {
        if (NodeAva(n->key) != NULL)
        {
            cout << "Node already Available" << endl;
        }
        else
        {
            n->next = head;
            head = n;
            cout << "Node inserted at Start" << endl;
        }
    }

    void insertNodePos(int k, Node *n)
    {
        Node *ptr = NodeAva(k);
        if (ptr == NULL)
        {
            cout << "No node available with key " << k << endl;
        }
        else
        {
            if (NodeAva(n->key) != NULL)
            {
                cout << "Node already Available" << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << "Node inserted" << endl;
            }
        }
    }

    void deleteNodeByKey(int k)
    {
        if (head == NULL)
        {
            cout << "Linkedlist is already empty" << endl;
        }
        else if (head != NULL)
        {
            if (head->key == k)
            {
                head = head->next;
                cout << "Node deleted with value of key " << k << endl;
            }
            else
            {
                Node *temp = NULL;
                Node *prev = head;
                Node *curr = head->next;

                while (curr != NULL)
                {
                    if (curr->key == k)
                    {
                        temp = curr;
                        curr = NULL;
                    }
                    else
                    {
                        prev = prev->next;
                        curr = curr->next;
                    }
                }
                if (temp != NULL)
                {
                    prev->next = temp->next;
                    cout << "Node deleted with key value " << k << endl;
                }
                else
                {
                    cout << "No Node found with key value " << k << endl;
                }
            }
        }
    }

    void updateNodeByKey(int k, int d)
    {
        Node *ptr = NodeAva(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "Node Updated with key value " << k << endl;
        }
        else
        {
            cout << "No node found with key value " << k << endl;
        }
    }

    void printList()
    {
        if (head == NULL)
        {
            cout << "No node found in linked list" << endl;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "->" << temp->data << ")-->";
                temp = temp->next;
            }
        }
    }
};
int main()
{
    SLinkedList sl;
    int option;
    int key1, k1, data1;

    do
    {
        cout <<endl<< "Select option:- " << endl<< "1.insertAtLast" << endl;
        cout << "2.insertAtStart" << endl;
        cout << "3.insertAtPos" << endl;
        cout << "4.DeleteNodeByKey" << endl;
        cout << "5.UpdateNodeByKey" << endl;
        cout << "6.printl" << endl;
        cout << "7.Clear" << endl;

        cin >> option;
        Node* n1 = new Node();
        // Node n1;
        switch (option)
        {
        case 1:
            cout << "key :-";
            cin >> key1;
            cout << "Data :-";
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            sl.insertNodeEnd(n1);
            break;

        case 2:
            cout << "key :-";
            cin >> key1;
            cout << "Data :-";
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            sl.insertNodeStart(n1);
            break;

        case 3:
            cout << "key of node after you want to add :-";
            cin >> k1;
            cout << "key of new Node :-";
            cin >> key1;
            cout << "Data :-";
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            sl.insertNodePos(k1, n1);
            break;

        case 4:
            cout << "key :-";
            cin >> k1;
            sl.deleteNodeByKey(k1);
            break;

        case 5:
            cout << "key :-";
            cin >> key1;
            cout << "Data :-";
            cin >> data1;
            sl.updateNodeByKey(key1, data1);
            break;

        case 6:
            sl.printList();
            break;

        case 7:
            system("cls");
            break;
        default:
            cout << "Enter proper choice" << endl;
            break;
        }
    } while (option != 0);

    return 0;
}
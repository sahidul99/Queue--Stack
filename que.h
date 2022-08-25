#include <bits/stdc++.h>
using namespace std;

template <typename t>
class Node{
    public:
    t value;
    Node* next;
    Node(int val)
    {
        this->value = val;
        this->next =NULL;
    }
};

template <typename t>
class Que{
    public:
    Node<t>* front;
    Node<t>* rear;
    int S;

    Que()
    {
        front = NULL;
        rear = NULL;
        S = 0;
    }

    void push(t val)
    {
        Node<t>* newNode = new Node<int>(val);
        S++;
        if(rear == NULL)
        {
            rear = newNode;
            front = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    t pop()
    {
        t reValue;
        if(front == NULL)
        {
            cout<<"The list is empty"<<endl;
            return reValue;
        }
        S--;
        Node<t>* delNode = front;
        reValue = front->value;
        front = front->next;
        delete delNode;
        return reValue;
    }

    t top()
    {
        t reValue;
        if(front != NULL)
            return front->value;
        return reValue;
    }

    bool empty()
    {
        if(S<1)
            return true;
        return false;
    }

    int size()
    {
        return this->S;
    }



};


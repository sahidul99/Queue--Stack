#include <bits/stdc++.h>
using namespace std;
template <typename t>
class Node{
    public:
    t value;
    Node* next;
    Node* prev;
    Node(t val)
    {
        this->value = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

template <typename t>
class Stack{
    public:
    Node<t>* head;
    Node<t>* Top;
    int S;
    Stack()
    {
        Top = NULL;
        S = 0;
    }
    //push
    void push(t val)
    {
        Node<t>* newNode = new Node<t>(val);
        S++;
        if(Top == NULL)
        {
            Top = newNode;
            return;
        }
        newNode ->prev = Top;
        Top->next = newNode;
        Top = newNode;
    }

    t pop()
    {
        t reValue;
        if(Top == NULL)
        {
            cout<<"The list is empty"<<endl;
            return reValue;
        }

        Node<t>* delNode = Top;
        S--;
        reValue = delNode->value;
        Top=delNode->prev;
        delete delNode;
        return reValue;
    }

    t top()
    {
        t reValue;
        if(Top == NULL)
        {
            cout<<"The list is empty"<<endl;
            return reValue;
        }
        reValue = Top->value;
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
        return S;
    }
    
};


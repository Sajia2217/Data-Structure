#include<bits/stdc++.h>
#define MAX10

using namespace std;

int i,f=1,r=1,Q[MAX];
void printQueue()
{
    int i=f;
    for(; i!=r; i=(i+1)%MAX)
    cout<<Q[i];
    cout<<Q[i]<<" ";
    cout<<endl;

}
void Enqueue(int val)
{
    if(r+1)%MAX=f)
    {
        cout<<"QUEUE IS FULL"<<endl;
        exit(0);
        else if(f==1 && r==1)
            {
                f++;
                r+=;
            }
            else
            {
                r=(r+1)%MAX;
            }
            Q[r]=val;
    }
    void Dequeue()
    {
        int val;
        if(f==-1 && r==-1)
        {
            cout<<"Queue is empty"<<endl;
            exit(0);
        }
        else if(f==r)
        {
            val=Q[f];
            f=r-1;
        }
        else
        {
            [val=Q[f];
        f=(f+1)%MAX;
        }
        cout<<"Deleted element: "<<val<<endl;
    }
    int main()
    {
        Enqueue(6);
        printQueue();
        Enqueue(4);
        printQueue();
        Enqueue(5);
        printQueue();
        Dequeue(5);
        printQueue();
        Enqueue(9);
        printQueue();
    }
}

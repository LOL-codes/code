#include <iostream>
#include <cstdlib>
using namespace std;

class N{
    public:
    int d;
    N* next;
    N* pre;

    N(int d){
        this->d=d;
        next=pre=NULL;
    }
};

class Dl{
    N* head;
    N* tail;

    public:

    Dl(){
        head=tail=NULL;
    }

    void push_front(int val){
        N* node=new N(val);

        if(head==NULL){
            head=tail=node;
            return;
        }
        else{
            node->next=head;
            head->pre=node;
            head=node;
        }
    }

    void push_back(int val){
        N* node=new N(val);

        if(head==NULL){
            head=tail=node;
            return;
        }
        // else{
        //     N* t=head;

        //     while(t->next!=NULL){
        //         t=t->next;
        //     }

        //     t->next=node;
        //     node->pre=t;
        // }
        else{
            node->pre=tail;
            tail->next=node;
            tail=node;
        }
    }

    void pop_front(){

        if(head==NULL){
            return;
        }

        N* t=head;
        head=t->next;

        if(head!=NULL){
            head->pre=NULL;
        }

        t->next=NULL;
        delete t;
    }

    void pop_back(){

        if(head==NULL){
            return;
        }

        N* t=tail;
        tail=tail->pre;//new tail

        // if(head==NULL){
        //     return;
        // }

        // while(t->next!=NULL){
        //     t=t->next;
        // }

        // t->pre->next=NULL;
        // t->pre=NULL;

        if(head!=NULL){
            tail->next=NULL;
        }

        t->pre=NULL;
        delete t;

    }

    void dis(){

        N* t=head;

        while(t!=NULL){
            cout << t->d << " ";
            t=t->next;
        }
    }

};

int main(){

Dl dl;

// dl.push_front(1);
// dl.push_front(2);
// dl.push_front(3);

dl.push_back(1);
dl.push_back(2);
dl.push_back(3);
dl.push_back(4);


dl.dis();

//dl.pop_front();

dl.pop_back();

cout << "\n";

dl.dis();

}
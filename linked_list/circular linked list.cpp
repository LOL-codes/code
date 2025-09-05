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

class Cl{
    N* head;
    N* tail;

    public:

    Cl(){
        head=tail=NULL;
    }

    void push_fornt(int val){
        N* node=new N(val);

        if(head==NULL){
            head=tail=node;
            tail->next=node; //coz of circular
        }
        else{

            node->next=head;
            head=node;
            tail->next=head;

        }
    }

    void push_back(int val){

        N* node=new N(val);

        if(head==NULL){
            head=tail=node;
            tail->next=head;
        }
        else{
            node->next=head;
            tail->next=node;
            tail=node;
        }
    }

    void pop_front(){

        if(head==NULL){
            return;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            N* t=head;

            head=head->next;
            tail->next=head;

            t->next=NULL;
            delete t;
        }
    }

    void pop_back(){

        if(head==NULL){
            return;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            N* t=tail;
            N* pre=head;

            while(pre->next!=tail){
                pre=pre->next;
            }

            tail=pre;
            tail->next=head;
            
            t->next=NULL;
            delete t;
        }

    }

    void dis(){

        if(head==NULL) return;

        N* t=head->next;

        cout << head->d << " ";

        while(t!=head){
            cout << t->d << " ";
            t=t->next;
        }

    }

};

int main(){

Cl cl;

// cl.push_fornt(1);
// cl.push_fornt(2);
// cl.push_fornt(3);
// cl.push_fornt(4);

cl.push_back(1);
// cl.push_back(2);
// cl.push_back(3);
// cl.push_back(4);

cl.dis();

//cl.pop_front();
cl.pop_back();

cout << "\n";

cl.dis();

}
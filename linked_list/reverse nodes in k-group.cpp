#include <iostream>
using namespace std;

class N{
    public:
    int d;
    N* adr;

    N(int d){
        this->d=d;
        adr=NULL;
    }
};

class Ll{
    public:
    N* head;

    Ll(){
        head=NULL;
    }

    void insert(int v){
        N* node=new N(v);

        if(head==NULL){
            head=node;
            return;
        }

        N* t=head;

        while(t->adr!=NULL){
            t=t->adr;
        }

        t->adr=node;
    }

    void dis(){

        N* t=head;

        while(t!=NULL){
            cout << t->d << " ";
            t=t->adr;
        }
    }
};

N* rotate(N* &h,int k){

    N* t=h;
    int c=0;

    while(c<k){
        if(t==NULL){
            return h;
        }
        t=t->adr;
        ++c;
    }

    N* prev=rotate(t,k);

    t=h;
    c=0;

    while(c<k){

        N* next=t->adr;
        t->adr=prev;

        prev=t;
        t=next;

        ++c;
    }

    return prev;

}

int main(){

    Ll l1,l2;

    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);

    l1.dis();

    cout << "\n";

    l2.head=rotate(l1.head,3);

    l2.dis();


}
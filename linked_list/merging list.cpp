#include <iostream>
#include <cstdlib>
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

N* merge(N* &h1,N* &h2){

    if(h1==NULL || h2==NULL){
        return h1==NULL?h2:h1;
    }

    if(h1->d <= h2->d){
        h1->adr=merge(h1->adr,h2);
        return h1;
    }
    else{
        h2->adr=merge(h1,h2->adr);
        return h2;
    }
    
}

int main(){

    Ll l1,l2;

    l1.insert(1);
    l1.insert(3);
    l1.insert(5);

    l2.insert(2);
    l2.insert(4);
    l2.insert(6);

    l1.dis();
    cout << "\n";
    l2.dis();

    N* newptr=merge(l1.head,l2.head);

    cout << "\n";

    while(newptr!=NULL){
        cout << newptr->d << " ";
        newptr=newptr->adr;
    }

}
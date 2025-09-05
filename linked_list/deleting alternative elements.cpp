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

void delalt(N* &head){
    N* cur=head;

    while(cur!=NULL && cur->adr!=NULL){
        N* t=cur->adr;
        cur->adr=cur->adr->adr;
        free(t);
        cur=cur->adr;
    }
}

int main(){

    Ll ll;

    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);

    ll.dis();

    cout << "\n";

    delalt(ll.head);

    ll.dis();

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//REMOVING ALTERNATIVE ELEMENTS AND ADDING IT TO THE LAST 

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

void delalt(N* &head){
    N* cur=head;
    N* h1=NULL;
    N* c=NULL;

    while(cur!=NULL && cur->adr!=NULL){
        N* t=cur->adr;
        cur->adr=cur->adr->adr;

        if(h1==NULL){
            h1=t;
            c=t;
        }
        else{
            c->adr=t;
            c=c->adr;
        }
        
        c->adr=NULL;
        cur=cur->adr;
    }

    cur=head;

    while(cur->adr!=NULL){
        cur=cur->adr;
    }

    cur->adr=h1;
}

int main(){

    Ll ll;

    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);

    ll.dis();

    cout << "\n";

    delalt(ll.head);

    ll.dis();

}
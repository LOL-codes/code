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

N* middle(N* &head){
    N* slow=head;
    N* fast=head;

    while(fast!=NULL && fast->adr!=NULL){
        slow=slow->adr;
        fast=fast->adr->adr;
    }

    return slow;
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

    N* mid=middle(ll.head);

    cout << mid->d;

}
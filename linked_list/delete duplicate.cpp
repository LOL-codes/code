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

void deldup(N* &head){
    N* cur=head;

    while(cur!=NULL){
        while(cur->adr && cur->d==cur->adr->d){
            N* t=cur->adr;
            cur->adr=cur->adr->adr;
            free(t);
        }
        cur=cur->adr;
    }
}
int main(){

    Ll ll;

    ll.insert(1);
    ll.insert(2);
    ll.insert(2);
    ll.insert(2);
    ll.insert(3);

    ll.dis();

    cout << "\n";

    deldup(ll.head);

    ll.dis();

}
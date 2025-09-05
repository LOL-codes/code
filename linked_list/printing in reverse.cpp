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

void reverse(N* &head){
    if(head==NULL){
        return;
    }
    reverse(head->adr);
    cout << head->d << " ";
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

    reverse(ll.head);

}

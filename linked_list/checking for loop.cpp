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

//making the case

void loop(N* &head){
    N* t=head;

    while(t->adr!=NULL){
        t=t->adr;
    }

    t->adr=head->adr->adr;
}

//checking the case

bool chkloop(N* &head){
    N* slow=head;
    N* fast=head;

    while(fast!=NULL && fast->adr!=NULL){
        slow=slow->adr;
        fast=fast->adr;

        if(slow==fast){
            return true;
        }
    }

    return false;
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

    loop(ll.head);

    bool ans=chkloop(ll.head);

    cout << ans?"loop":"no loop";

}


////////////////////////////////////////////////////////////////////////////////////////////////////////////

//returning the starting point of the loop if cycle exist in a linked list

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

//making the case

void loop(N* &head){
    N* t=head;

    while(t->adr!=NULL){
        t=t->adr;
    }

    t->adr=head->adr->adr;
}

//checking the case

bool chkloop(N* &head){
    N* slow=head;
    N* fast=head;

    while(fast!=NULL && fast->adr!=NULL){
        slow=slow->adr;
        fast=fast->adr;

        if(slow==fast){
            return true;
        }
    }

    return false;
}

//returning the starting point of the loop if cycle exist in a linked list

N* start(N* &head){
    N* slow=head;
    N* fast=head;
    bool st=false;

    while(fast!=NULL && fast->adr!=NULL){
        slow=slow->adr;
        fast=fast->adr->adr;

        if(slow==fast){
            st=true;
            break;
        }
    }

    if(!st){
        return NULL;
    }
     
    slow = head;
    N* pre=NULL;

    while(slow!=fast){
        slow=slow->adr;
        pre=fast; //to get the previous pointer before meeting the starting point
        fast=fast->adr;
    }

    pre->adr=NULL; //making the loop break
    
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

    loop(ll.head);

    cout << (start(ll.head))->d;
}
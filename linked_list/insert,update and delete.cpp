#include <iostream>
#include <cstdlib>
using namespace std;

class A{

    public:
    int d;
    A* p;

    A(int d){
        this->d=d;
        p=NULL;
    }
};

void head(A* &he,int v){
    A* node=new A(v);
    node->p=he;
    he=node;
}

void tail(A* &he,int v){
    A* node=new A(v);
    A* t=he;

    if(he==NULL){
        he=node;
        return;
    }

    while(t->p!=NULL){
        t=t->p;
    }

    t->p=node;
}

void insert(A* &he,int v,int pos){

    if(pos==0){
        head(he,v);
        return;
    }

    A* t=he;
    int c=0;

    while(c!=pos-1){
        t=t->p;
        ++c;
    }

    A* node=new A(v);

    node->p=t->p; //t will be holding the next obj adr 
    t->p=node;

}

void update(A*&he,int v,int p){
    A* t=he;
    int c=0;

    while(c!=p){
        t=t->p;
        ++c;
    }

    t->d=v;
}

void travel(A* &h){
    A* t=h;
    while(t!=NULL){
        cout << t->d << " " << t->p << "\n";
        t=t->p;
    }
}

void delathead(A* &he){

    A* t=he;
    he=he->p;
    free(t);

}

void delattail(A* &he){
    A* secondlast=he;

    while(secondlast->p->p!=NULL){ 
        secondlast=secondlast->p;
    }

    A* t=secondlast->p;
    secondlast->p=NULL;
    free(t);

}

void delatidx(A* &he,int idx){

    if(idx==0){
        delathead(he);
        return;
    }

    A* pre=he;
    int c=0;

    while(c!=idx-1){
        pre=pre->p;
        ++c;
    }

    A* t=pre->p;
    pre->p=pre->p->p;
    free(t);
}

int main(){

    A* o=NULL;

    // head(o,1);
    // head(o,2);
    // head(o,3);

    tail(o,1);
    tail(o,2);
    tail(o,3);

    // insert(o,1,0);
    // insert(o,2,1);
    // insert(o,3,1);

    // update(o,0,1);

    travel(o);

    cout << "\n";

    //delathead(o);
    //delattail(o);
    delatidx(o,2);

    travel(o);

}
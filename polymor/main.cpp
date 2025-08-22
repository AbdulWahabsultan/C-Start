#include<iostream>
class Account {
public:
    virtual void withdraw(double ammount){
        std::cout << "In Account withdraw"<<std::endl;
    }
    virtual ~Account(){std::cout <<"Account destructor"<<std::endl;}
};
class Checking: public Account{
public:
    virtual void withdraw(double ammount){
        std::cout << "In checking withdraw"<<std::endl;

    }
    virtual ~Checking(){std::cout <<"Checking destructor"<<std::endl;}
};

class Savings: public Account{
public:
    virtual void withdraw(double ammount){
        std::cout << "In savings withdraw"<<std::endl;

    }
    virtual ~Savings(){std::cout <<"Savings destructor"<<std::endl;}
};

class Trust: public Account{
public:
    virtual void withdraw(double ammount){
        std::cout << "In trust withdraw"<<std::endl;

    }
    virtual ~Trust(){std::cout <<"Trust destructor"<<std::endl;}
};
int main (){
    std::cout<<"\n ======pointers=======\n";
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    std::cout<<"\n ====clean up==="<<std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}

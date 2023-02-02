//Concepts Covered: classes,ojects,Inheritance and its types


#include<iostream>
#include<string>
using namespace std;

//PURE VIRTUAL FUNCTION
class Salary{
    public:
    virtual void getSalary()=0;
};
class Expenditure:public Salary{
    public:
    void getSalary(){
        int income,savings;
        cout<<"Enter your Income:"<<endl;
        cin>>income;
        cout<<"Enter your Savings:"<<endl;
        cin>>savings;
        cout<<"Your Expenditure: "<<income-savings<<endl;
    }
};



//INHERITANCE
//Base Class for execution of multilevel Inheritance
class multilevelInhertance_1{
    public:
    void printfunction_1(){
        cout<<"To calculate your Expenditure"<<endl;
    }
};

class multilevelInhertance_2{
    public:
    void printfunction_2(){
        cout<<"Keep track of your income and savings amount"<<endl;
    }
};

//Base Class for execution of other types of Inheritance
class Payment{
private:
string name;
int id;

public:
void setname(string c_name){
    name=c_name;
}
string getname(){
    return name;
}

void setid(int c_id){
    id=c_id;
}
int getid(){
    return id;
}
};

//Derived Class (Inheritance) 
class Info:public Payment{
    public:
    void info(string name, int id){
        cout<<"Hi "<<name<<"\nYour id is: "<<id<<endl;
    }
};

//multilevel_inheritance
class Rent:public Info{ 
      public:
    void rent_paid(string name){
        cout<<name<<"\nYour rent is paid "<<endl;
    }  
};

//multiple Inheritance
class Display:public multilevelInhertance_1,public multilevelInhertance_2{ 
    
};

int main(){
    //INHERITANCE IMPLEMENTATION
    Info cust1;     //Object Creation
    cust1.setname("Shreya");
    cust1.setid(1234);
    cust1.info(cust1.getname(),cust1.getid());
    Rent cust2;
    cust2.setname("Pragathi");
    cust2.setid(2324);
    cust2.info(cust2.getname(),cust2.getid());
    cust2.rent_paid(cust2.getname());
    Display mul_lvl;
    mul_lvl.printfunction_1();
    mul_lvl.printfunction_2();
    //PURE VIRTUAL FUNCTION IMPLEMENTATION
    Expenditure test;
    test.getSalary();
    
}
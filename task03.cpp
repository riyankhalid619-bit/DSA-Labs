#include <iostream>
using namespace std;

class Student{
    public:
    int marks;
    int rollNumber;
    
    void display(){
cout<<"\nROLL-NUMBER\t\tMARKS"<<endl;
        cout<<rollNumber<< "\t\t\t\t"<<marks; 
    }
};

int main() {
Student s1;
Student s2;
    s1.rollNumber=1;
    s1.marks=75;
    s2.rollNumber=2;
    s2.marks=90;
    
cout<<"Original information before alteration :"<<endl;
    cout<<"The details of student-1 is: ";
   s1.display();
    cout<<endl;
    
    cout<<"The details of student-2 is: ";
 s2.display();
    cout<<endl;

    //s1 marks changed
    s1.marks=80;
    //printing updated data after s1 marks are changed
    cout<<"Information after s1 data changed :"<<endl;
      cout<<"The details of student-1 is: ";
    s1.display();
    cout<<endl;
        cout<<"The details of student-2 is: ";
    s2.display();
    

    return 0;
}


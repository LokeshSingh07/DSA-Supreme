#include<iostream>
using namespace std;



int main(){

    //Taking input from user
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    cout<<"Input character is : "<<ch<<endl;


    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    cout<<"Printing marks : "<<marks<<endl;




    // Assignment operator
    int a = 3;
    int b = 2;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;



    // Logical operator
    int age = 69;
    int car = 12;

    if(age>=18 && car>=1){
        cout<<"License mil jayega"<<endl;
    }
    if(age>=18 || car>=1){
        cout<<"License mil jayega"<<endl;
    }

	cout << !age << endl;
	
	int val1 = 20;
	int val2 = 10;
	cout << (val1 == val2) << endl;




	// garbage value
	int val;
	val = 12;
	cout << val << endl;




    // sizeof operator
    
    //int  ->  4 byte
    int num = 50;
    cout<<num<<endl;
    cout<<sizeof(num)<<endl;

    //character  ->  1byte
    char chr = 'C';
    cout<<chr<<endl;
    cout<<sizeof(chr)<<endl;

    //float  ->  4byte    
    float ft = 66.99;
    cout<<ft<<endl;
    cout<<sizeof(ft)<<endl;

    //long  ->  8byte
    long lg = 96;
    cout<<lg<<endl;
    cout<<sizeof(lg)<<endl;


	// cout << endl;
	// cout << '\n';



return 0;
}
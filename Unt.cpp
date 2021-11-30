#include<iostream>
using namespace std;

//Fowarded 
class Y;
	
class X{
	int data;
	public:
		void setdata(int value){
			data  =  value ;	
		}
		void display(){
          	cout <<data;
		  }
	//	friend function
		friend void add(X , Y);
		friend void exchange(X &  , Y &);
};

class Y{
	int num ;
	public:
		void setdata(int value){
			num   =  value ;	
		}
		friend void add(X , Y);
		friend void exchange(X & , Y &);
          void display(){
          	cout <<num;
		  }
};
 
void add(X o1 , Y o2){
	cout << "The Summing Of These 2 Data is : " << o1.data + o2.num << endl;
} 
void exchange( X & a ,  Y & b){
int 	tmp = a.data;
        a.data = b.num;
        b.num = tmp;
}
/*
If You Want to swap and 2 number use this trick.
a and b are 2 number.
temp = a;
a = b ;
b = temp;
*/
int main(){
	X  x1;
	x1.setdata(200); 
	Y  y1;
    y1.setdata(23);
	
	add(x1,y1);
	y1.setdata(23);
	x1.setdata(36);
	exchange(x1, y1);
	cout << endl;
	
	cout << "The Vaue Of X  After swap is  : " ;
    x1.display();
   	cout << endl;
	
    cout << "The Vaue Of Y After swap is  : "  ;
    y1.display();
    cout << endl;
	
}

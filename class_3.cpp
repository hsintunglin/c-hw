#include <iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"a"<<endl;
		}
		~A(){
			cout<<"b"<<endl;
		}
		void test1(){
			cout<<"testa1"<<endl;
		}
		/*virtual */void test2(){
			cout<<"testa2"<<endl;
		}
}; 
class B :public A{
	public:
		B(){
			cout<<"c"<<endl;
		}
		~B(){
			cout<<"d"<<endl;
		}
		void test1(){
			cout<<"testb1"<<endl;
		}
		virtual void test2(){
			cout<<"testb2"<<endl;
		}
}; 
int main(void){
	B b1;
	b1.test1();
	b1.test2();
	cout<<"---------"<<endl;
	A* b2 = new B;
	b2->test1();
	b2->test2();
	delete b2;
}

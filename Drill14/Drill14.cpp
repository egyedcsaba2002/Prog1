#include "std_lib_facilities.h"

	struct B1{
		virtual void vf() {cout<< "B1::vf()\n";}
		void f() {cout<< "B1::f()\n";}
		virtual void pvf() =0;
	};

	struct D1 : B1{
		void vf() override {cout << "D1::vf()\n";}
		void f() {cout << "D1::f()\n";}
	};
	struct D2 : D1{
		void pvf() override {cout <<"D2::pvf()\n";}
	};
	struct B2{
		virtual void pvf() =0;
	};
	struct D21 : B2{
		string s = "cat machine";
		void pvf() override {cout << s << "\n";}
	};
	struct D22 : B2{
		int i = 0311;
		void pvf() override {cout << i << "\n";}
	};
	void f(B2& b){
		b.pvf();
	}
int main(){
	/*
	//1.
	cout << "1.\n"; 
	B1 b;
	b.vf();
	b.f();
	//2.
	cout << "2.\n"; 
	D1 d;
	d.vf();
	d.f();
	//3.
	cout << "3.\n";
	B1& b1ref = d;
	b1ref.vf();
	b1ref.f(); 
	//4.
	cout << "4.\n";
	b.vf();
	b.f();
	d.vf();
	d.f();
	b1ref.vf();
	b1ref.f(); 
	//5.	
	b.vf();
	b.f();
	d.vf();
	d.f();
	b1ref.vf();
	b1ref.f();
	*/
	cout << "5.\n";
	cout << "error\n";
	//6.
	cout << "6.\n";
	D2 d2;
	d2.f();
	d2.vf();
	d2.pvf();
	//7.
	cout << "7.\n";
	D21 d21;
	D22 d22;
	cout << "d21:\n";
	f(d21);
	cout << "d22:\n";
	f(d22);
	return 0;
}
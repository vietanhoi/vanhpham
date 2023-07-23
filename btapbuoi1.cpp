#include <bits/stdc++.h>
using namespace std;
 
 class PS
 {
 	// private have or haven't 
 	private:
 	int ts,ms;
 	public :
 		void nhap(){
 			cout<<"Nhap tu so: ";
 			cin>>ts;
 			cout<<"Nhap mau so: ";
 			cin>>ms;
 			while ( ms ==0)
 			{
 				cout<<" -> KHông hop le ,\n nhap again: ";
 				cin>>ms;
 			}
 				   }
 				void xuat();
 };
 
 void PS::xuat()
 {
 	cout<<ts<<"/"<<ms<<endl;
 }
  int main()
     {
 	PS a;
 	a.nhap();
 	a.xuat();
 	return 0;
	  }

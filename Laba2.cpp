1)
#include<iostream>)
using namespace std;
bool f(int a) {
	return a > 20;
}
int main() {
	int a;
	cout << "vedite a= ";
	cin >>a;
	 a=f(a) ;
	 cout << a;
	 return 0;

}


2)
  #include<iostream>
using namespace std;
void f(int k) {
	if (k < 999, k>99) {
		int a = k / 100;
		int b = k / 10 % 10;
		int c = k % 10;
		int s = a + b + c;
		cout << "vash otvet:=" << s;
	}
	else {
		cout << "vi durak kak Ivan Durak";
	}
}
void main() {
	int k;
	cout << "vvedite trex znachnoe naturalnoe chislo:= ";
	cin >> k;
	f(k);
}



3)
  #include<iostream>
using namespace std;
bool f(int a) {
	return a > 99;
	return a < 999;
	return a % 100 == 54; 
	
}
int main() {
	int a;
	cout << "vvedite celoe chislo a:= ";
	cin >> a;
	cout<<f(a);
	return 0;
 }

1)
 #include<iostream>
using namespace std;
bool f(int a) {
	if (a > 20 & a%2==0) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int a;
	cout << "Vvedite a:= ";
	cin >> a;
	cout << f(a);
	return 0;
}


2)
  #include<iostream>
using namespace std;
bool f(int x,int y, int z) {
	if (x >= 10, y >= 10, z >= 10) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int x;
	cout << "vvedite x:= ";
	cin >> x;
	int y;
	cout << "vvedite y:= ";
	cin >> y;
	int z;
	cout << "vvedite z:= ";
	cin >> z;
	cout<<f(x,y,z);
}
  
  3)
  #include<iostream>
using namespace std;
bool f(int a) {
	if (a%10==5||9999<a<99999){
		return true;
	}else{
		return false;
	}

}
int main() {
	int a;
	cout << "vvedite a:= ";
	cin >> a;
	cout << f(a);
	return 0;
	
}
  
  
 4)
  #include<iostream>
using namespace std;
int f(int a) {
	if(a>0&&a/10==6){
		return a+1;
	}else{
		return a-2;
	}

}
int main() {
	int a;
	cout << "vedite dwuznachnoe chislo  ";
	cin >> a;
	cout << f(a)*5;
	return 0;
}

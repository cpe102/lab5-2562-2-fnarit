#include<iostream>
using namespace std;

string mixText(string A,string B){
	if(A.size() == B.size()){
		string s = "";
		int t = 0;
		while(t < A.size()){
			cout << s+A[t]+B[t];
			t++;
		}
	}else{
		return "E";
	}
	return "";
} 




int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}

#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;

	int i = 0;
	string name[N];
	int age[N];
	while(i < N){
		cout << "Name of student "<< i+1 <<" = ";
		cin >> name[i];
		cout << "Age of student "<< i+1 <<" = ";
		cin >> age[i];
		i++;
	}

	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	
	int j = 0;
	while(j < N){
		if(age[j] == key){
			cout << name[j] << "\n";
		}
		j++;
	}
	cout << "--------------------------------------\n";
	
	return 0;
}

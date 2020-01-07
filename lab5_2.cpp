#include<iostream>
#include<string>
using namespace std;

string mixText(string a , string b){
	int La = a.size();
	int Lb = b.size();
	string c = "";
	int i = 0;
	
	if(La == Lb){
		while(i<La){
			c = c + a[i]+b[i];
			i++;
		}
		return c;
	}
	else{
		return "E";
	}
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

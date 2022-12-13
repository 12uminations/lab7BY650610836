#include<iostream>
#include<string>

using namespace std;

string w;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){

    cout << "Input text: ";
	cin >> w; 
    cout << "Reversed text: ";
	cout << func1(w) << "\n";
	func2(func1(w));
	func3(func1(w));
	if(func2(func1(w))==func2(w) or func3(func1(w))==func2(w)){
		cout << "Palindrome: Yes";
		}
		else {
   		cout << "Palindrome: No";
		}
    return 0;
}

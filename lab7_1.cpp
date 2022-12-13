#include<iostream>
#include<string>

using namespace std;

string reverse(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string upper(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string lower(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}
string Palindrome(string a,string b){
	if(a==b){
		return "Yes";
	}else{
		return "No";
	}
}


int main(){

	string n="";
    cout << "Input text: ";
	cin >> n;
    cout << "Reversed text: "<<reverse(n)<<endl;
    cout << "Palindrome: "<<Palindrome(lower(n),reverse(lower(n)));
	
    return 0;
}


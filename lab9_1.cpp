#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){
	double loan,ryear,apyear,TT;
	cout << "Enter initial loan: ";
	cin >> loan; 
	cout << "Enter interest rate per year (%): ";
	cin >> ryear; 
	cout << "Enter amount you can pay per year: ";
	cin >> apyear; 

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << right << "Total";
	cout << setw(13) << right << "Payment";
	cout << setw(13) << right << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for ( int Y = 1; loan != 0 && loan >0 ; Y++)
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << Y; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << loan * (ryear/100);
		TT = loan + (loan * (ryear/100));
		cout << setw(13) << right << TT;
		if(TT < apyear){apyear = TT;}
		cout << setw(13) << right << apyear;
		loan = TT - apyear;
		if (loan < 0){loan = 0;}
		cout << setw(13) << right << loan;
		cout << "\n";
	}	
	
	return 0;
}

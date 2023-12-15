#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int x,int y){
	int row = 0; 
	if( x > 0 && y > 0 ){
	    while( row < x){
	    int cha = 0;
		do{ cout << "O"; 
			cha++; }while (cha < y);
        cout << "\n";
		row++;
	    }
	}
	else{
		cout << "Invalid input";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	int count[5] = {'A' ,'B' ,'C' ,'D' ,'F'};
	int A=0 ,B=0,C=0,D=0,F=0 ;
	char grade ;
	int sum=1 ;                    //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit. \n";
	do{
		cout << "Student [" <<sum<< "]: ";
		cin >> grade; 
		    //cout<<grade ;
		if(grade=='0')
		{break ;} 
		                          //The loop must be terminated when grade = '0'
		
		if(grade==count[0]){                                      // if grade is A
			A++ ;
			sum+=1;}
			//Do something
		else if(grade==count[1]){  
		    B++ ;
		    sum+=1 ;}                                     // if grade is B
	    else if (grade==count[2]){
		    C++  ;                
		    sum+=1 ;} //Do something
	    else if (grade==count[3]){
	        D++ ;   
	        sum+=1 ;}
	    else if(grade==count[4]) {                   //and so on ... for grade = C, D, F	
	        F++ ;
	        sum+=1 ;}
		else{                                  // grade is wrong input
		   cout<< "Wrong input. Please input again. \n" ;  
		   //Do something
		} 
	}while(true);
	
	
	cout << "In total "<<sum-1<< " students. \n";
	cout << "A = " << A <<", ";
	cout << "B = " << B <<", ";	
	cout << "C = " << C <<", ";
	cout << "D = " << D <<", ";
	cout << "F = " << F ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
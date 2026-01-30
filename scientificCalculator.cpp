#include<iostream>
#include<cmath>
using namespace std;

void Addition(float num1,float num2){
	float sum = num1 + num2;
	cout<<"The Addition of "<<num1<<" and "<<num2<<" is : "<<sum; 
	cout<<"\n\n*********** Thank You for using Calculator **************\n"<<endl;
}

void Subtraction(float num1,float num2){
	float sub = num1 - num2;
	cout<<"The Subtraction of "<<num1<<" and "<<num2<<" is : "<<sub; 
	cout<<"\n\n*********** Thank You for using Calculator **************\n"<<endl;
}

void Multiplication(float num1,float num2){
	float multiply = num1 * num2;
	cout<<"The Multiplication of "<<num1<<" and "<<num2<<" is : "<<multiply; 
	cout<<"\n\n*********** Thank You for using Calculator **************\n"<<endl;
}

void Division(float num1,float num2){
	float div = num1 / num2;
	cout<<"The Division of "<<num1<<" by "<<num2<<" is : "<<div; 
	cout<<"\n\n*********** Thank You for using Calculator **************\n"<<endl;
}

void Modulo(int num1,int num2){
	int mod = num1 % num2;
	cout<<"The Remainder of "<<num1<<" divide by "<<num2<<" is : "<<mod; 
	cout<<"\n\n*********** Thank You for using Calculator **************\n"<<endl;
}

void Power(double num1,double num2){
	cout<<"The Power of (base) "<<num1<<" and (exponent)"<<num2<<" is : "<<(double)pow(num1,num2); 
	cout<<"\n\n*********** Thank You for using Calculator **************\n"<<endl;
}

void Square(double num1){
	cout<<"The Square of "<<num1<<" is : "<<(double)num1 * (double)num1; 
	cout<<"\n\n*********** Thank You for using Calculator **************\n"<<endl;
}

void Cube(double num1){
	cout<<"The Addition of "<<num1<<" is : "<<(double)num1 * (double)num1 * (double)num1;
	cout<<"\n\n*********** Thank You for using Calculator **************\n"<<endl; 
}

void Factorial(int num1){
	int fact = 1;
	for(int i=1; i<=num1; i++){
		fact *= i;
	}
	cout<<"The Factorial of "<<num1<<" is : "<<fact;
 	cout<<"\n\n*********** Thank You for using Calculator **************\n"<<endl; 	
}

void SquareRoot(int num1){
	cout<<"The Square Root of "<<num1<<" is : "<<sqrt(num1);
	cout<<"\n\n*********** Thank You for using Calculator **************\n"<<endl; 	
}

int main(){
	cout<<"\n*********************** Welcome to Scintific Calculator! ************************** \n"<<endl;
	
	int num1;
	int num2;
	int op;
	
	    do{
    cout<<"\nYou can do the following operations :\n"<<endl;
    cout<<"================================================\n"<<endl;
	cout<<"Enter 1 for Addition"<<endl;
	cout<<"Enter 2 for Subtraction"<<endl;
	cout<<"Enter 3 for Multiplication"<<endl;
	cout<<"Enter 4 for Division"<<endl;
	cout<<"Enter 5 for remainder(Modulo operation)"<<endl;
	cout<<"Enter 6 for Power(Exponention) "<<endl;
	cout<<"Enter 7 for Square"<<endl;
	cout<<"Enter 8 for Cube"<<endl;
	cout<<"Enter 9 for Factorial"<<endl;
	cout<<"Enter 10 for Square Root"<<endl;
	cout<<"Use 0 for End \n"<<endl;
	cout<<"================================================\n"<<endl;
	
	cout<<"Enter the operation : ";
	cin>>op;
	
	if(op>=1 && op<=6){
	cout<<"Enter the first and second value : ";
	cin>>num1>>num2;
    } else if(op>=7 && op<=10){
	cout<<"Enter only one number : ";
	cin>>num1;
    }
	
	switch(op){
		case 1:
			Addition(num1,num2);
		    break;
		    
		case 2:
		    Subtraction(num1,num2);
		    break;
		    
		case 3:
		    Multiplication(num1,num2);
			break;
			
		case 4:
		    Division(num1,num2);
			break;
			
		case 5:
		    Modulo(num1,num2);
			break;
			
		case 6:
			Power(num1,num2);
			break;
		case 7:
		    Square(num1);
			break;
			
		case 8:
		    Cube(num1);
			break;

        case 9:
		    Factorial(num1);
			break;
		
		case 10:
		   	SquareRoot(num1);
		   	break;
		   	
		case 0:
			exit(0);
			
		default:
			cout<<"Invalid Operator you have selected!!\n"<<endl;
	}
  }while(op != 10);
    

	return 0;
}

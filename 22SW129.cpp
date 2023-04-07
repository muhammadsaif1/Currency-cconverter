#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
ofstream saif("File.txt"); //--> for file handling
class currency {
	double amount,result;
	// functions 
	public:
	void Additonal_functionality()  // sleepmode fucntion
	{
	  cout<<"NAME : MUHAMMAD SAIF \n";
    cout<<"ROLL NUM : 22SW129  ";
    saif<<"NAME : MUHAMMAD SAIF \n";
    saif<<"ROLL NUM : 22SW129  ";
    saif<<"\n\n\n\n\t\t\t\t\t\t\t\t\t\tResult:\n\n\n\n";
	    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tCURRENCY CONVERTER SYSTEM";
    cout<<"\t\t\t\t\t\t\t\t\t\t        *************************\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t\t\t\t        Wait few Seconds please";
       	for (int i=0; i<5; i++)
	{
	  cout<<"..";		
		Sleep(1000);
	}
	system("CLS");	
	}
	
	
	//***********************************************************************
	//-->  *********************BASIC INTERFACE FUNCTION*********************
	//***********************************************************************
	void about()
	{
	cout<<"NAME : MUHAMMAD SAIF \n";
    cout<<"ROLL NUM : 22SW129  ";
	cout<<"\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\tWhich Operation Do You Want to Perform ...? \n\n\n\n\n ";
	cout<<"\t\t\t\t\t\t\t\tPress 1: Convert  US Dollors to  PKR Rupees \n\n ";
	cout<<"\t\t\t\t\t\t\t\tPress 2: Convert  PKR to US Dollors \n\n ";
	cout<<"\t\t\t\t\t\t\t\tPress 3: Convert US Dollors to Indian Rupees \n\n ";
	cout<<"\t\t\t\t\t\t\t\tPress 4: Convert Indian Rupees to US Dollors \n\n ";
	cout<<"\t\t\t\t\t\t\t\tPress 5: Convert EURO to US Dollors \n\n ";
	cout<<"\t\t\t\t\t\t\t\tPress 6: Convert US Dollors to Euros \n\n ";
	cout<<"\t\t\t\t\t\t\t\tPress 7: Convert Saudi Riyal to PKR Rupees \n\n ";
	cout<<"\t\t\t\t\t\t\t\tPress 8: Convert PKR Rupees to Saudi Riyal  \n\n ";	
	}
	
	//*************************************************************************************
	//*************************************************************************************
	//*************************************************************************************
		//-->  this function will convet US dollars into PKR.
	void case1_function(){
		cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter US Dollors :";
		cin>>amount;
		if(amount>0){
		
		result = amount*283.80;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" US Dollors == "<<result<<" PKR Rupees";
		saif<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" US Dollors == "<<result<<" PKR Rupees";
	}
	else 
	cout<<"Wrong Input";
	//-->  this function will convet PKR into $.
	}
	void case2_function(){
		cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter Pakistani Rupees: ";
		cin>>amount;
		if(amount>0){
		result = amount/283.80;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t "<<amount<<" PKR == "<<result<<"$"<<endl;
		saif<<"\n\n\t\t\t\t\t\t\t\t\t "<<amount<<" PKR == "<<result<<"$"<<endl;
}
else
cout<<"Wrong input";
	}
	
	//-->  this function will convet US dollars into IND.
	void case3_function(){
		cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter US DOLLORS : ";
		cin>>amount;
		if(amount>0){
		result = amount*82.18;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" US Dollors  = "<<result<<" Inidan Rupees"<<endl;
		saif<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" US Dollors  = "<<result<<" Inidan Rupees"<<endl;
}
else
cout<<"Wrong Input";
	}
	
	
	
	//-->  this function will convet IND into $.
	void case4_function(){
		cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter INDIAN Rupees :";
		cin>>amount;
		if(amount>0){
		result = amount/82.18;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" Indian Rupess  = "<<result<<"$"<<endl;
		saif<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" Indian Rupess  = "<<result<<"$"<<endl;
}
else
cout<<"Wrong Input";
	}


//-->  this function will convet EUROS into $.
	void case5_function(){
		cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter EUROS :";
		cin>>amount;
		if(amount>0){
		result = amount*1.09;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" EUROS = "<<result<<"$"<<endl;
		saif<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" EUROS = "<<result<<"$"<<endl;
}
else
cout<<"Wrong Input";
	}


//-->  this function will convet US dollars into EUROS.
    void case6_function(){
		cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter US Dollors :";
		cin>>amount;if(amount>0){
		result = amount/1.09;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" US DOllors   = "<<result<<" EUROS"<<endl;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" US DOllors   = "<<result<<" EUROS"<<endl;
}
cout<<"Wrong Input";
	}
	
	
	//-->  this function will convet SAUDI RIYAL into PKR.
    void case7_function(){
		cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter Saudi Riyal :";
		cin>>amount;
		if(amount>0){
		result = amount*75.63;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" Saudi Riyal = "<<result<<" PKR "<<endl;
		saif<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" Saudi Riyal = "<<result<<" PKR "<<endl;
}
cout<<"Wrong Input";
	}
	
	//-->  this function will convet PKR into SAUDI RIYAL.
	 void case8_function(){
		cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter PKR Rupees :";
		cin>>amount;
		if(amount>0){
		result = amount/75.63;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" PKR = "<<result<<" Saudi Riyal "<<endl;
		saif<<"\n\n\t\t\t\t\t\t\t\t\t"<<amount<<" PKR = "<<result<<" Saudi Riyal "<<endl;
}
cout<<"Wrong Input";
	}


// total  7 functions in the class 
// six fucntions  perform operations:
	
}; // CLASS CURRENCY ENDS
//********_____________________MAIN STARTS_________________**********************************
//***********************************************************************************************
int main ()
{  
//               ____________________-->      WELCOME PAGE           <-- ______________________________
system("color 9f"); //  --> this will change the color of the terminal and text
cout<<"\n\n\n\n\n \t\t\t WELCOME";
Sleep(1000);
cout<<"\tTO";
Sleep(1000);
cout<<"\tCURRENCY";
Sleep(1000);
cout<<"\t CONVERSION";
Sleep(1000);
cout<<"\tSYSTEM";
Sleep(1000);
system("CLS");
system("color 8F");


	currency saif;  //  here currency is the name of the class and saif is the object 
	saif.Additonal_functionality(); // calling the function additional_functionality

	int choice;  
	char c; 
	do {
		saif.about();
		cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER CHOICE : ";
		cin>>choice; 
		if(choice>0||choice<0){
		
		// switch statement used to perform operations:
		switch (choice)
	{
		case 1:
	    saif.case1_function();  // case1_function which decalred in the currency class
		break;
			
	    case 2:
		saif.case2_function();  // case2_function which decalred in the currency class
		
		break;
		
		case 3:
		saif.case3_function(); // case3_function which decalred in the currency class
		break;
		
		case 4:
		saif.case4_function(); // case4_function which decalred in the currency class
		break;
		
		case 5:
		saif.case5_function(); // case5_function which decalred in the currency class
		break;
		
		case 6:
		saif.case6_function();  // case6_function which decalred in the currency class
		break;
		
		case 7:
		saif.case7_function();  // case7_function which decalred in the currency class
		break;
		 
		case 8:
		saif.case8_function();  // case8_function which decalred in the currency class
		break;
		
		 
		
		default:   // when user Enter wrong input 
		cout<<"\n\n\n\t\t\t\t\t\tSorry invalid choice  please try again,   Thank You!.............";
		}
	}
	    cout<<"\n\n\n\n\n\t\t\t\t\t\tDo you Want to continue if yes, then press (y) otherwise press any key to terminate : ?";
		cin>>c;	
		system("CLS");
	}
	 while (c == 'y' || c == 'Y');
//************************************************************************************************
//**********________________________WHEN PROGRAM IS TERMINATED____________*************************	
	cout<<" \n\n\n\n\n\n\n\t\t\t\t\t\t\t\tProgram Terminated!...\n";
	cout<<"\t\t\t\t\t\t\t\t*******************";
	cout<<"\n\n\n\n \t\t\t\t\t Thankyou for chosing our program, Have a nice day \n";
	cout<<"\n \t\t\t\t //////////******************************//////////";
	
	
	
}


#include <string>
#include <iostream>
#include <cmath>

using namespace std;

//UNITS CONVERTER

double taxConverter(){
	
	double tax,salary,age;
	int x;
	string sex;
	
	x = 0;
	
	while(x <=10)
	{
        
        
        	cout<<"Enter a Salary Value:\n";
	cin>>salary;
	
	if(salary > 0)
	{
		cout<<"Enter sex of Person e.g: m for male and f for female\n";
		cin>>sex;

		if(sex == "m")
	{
		cout<<"Enter age of person\n";
		cin>>age;
		
			
		  if((age == 0) || (age <= 17.0))
			{
				tax = (3.0/100.0) * salary;
				cout<<"Tax on Salary is: N"<<tax<<endl;
			}
			else if((age == 18.0) || ((age > 18.0 ) && (age <= 24.0)))
		
			{
				tax = (5.0/100.0) * salary;
				cout<<"Tax on Salary is: N"<<tax<<endl;
			}
			
			
		else if((age == 25.0) || ((age > 25.0 ) && (age <= 60.0)))
			{
				tax = (15.0/100.0) * salary;
				cout<<"Tax on Salary is: N"<<tax<<endl;
			}
			
			else if((age == 61.0) || (age>60.0))
			{
				tax = (7.0/100.0) * salary;
				cout<<"Tax on Salary is: N"<<tax<<endl;
			}
			
		}
		
		else if(sex == "f")
		{
			
		cout<<"Enter age of person\n";
		cin>>age;
		

			
			if((age == 0) || (age <= 17.0))
			{
				tax = (2.0/100.0) * salary;
				
				cout<<"Tax on Salary is: N"<<tax<<endl;
			}
		else if((age == 18.0) || ((age > 18.0 ) && (age <= 24.0)))
			{
				tax = (3.5/100.0) * salary;
				cout<<"Tax on Salary is: N"<<tax<<endl;
			}
			
		else if((age == 25.0) || ((age > 25.0 ) && (age <= 60.0)))
			{
				tax = (10.0/100.0) * salary;
				cout<<"Tax on Salary is: N"<<tax<<endl;
			}
			
			else if((age == 61.0) || (age>60.0))
			{
				tax = (4.0/100.0) * salary;
				cout<<"Tax on Salary is: N"<<tax<<endl;
			}
			
			
		}
		
	}
	
	else if(salary <= 0)
	{
		
		cout<<"Invalid Salary value entered";
	
	}
        x++;
    }
	

	
	
	
	
}






int main ()
{
	taxConverter();
	
}




//INCLUDING NECESSARY LIBRARIES

#include <string>
#include <iostream>
#include <cmath>
#include <fstream>
#include <ctype.h>

using namespace std;




  //Length converter function

double LengthConverter()
    {
        
	//open file
        fstream myfile;
        myfile.open("ProjectConverter.txt", ios :: out | ios :: app);
        
      //initialize control variables  
      double x,y;
      string inunit,outunit,choice,incheck,outcheck,InputSelectedType,OutputSelectedType;
	  
      int LoopLimit,LoopIterator;
	  
      cout<<"Enter how many times do you want to run length converter: \n";
	  
      cin>>LoopLimit;
	  
	  
	   
	  
	  if(cin.fail())
      {
		
		cout<<"Invalid Entry Stopping Converter....... \n";
	
		return 0;
		
		
	}
	
	if(LoopLimit <=0)
	{
		
	cout<<"Invalid Entry Stopping Converter....... \n";
	
	return 0;
		
		
	}
	  
      

      LoopIterator = 0;
      
      
      while(LoopIterator < LoopLimit){
      
      
      cout<<"Enter value to convert :\n";
      
      //write to file
      myfile<<"Enter value to convert :\n";
      
      cin>>x;
      
      //write to file
      myfile<<x<<endl;
      
	   if(!cin.fail())
	  {
	  
	  
      if(x>0){
        
    cout<<"Enter input unit \n";
    //write to file
     myfile<<"Enter input unit \n";
     
      //write to file
 
     
     cout<<"Enter: km for Kilometer \n";
     cout<<"Enter: m for Meter \n";
     cout<<"Enter: dm for Decimeter \n";
     cout<<"Enter: cm for Centimeter \n";
     cout<<"Enter: mm for Millimeter \n";
     
     myfile<<"Enter: km for Kilometer \n";
     myfile<<"Enter: m for Meter \n";
     myfile<<"Enter: dm for Decimeter \n";
     myfile<<"Enter: cm for Centimeter \n";
     myfile<<"Enter: mm for Millimeter \n";
    
      cin>>inunit;
	  
	  
	   incheck = inunit;
	  
	  //Declare currency values
	if(inunit == "km")
    {
      InputSelectedType = " Kilometer";
    }
    else if(inunit == "m")
    {
        InputSelectedType = " Meter";
    }
    else if(inunit == "dm")
    {
       InputSelectedType = " Decimeter"; 
    }
    else if(inunit == "cm")
    {
       InputSelectedType = " Centimeter"; 
    }
    else if(inunit == "mm")
    {
       InputSelectedType = " Millimeter"; 
    }
	  
	  
	  
	  
	  
      //write to file
     myfile<<inunit<<endl;
     
      cout<<"Enter output unit \n";
      
      //write to file
     myfile<<"Enter output unit \n";
     
     cout<<"Enter: km for Kilometer \n";
     cout<<"Enter: m for Meter \n";
     cout<<"Enter: dm for Decimeter \n";
     cout<<"Enter: cm for Centimeter \n";
     cout<<"Enter: mm for Millimeter \n";
     
     myfile<<"Enter: km for Kilometer \n";
     myfile<<"Enter: m for Meter \n";
     myfile<<"Enter: dm for Decimeter \n";
     myfile<<"Enter: cm for Centimeter \n";
     myfile<<"Enter: mm for Millimeter \n";

     
      cin>>outunit;
	  
	  
	    outcheck = outunit;
	  
	    //Declare currency values
	if(outunit == "km")
    {
      OutputSelectedType = " Kilometer";
    }
    else if(outunit == "m")
    {
        OutputSelectedType = " Meter";
    }
    else if(outunit == "dm")
    {
       OutputSelectedType = " Decimeter"; 
    }
    else if(outunit == "cm")
    {
       OutputSelectedType = " Centimeter"; 
    }
    else if(outunit == "mm")
    {
       OutputSelectedType = " Millimeter"; 
    }
	  
	  
	  
	    
	 if((incheck == "mm" | incheck == "cm" | incheck == "dm" | incheck == "m" | incheck == "km") && (outcheck == "km" | outcheck == "m" | outcheck == "dm" | outcheck == "cm" | outcheck == "mm"))
  	 {
		
	  
      
        //write to file
     myfile<<outunit<<endl;
      
       cout<<"Converting "<<x<<InputSelectedType <<" to "<<OutputSelectedType<<"......\n Answer = ";
      
      //Write conversion type to file
      
      myfile<<"Converting "<<x<<InputSelectedType <<" to "<<OutputSelectedType<<"......\n Answer = ";
      
      if(inunit == "mm")
      {
        if(outunit == "mm")
        {
            y = x;
            cout<<y<<" mm"<<endl;
            myfile<<y<<" mm"<<endl;
        }
         
        else if(outunit == "cm")
        {
            y = x/10.0;
             cout<<y<<" cm"<<endl;
             myfile<<y<<" cm"<<endl;
        }
        
         else if(outunit == "dm")
        {
            y = x/100.0;
             cout<<y<<" dm"<<endl;
             myfile<<y<<" dm"<<endl;
        }
         
          else if(outunit == "m")
        {
            y = x/1000.0;
             cout<<y<<" m"<<endl;
             myfile<<y<<" m"<<endl;
        }
        
         else if(outunit == "km")
        {
            y = x/1000000.0;
             cout<<y<<" km"<<endl;
             myfile<<y<<" km"<<endl;
        }
            
      }
    
    
    
    else if(inunit == "cm")
      {
          if(outunit == "mm")
        {
            y = x*10.0;
            cout<<y<<" mm"<<endl;
            myfile<<y<<" mm"<<endl;
        }
         
        else if(outunit == "cm")
        {
            y = x;
             cout<<y<<" cm"<<endl;
             myfile<<y<<" cm"<<endl;
        }
        
         else if(outunit == "dm")
        {
            y = x/10.0;
             cout<<y<<" dm"<<endl;
             myfile<<y<<" dm"<<endl;
        }
         
          else if(outunit == "m")
        {
            y = x/100.0;
             cout<<y<<" m"<<endl;
             myfile<<y<<" m"<<endl;
        }
        
         else if(outunit == "km")
        {
            y = x/100000.0;
             cout<<y<<" km"<<endl;
             myfile<<y<<" km"<<endl;
        }
            
      }
        
    
    
    
   else if(inunit == "dm")
      {
          if(outunit == "mm")
        {
            y = x * 100;
            cout<<y<<" mm"<<endl;
            myfile<<y<<" mm"<<endl;
        }
         
        else if(outunit == "cm")
        {
            y = x * 10.0;
             cout<<y<<" cm"<<endl;
             myfile<<y<<" cm"<<endl;
        }
        
         else if(outunit == "dm")
        {
            y = x;
             cout<<y<<" dm"<<endl;
             myfile<<y<<" dm"<<endl;
        }
         
          else if(outunit == "m")
        {
            y = x/10.0;
             cout<<y<<" m"<<endl;
             myfile<<y<<" m"<<endl;
        }
        
         else if(outunit == "km")
        {
            y = x/10000.0;
             cout<<y<<" km"<<endl;
             myfile<<y<<" km"<<endl;
        }
            
      }
    
    
    
    else if(inunit == "m")
      {
          if(outunit == "mm")
        {
            y = x *1000.0;
            cout<<y<<" mm"<<endl;
            myfile<<y<<" mm"<<endl;
        }
         
        else if(outunit == "cm")
        {
            y = x * 100;
             cout<<y<<" cm"<<endl;
             myfile<<y<<" cm"<<endl;
             
        }
        
         else if(outunit == "dm")
        {
            y = x * 10;
             cout<<y<<" dm"<<endl;
             myfile<<y<<" dm"<<endl;
        }
         
          else if(outunit == "m")
        {
            y = x;
            
             cout<<y<<" m"<<endl;
             myfile<<y<<" m"<<endl;
        }
        
         else if(outunit == "km")
        {
            y = x/1000;
             cout<<y<<" km"<<endl;
             myfile<<y<<" km"<<endl;
        }
            
      }
    
    
    
        
    else if(inunit == "km")
      {
        
          if(outunit == "mm")
        {
            y = x * 1000000.0;
            cout<<y<<" mm"<<endl;
            myfile<<y<<" mm"<<endl;
        }
         
        else if(outunit == "cm")
        {
            y = x * 100000.0;
             cout<<y<<" cm"<<endl;
             myfile<<y<<" cm"<<endl;
        }
        
         else if(outunit == "dm")
        {
            y = x * 10000.0;
             cout<<y<<" dm"<<endl;
             myfile<<y<<" dm"<<endl;
        }
         
          else if(outunit == "m")
        {
            y = x * 1000;
             cout<<y<<" m"<<endl;
             myfile<<y<<" m"<<endl;
        }
        
         else if(outunit == "km")
        {
            y = x;
             cout<<y<<" km"<<endl;
             myfile<<y<<" km"<<endl;
        }
      }
        
          }
	 else{
		
		cout<<"Invalid input or output unit selected \n Stopping Converter \n";
		myfile<<"Invalid input or output unit selected \n Stopping Converter \n";		
		break;
		
		}
        
      	
		}
            
      else if(x <=0 )
      {
          
        cout<<"Invalid value entered \n";
        myfile<<"value to convert must be greater than zero (0)";
    }
        
       
        
        cout<<"Do you want to end this converter? \n";
		cout<<"Enter: y for YES | n for NO \n";
		
		//write to file
		myfile<<"Do you want to end this converter? \n";
		myfile<<"Enter: y for YES | n for NO \n";
		
		cin>>choice;
		
		//write to file

		myfile<<choice<<endl;
		
		if(choice == "y" || choice == "n")
		{
			
		if(choice == "y")
		{
        LoopIterator = LoopLimit;
        }
        else if(choice == "n")
        {
           LoopIterator++; 
        }
			
		}
		else if(choice != "y" || choice != "n")
		{
			cout<<"Invalid Entry stopping converter..... \n";
			myfile<<"Invalid Entry stopping converter..... \n";
			break;
		} 
		
		
		
		  }
	else
	  {
		cout<<"You failed to enter the correct value \n";
		cout<<"Stopping converter \n";
		myfile<<"You failed to enter the correct value \n";
		myfile<<"Stopping converter \n";
		break;
		  
	  }
	   
        
    }
        myfile<<" \n \n";
        myfile<<" \n \n";
        myfile.close();
        
    }
    
    
   
   //Temperature converter function
    
    double TemperatureConverter()
    {
    
       //open file
        fstream myfile;
        myfile.open("ProjectConverter.txt", ios :: out | ios :: app);
        
      double x,y;
      string inunit,outunit,choice,incheck,outcheck,InputSelectedType,OutputSelectedType;
	  
	   int LoopLimit,LoopIterator;
	  
      cout<<"Enter how many times you wan to run Temperature converter: \n";
	  
      cin>>LoopLimit;
	  
	  
	   
	  if(cin.fail())
      {
		
		cout<<"Invalid Entry Stopping Converter....... \n";
	    myfile<<"Invalid Entry Stopping Converter....... \n";
		return 0;
		
		
	}
	
	if(LoopLimit <=0)
	{
		
	cout<<"Invalid Entry Stopping Converter....... \n";
	myfile<<"Invalid Entry Stopping Converter....... \n";
	return 0;	
		
	}
	  
	  
      
      LoopIterator = 0;
      
      
      while(LoopIterator < LoopLimit){
	  
      cout<<"Enter Temperature value to convert :\n";
      
      
      //write to file
      myfile<<"Enter Temperature value to convert :\n";
      
      cin>>x;
      
      //write to file
      myfile<<x<<endl;
      
       if(!cin.fail())
	  {

	   
    cout<<"Enter input unit \n";
    //write to file
     myfile<<"Enter input unit \n";

    cout<<"Enter: f for Fahrenheit \n";
     cout<<"Enter: k for Kelvin \n";
     cout<<"Enter: r for Rankine \n";
     cout<<"Enter: de for Delisle \n";
     cout<<"Enter: c for Celsius \n";
	 
	  //write to file
	 myfile<<"Enter: f for Fahrenheit \n";
     myfile<<"Enter: k for Kelvin \n";
     myfile<<"Enter: r for Rankine \n";
     myfile<<"Enter: de for Delisle \n";
     myfile<<"Enter: c for Celsius \n";
    
      cin>>inunit;
	  
	   incheck = inunit;
	  
	  //Declare currency values
	if(inunit == "f")
    {
      InputSelectedType = " Fahrenheit";
    }
    else if(inunit == "k")
    {
        InputSelectedType = " Kelvin";
    }
    else if(inunit == "r")
    {
       InputSelectedType = " Rankine"; 
    }
    else if(inunit == "de")
    {
       InputSelectedType = " Delisle"; 
    }
    else if(inunit == "c")
    {
       InputSelectedType = " Celsius"; 
    }
	  
	  
	  
	  
      //write to file
     myfile<<inunit<<endl;
     
      cout<<"Enter output unit \n";
      //write to file
     myfile<<"Enter output unit \n";
	 
     cout<<"Enter: f for Fahrenheit \n";
     cout<<"Enter: k for Kelvin \n";
     cout<<"Enter: r for Rankine \n";
     cout<<"Enter: de for Delisle \n";
     cout<<"Enter: c for Celsius \n";
	 
	  //write to file
	 myfile<<"Enter: f for Fahrenheit \n";
     myfile<<"Enter: k for Kelvin \n";
     myfile<<"Enter: r for Rankine \n";
     myfile<<"Enter: de for Delisle \n";
     myfile<<"Enter: c for Celsius \n";
   
	 
      cin>>outunit;

	  outcheck = outunit;
	  
	  //Declare currency values
	if(outunit == "f")
    {
      OutputSelectedType = " Fahrenheit";
    }
    else if(outunit == "k")
    {
        OutputSelectedType = " Kelvin";
    }
    else if(outunit == "r")
    {
       OutputSelectedType = " Rankine"; 
    }
    else if(outunit == "de")
    {
       OutputSelectedType = " Delisle"; 
    }
    else if(outunit == "c")
    {
       OutputSelectedType = " Celsius"; 
    }
	  
	  
	  
	   if((incheck == "f" | incheck == "k" | incheck == "r" | incheck == "de" | incheck == "c") && (outcheck == "c" | outcheck == "de" | outcheck == "r" | outcheck == "k" | outcheck == "f"))
  	 {
		
	  
    	  
        //write to file
     myfile<<outunit<<endl;
      
       cout<<"Converting "<<x<<InputSelectedType <<" to "<<OutputSelectedType<<"......\n Answer = ";
      
      //Write conversion type to file
      
      myfile<<"Converting "<<x<<InputSelectedType <<" to "<<OutputSelectedType<<"......\n Answer = ";
      
      
      if(inunit == "f")
      {
        if(outunit == "k")
        {
			
			y = (x + 459.67) * (5.0/9.0);
            cout<<y<<" Kelvin"<<endl;
            myfile<<y<<" Kelvin"<<endl;
        }
         
        else if(outunit == "r")
        {
			y =  x + 459.67;
           cout<<y<<" Rankine"<<endl;
             myfile<<y<<" Rankine"<<endl;
        }
        
         else if(outunit == "de")
        {
			y = (212.0 - x) * (5.0/6.0);
            cout<<y<<" Delisle"<<endl;
             myfile<<y<<" Delisle"<<endl;
        }
         
          else if(outunit == "c")
        {
			 y = (x - 32.0) * (5.0/9.0);
            cout<<y<<" Degrees Celsius"<<endl;
             myfile<<y<<" Degrees Celsius"<<endl;
        }
        
         else if(outunit == "f")
        {
			y = x;
			cout<<y<<" Degrees Fahrenheit"<<endl;
             myfile<<y<<" Degrees Fahrenheit"<<endl;
        }
            
      }
    
    
    
    else if(inunit == "c")
      {
        if(outunit == "k")
        {
			y = x + 273.15;
            cout<<y<<" Kelvin"<<endl;
            myfile<<y<<" Kelvin"<<endl;
        }
         
        else if(outunit == "r")
        {
			y = (x + 273.15)*(9.0/5.0);
           cout<<y<<" Rankine"<<endl;
             myfile<<y<<" Rankine"<<endl;
        }
        
         else if(outunit == "de")
        {
			y = (100.0 - x) * (3.0/2.0);
            cout<<y<<" Delisle"<<endl;
             myfile<<y<<" Delisle"<<endl;
        }
         
          else if(outunit == "c")
        {
			  y = x;
            cout<<y<<" Degrees Celsius"<<endl;
             myfile<<y<<" Degrees Celsius"<<endl;
        }
        
         else if(outunit == "f")
        {
          y = x * (9.0/5.0) + 32.0;
		   cout<<y<<" Degrees Fahrenheit"<<endl;
             myfile<<y<<" Degrees Fahrenheit"<<endl;
        }
            
            
      }
        
    
    
    
   else if(inunit == "de")
      {
        
		if(outunit == "k")
        {
			y = 373.15 - (x * (2.0/3.0));
            cout<<y<<" Kelvin"<<endl;
            myfile<<y<<" Kelvin"<<endl;
        }
         
        else if(outunit == "r")
        {
			y = 671.67 - (x * (6.0/5.0));
           cout<<y<<" Rankine"<<endl;
             myfile<<y<<" Rankine"<<endl;
        }
        
         else if(outunit == "de")
        {
			  y = x;
            cout<<y<<" Delisle"<<endl;
             myfile<<y<<" Delisle"<<endl;
        }
         
          else if(outunit == "c")
        {
			y = 100.0 - (x*(2.0/3.0));
            cout<<y<<" Degrees Celsius"<<endl;
             myfile<<y<<" Degrees Celsius"<<endl;
        }
        
         else if(outunit == "f")
        {
			y = 212.0 - (x*(6.0/5.0));
		   cout<<y<<" Degrees Fahrenheit"<<endl;
             myfile<<y<<" Degrees Fahrenheit"<<endl;
        }
            
		
            
      }
    
    
    
    else if(inunit == "r")
      {
        
		
		
		if(outunit == "k")
        {
			y = x * (5.0/9.0);
            cout<<y<<" Kelvin"<<endl;
            myfile<<y<<" Kelvin"<<endl;
        }
         
        else if(outunit == "r")
        {
			
			 y = x;
           cout<<y<<" Rankine"<<endl;
             myfile<<y<<" Rankine"<<endl;
        }
        
         else if(outunit == "de")
        {
			y = (671.67 - x) * (5.0/6.0);
            cout<<y<<" Delisle"<<endl;
             myfile<<y<<" Delisle"<<endl;
        }
         
          else if(outunit == "c")
        {
			y = (x - 491.67) * (5.0/9.0);
            cout<<y<<" Degrees Celsius"<<endl;
             myfile<<y<<" Degrees Celsius"<<endl;
        }
        
         else if(outunit == "f")
        {
         
			y = x - 459.67;
		   cout<<y<<" Degrees Fahrenheit"<<endl;
             myfile<<y<<" Degrees Fahrenheit"<<endl;
        }
            
		
		
      }
    
    
    
        
    else if(inunit == "k")
      {
        
		
		
		if(outunit == "k")
        {
			
			 y = x;
            cout<<y<<" Kelvin"<<endl;
            myfile<<y<<" Kelvin"<<endl;
        }
         
        else if(outunit == "r")
        {
			y = x * (9.0/5.0);
			
           cout<<y<<" Rankine"<<endl;
             myfile<<y<<" Rankine"<<endl;
        }
        
         else if(outunit == "de")
        {
			 y = (373.15 - x) * (3.0/2.0);
            cout<<y<<" Delisle"<<endl;
             myfile<<y<<" Delisle"<<endl;
        }
         
          else if(outunit == "c")
        {
			y = x - 273.15;
            cout<<y<<" Degrees Celsius"<<endl;
             myfile<<y<<" Degrees Celsius"<<endl;
        }
        
         else if(outunit == "f")
        {
			y = x * (9.0/5.0) - 459.67;
		   cout<<y<<" Degrees Fahrenheit"<<endl;
             myfile<<y<<" Degrees Fahrenheit"<<endl;
        }
		
		
      }
	  
	   }
	 else{
		
		cout<<"Invalid input or output unit selected \n Stopping Converter \n";
		myfile<<"Invalid input or output unit selected \n Stopping Converter \n";	
		break;
		
		}
        
           
       cout<<"Do you want to end this converter? \n";
		cout<<"Enter: y for YES | n for NO \n";
		myfile<<"Do you want to end this converter? \n";
		myfile<<"Enter: y for YES | n for NO \n";
		
		cin>>choice;
		
		//write to file
		myfile<<choice<<endl;
		
		if(choice == "y" || choice == "n")
		{
			
		if(choice == "y")
		{
        LoopIterator = LoopLimit;
        }
        else if(choice == "n")
        {
           LoopIterator++; 
        }
			
		}
		else if(choice != "y" || choice != "n")
		{
			cout<<"Invalid Entry stopping converter..... \n";
			myfile<<"Invalid Entry stopping converter..... \n";
			break;
		}
		
		
		  }
	else
	  {
		cout<<"You failed to enter the correct value \n";
		cout<<"Stopping converter \n";
		myfile<<"You failed to enter the correct value \n";
		myfile<<"Stopping converter \n";
		break;
		  
	  }
		
        
    }    
          myfile<<" \n \n";
          myfile<<" \n \n";
         myfile.close();
        
    }
  
    
   //Weight Converter function
    
    double WeightConverter()
    {
    
       //open file
        fstream myfile;
        myfile.open("ProjectConverter.txt", ios :: out | ios :: app); 
        
      double x,y;
     string inunit,outunit,choice,incheck,outcheck,InputSelectedType,OutputSelectedType;
	  
	  int LoopLimit,LoopIterator;
	  
      cout<<"Enter how many times you wan to run Weight converter: \n";
	  
      cin>>LoopLimit;
      
	  
	    
	  
	  if(cin.fail())
      {
		
		cout<<"Invalid Entry Stopping Converter....... \n";
		myfile<<"Invalid Entry Stopping Converter....... \n";
		return 0;
		
		
	}
	
	if(LoopLimit <=0)
	{
		
	cout<<"Invalid Entry Stopping Converter....... \n";
	myfile<<"Invalid Entry Stopping Converter....... \n";
	return 0;	
		
	}
	  
	  
      LoopIterator = 0;
      
      
      while(LoopIterator < LoopLimit){	 
	  
      cout<<"Enter Weight value to convert :\n";
      
      
      //write to file
      myfile<<"Enter Weight value to convert :\n";
      
      cin>>x;
      
      //write to file
      myfile<<x<<endl;
	  
	  if(!cin.fail())
	  {
	  
      
      if(x > 0){
        
    cout<<"Enter input unit \n";
    //write to file
     myfile<<"Enter input unit \n";

	 cout<<"Enter: ton for Tonne \n";
     cout<<"Enter: lb for pounds \n";
     cout<<"Enter: mg for Milligrams \n";
     cout<<"Enter: kg for kilograms \n";
     cout<<"Enter: g for gram \n";
	 
	  //write to file
	 myfile<<"Enter: ton for Tonne \n";
     myfile<<"Enter: lb for pounds \n";
     myfile<<"Enter: mg for Milligrams \n";
     myfile<<"Enter: kg for kilograms \n";
     myfile<<"Enter: g for gram \n";
    
      cin>>inunit;
	  
	  incheck = inunit;
	  
	//Declare weight values
		  
	if(inunit == "ton")
    {
      InputSelectedType = " Tonne";
    }
    else if(inunit == "lb")
    {
        InputSelectedType = " Pounds";
    }
    else if(inunit == "mg")
    {
       InputSelectedType = " Milligrams"; 
    }
    else if(inunit == "kg")
    {
       InputSelectedType = " kilograms"; 
    }
    else if(inunit == "g")
    {
       InputSelectedType = " gram"; 
    }
	  
	  
	  
	  
      //write to file
     myfile<<inunit<<endl;
     
      cout<<"Enter output unit \n";
      //write to file
     myfile<<"Enter output unit \n";
	 
     cout<<"Enter: ton for Tonne \n";
     cout<<"Enter: lb for pounds \n";
     cout<<"Enter: mg for Milligrams \n";
     cout<<"Enter: kg for kilograms \n";
     cout<<"Enter: g for gram \n";
	 
	  //write to file
	 myfile<<"Enter: ton for Tonne \n";
     myfile<<"Enter: lb for pounds \n";
     myfile<<"Enter: mg for Milligrams \n";
     myfile<<"Enter: kg for kilograms \n";
     myfile<<"Enter: g for gram \n";
 
	 
      cin>>outunit;
	  
	  
	  outcheck = outunit;
	  
	    //Declare weight values
	if(outunit == "ton")
    {
      OutputSelectedType = " Tonne";
    }
    else if(outunit == "lb")
    {
        OutputSelectedType = " Pounds";
    }
    else if(outunit == "mg")
    {
       OutputSelectedType = " Milligrams"; 
    }
    else if(outunit == "kg")
    {
       OutputSelectedType = " kilograms"; 
    }
    else if(outunit == "g")
    {
       OutputSelectedType = " gram"; 
    }
	  
	  
	   if((incheck == "ton" | incheck == "lb" | incheck == "mg" | incheck == "kg" | incheck == "g") && (outcheck == "ton" | outcheck == "lb" | outcheck == "kg" | outcheck == "mg" | outcheck == "g"))
  	 {
		
        //write to file
     myfile<<outunit<<endl;
      
     cout<<"Converting "<<x<<InputSelectedType <<" to "<<OutputSelectedType<<"......\n Answer = ";
      
      //Write conversion type to file
      
      myfile<<"Converting "<<x<<InputSelectedType <<" to "<<OutputSelectedType<<"......\n Answer = ";
      
      
      
      if(inunit == "ton")
      {
        if(outunit == "ton")
        {
			
			y = x;
            cout<<y<<" Tons (t)"<<endl;
            myfile<<y<<" Tons (t)"<<endl;
        }
         
        else if(outunit == "lb")
        {
			y =  x * 2204.62;
           cout<<y<<" lb"<<endl;
             myfile<<y<<" lb"<<endl;
        }
        
         else if(outunit == "mg")
        {
			y = x * 1000000000;
            cout<<y<<" mg"<<endl;
             myfile<<y<<" mg"<<endl;
        }
         
          else if(outunit == "kg")
        {
			 y = x * 1000;
            cout<<y<<" kg"<<endl;
             myfile<<y<<" kg"<<endl;
        }
        
         else if(outunit == "g")
        {
			y = x * 1000000;
			cout<<y<<" g"<<endl;
             myfile<<y<<" g"<<endl;
        }
            
      }
    
    
    
    else if(inunit == "lb")
      {
 if(outunit == "ton")
        {
			
			y = x * 0.000453592;
            cout<<y<<" Tons (t)"<<endl;
            myfile<<y<<" Tons (t)"<<endl;
        }
         
        else if(outunit == "lb")
        {
			y =  x;
           cout<<y<<" lb"<<endl;
             myfile<<y<<" lb"<<endl;
        }
        
         else if(outunit == "mg")
        {
			y = x * 453592;
            cout<<y<<" mg"<<endl;
             myfile<<y<<" mg"<<endl;
        }
         
          else if(outunit == "kg")
        {
			 y = x * 0.453592;
            cout<<y<<" kg"<<endl;
             myfile<<y<<" kg"<<endl;
        }
        
         else if(outunit == "g")
        {
			y = x * 453.592;
			cout<<y<<" g"<<endl;
             myfile<<y<<" g"<<endl;
        }
            
      }
        
    
    
    
   else if(inunit == "mg")
      {
        
		  if(outunit == "ton")
        {
			
			y = x * 0.000000001;
            cout<<y<<" Tons (t)"<<endl;
            myfile<<y<<" Tons (t)"<<endl;
        }
         
        else if(outunit == "lb")
        {
			y =  x * 0.00000220462;
           cout<<y<<" lb"<<endl;
             myfile<<y<<" lb"<<endl;
        }
        
         else if(outunit == "mg")
        {
			y = x;
            cout<<y<<" mg"<<endl;
             myfile<<y<<" mg"<<endl;
        }
         
          else if(outunit == "kg")
        {
			 y = x * 0.000001;
            cout<<y<<" kg"<<endl;
             myfile<<y<<" kg"<<endl;
        }
        
         else if(outunit == "g")
        {
			y = x * 0.001;
			cout<<y<<" g"<<endl;
             myfile<<y<<" g"<<endl;
        }
            
      }
    
    
    
    else if(inunit == "kg")
      {
        
	    if(outunit == "ton")
        {
			
			y = x * 0.001;
            cout<<y<<" Tons (t)"<<endl;
            myfile<<y<<" Tons (t)"<<endl;
        }
         
        else if(outunit == "lb")
        {
			y =  x * 2.20462;
           cout<<y<<" lb"<<endl;
             myfile<<y<<" lb"<<endl;
        }
        
         else if(outunit == "mg")
        {
			y = x * 1000000;
            cout<<y<<" mg"<<endl;
             myfile<<y<<" mg"<<endl;
        }
         
          else if(outunit == "kg")
        {
			 y = x;
            cout<<y<<" kg"<<endl;
             myfile<<y<<" kg"<<endl;
        }
        
         else if(outunit == "g")
        {
			y = x * 1000;
			cout<<y<<" g"<<endl;
             myfile<<y<<" g"<<endl;
        }
	
		
      }
    
    
    
        
    else if(inunit == "g")
      {
           if(outunit == "ton")
        {
			
			y = x * 0.000001;
            cout<<y<<" Tons (t)"<<endl;
            myfile<<y<<" Tons (t)"<<endl;
        }
         
        else if(outunit == "lb")
        {
			y =  x * 0.00220462;
           cout<<y<<" lb"<<endl;
             myfile<<y<<" lb"<<endl;
        }
        
         else if(outunit == "mg")
        {
			y = x * 1000;
            cout<<y<<" mg"<<endl;
             myfile<<y<<" mg"<<endl;
        }
         
          else if(outunit == "kg")
        {
			 y = x * 0.001;
            cout<<y<<" kg"<<endl;
             myfile<<y<<" kg"<<endl;
        }
        
         else if(outunit == "g")
        {
			y = x;
			cout<<y<<" g"<<endl;
             myfile<<y<<" g"<<endl;
        }
		
      }
	  
	  }
	 else{
		
		cout<<"Invalid input or output unit selected \n Stopping Converter \n";
		myfile<<"Invalid input or output unit selected \n Stopping Converter \n";	
		break;
		
		}
	  
	  
	  }
	  
       else if(x <=0 )
      {
          
        cout<<"Invalid value entered \n";
        myfile<<"value to convert must be greater than zero (0)";
    }
        
       
	    cout<<"Do you want to end this converter? \n";
		cout<<"Enter: y for YES | n for NO \n";
		myfile<<"Do you want to end this converter? \n";
		myfile<<"Enter: y for YES | n for NO \n";
		
		cin>>choice;
		
		//write to file
		myfile<<choice<<endl;
		
		if(choice == "y" || choice == "n")
		{
			
		if(choice == "y")
		{
        LoopIterator = LoopLimit;
        }
        else if(choice == "n")
        {
           LoopIterator++; 
        }
			
		}
		else if(choice != "y" || choice != "n")
		{
			cout<<"Invalid Entry stopping converter..... \n";
			myfile<<"Invalid Entry stopping converter..... \n";
			break;
		}
		
		
        }
	else
	  {
		cout<<"You failed to enter the correct value \n";
		cout<<"Stopping converter \n";
		myfile<<"You failed to enter the correct value \n";
		myfile<<"Stopping converter \n";
		break;
		  
	  }

	   
	  }
          myfile<<" \n \n";
          myfile<<" \n \n";
         myfile.close();
        
    }
     
  
  
  
     
	    //Pressure converter function
    
  double PressureConverter()
    {
    
       //open file
        fstream myfile;
        myfile.open("ProjectConverter.txt", ios :: out | ios :: app);   
        
      double x,y;
      string inunit,outunit,choice,incheck,outcheck,InputSelectedType,OutputSelectedType;
	  
	   int LoopLimit,LoopIterator;
	  
      cout<<"Enter how many times you wan to run Pressure converter: \n";
	  myfile<<"Enter how many times you wan to run Pressure converter: \n";
	  
      cin>>LoopLimit;
	  
	  
	  
	  if(cin.fail())
      {
		
		cout<<"Invalid Entry Stopping Converter....... \n";
	    myfile<<"Invalid Entry Stopping Converter....... \n";
		return 0;
		
		
	}
	
	if(LoopLimit <=0)
	{
		
	cout<<"Invalid Entry Stopping Converter....... \n";
	myfile<<"Invalid Entry Stopping Converter....... \n";
	return 0;	
		
	}
	  
      
      LoopIterator = 0;
      
      
      while(LoopIterator < LoopLimit){	  
	  
      cout<<"Enter Pressure value to convert :\n";
      
      
      //write to file
      myfile<<"Enter Pressure value to convert :\n";
      
      cin>>x;
      
      //write to file
      myfile<<x<<endl;

		
	 if(!cin.fail())
	  {
	  
	  if(x > 0){
        
    cout<<"Enter input unit \n";
    //write to file
     myfile<<"Enter input unit \n";

	 cout<<"Enter: pa for Pascal \n";
     cout<<"Enter: psi for pound per square inch \n";
     cout<<"Enter: atm for standard atmosphere \n";
     cout<<"Enter: bar for bar \n";
     cout<<"Enter: torr for Torr \n";
	 
	  //write to file
	 myfile<<"Enter: pa for Pascal \n";
     myfile<<"Enter: psi for pound per square inch \n";
     myfile<<"Enter: atm for standard atmosphere \n";
     myfile<<"Enter: bar for bar \n";
     myfile<<"Enter: torr for Torr \n";
    
      cin>>inunit;
	  
	 incheck = inunit;
	  
	  //Declare currency values
	if(inunit == "pa")
    {
      InputSelectedType = " Pascal";
    }
    else if(inunit == "psi")
    {
        InputSelectedType = " Pound per square inch";
    }
    else if(inunit == "atm")
    {
       InputSelectedType = " Standard atmosphere"; 
    }
    else if(inunit == "bar")
    {
       InputSelectedType = " Bar"; 
    }
    else if(inunit == "torr")
    {
       InputSelectedType = " Torr"; 
    }
	  
	  
	  
	  
	  
      //write to file
     myfile<<inunit<<endl;
     
      cout<<"Enter output unit \n";
      //write to file
     myfile<<"Enter output unit \n";
	 
     cout<<"Enter: pa for Pascal \n";
     cout<<"Enter: psi for pound per square inch \n";
     cout<<"Enter: atm for standard atmosphere \n";
     cout<<"Enter: bar for bar \n";
     cout<<"Enter: torr for Torr \n";
	 
	  //write to file
	 myfile<<"Enter: pa for Pascal \n";
     myfile<<"Enter: psi for pound per square inch \n";
     myfile<<"Enter: atm for standard atmosphere \n";
     myfile<<"Enter: bar for bar \n";
     myfile<<"Enter: torr for Torr \n";
   
	 
      cin>>outunit;
	  
	  outcheck = outunit;
	  
	    //Declare currency values
	if(outunit == "pa")
    {
      OutputSelectedType = " Pascal";
    }
    else if(outunit == "psi")
    {
        OutputSelectedType = " Pound per square inch";
    }
    else if(outunit == "atm")
    {
       OutputSelectedType = " Standard atmosphere"; 
    }
    else if(outunit == "bar")
    {
       OutputSelectedType = " Bar"; 
    }
    else if(outunit == "torr")
    {
       OutputSelectedType = " Torr"; 
    }
	  
	  
	 if((incheck == "torr" | incheck == "bar" | incheck == "atm" | incheck == "psi" | incheck == "pa") && (outcheck == "torr" | outcheck == "bar" | outcheck == "atm" | outcheck == "psi" | outcheck == "pa"))
  	 {
		 
	  
        //write to file
     myfile<<outunit<<endl;
      
       cout<<"Converting "<<x<<InputSelectedType <<" to "<<OutputSelectedType<<"......\n Answer = ";
      
      //Write conversion type to file
      
      myfile<<"Converting "<<x<<InputSelectedType <<" to "<<OutputSelectedType<<"......\n Answer = ";
      
      
      
      if(inunit == "pa")
      {
        if(outunit == "pa")
        {
			
			y = x;
            cout<<y<<" Pa"<<endl;
            myfile<<y<<" Pa"<<endl;
        }
         
        else if(outunit == "psi")
        {
			y =  x * 0.000145038;
           cout<<y<<" psi"<<endl;
             myfile<<y<<" psi"<<endl;
        }
        
         else if(outunit == "atm")
        {
			y = x * 0.0000098692;
            cout<<y<<" atm"<<endl;
             myfile<<y<<" atm"<<endl;
        }
         
          else if(outunit == "bar")
        {
			 y = x * 0.00001;
            cout<<y<<" bar"<<endl;
             myfile<<y<<" bar"<<endl;
        }
        
         else if(outunit == "torr")
        {
			y = x * 0.0075006;
			cout<<y<<" Torr"<<endl;
             myfile<<y<<" Torr"<<endl;
        }
            
      }
    
    
    
    else if(inunit == "psi")
      {
           if(outunit == "pa")
        {
			
			y = x * 6894.757;
            cout<<y<<" Pa"<<endl;
            myfile<<y<<" Pa"<<endl;
        }
         
        else if(outunit == "psi")
        {
			y = x;
           cout<<y<<" psi"<<endl;
             myfile<<y<<" psi"<<endl;
        }
        
         else if(outunit == "atm")
        {
			y = x * 0.068046;
            cout<<y<<" atm"<<endl;
             myfile<<y<<" atm"<<endl;
        }
         
          else if(outunit == "bar")
        {
			 y = x * 0.068948;
            cout<<y<<" bar"<<endl;
             myfile<<y<<" bar"<<endl;
        }
        
         else if(outunit == "torr")
        {
			y = x * 51.715;
			cout<<y<<" Torr"<<endl;
             myfile<<y<<" Torr"<<endl;
        }
           
            
      }
        
    
    
    
   else if(inunit == "atm")
      {
        
		    if(outunit == "pa")
        {
			
			y = x * 101325.0;
            cout<<y<<" Pa"<<endl;
            myfile<<y<<" Pa"<<endl;
        }
         
        else if(outunit == "psi")
        {
			y = x * 14.696;
           cout<<y<<" psi"<<endl;
             myfile<<y<<" psi"<<endl;
        }
        
         else if(outunit == "atm")
        {
			y = x;
            cout<<y<<" atm"<<endl;
             myfile<<y<<" atm"<<endl;
        }
         
          else if(outunit == "bar")
        {
			 y = x * 1.011325;
            cout<<y<<" bar"<<endl;
             myfile<<y<<" bar"<<endl;
        }
        
         else if(outunit == "torr")
        {
			y = x * 760.0;
			cout<<y<<" Torr"<<endl;
             myfile<<y<<" Torr"<<endl;
        }
           
            
      }
    
    
    
    else if(inunit == "bar")
      {
        
	     if(outunit == "pa")
        {
			
			y = x * 100000.0;
            cout<<y<<" Pa"<<endl;
            myfile<<y<<" Pa"<<endl;
        }
         
        else if(outunit == "psi")
        {
			y = x * 14.5037744;
           cout<<y<<" psi"<<endl;
             myfile<<y<<" psi"<<endl;
        }
        
         else if(outunit == "atm")
        {
			y = x * 0.98692;
            cout<<y<<" atm"<<endl;
             myfile<<y<<" atm"<<endl;
        }
         
          else if(outunit == "bar")
        {
			 y = x;
            cout<<y<<" bar"<<endl;
             myfile<<y<<" bar"<<endl;
        }
        
         else if(outunit == "torr")
        {
			y = x * 750.06;
			cout<<y<<" Torr"<<endl;
             myfile<<y<<" Torr"<<endl;
        }
           
	
		
      }
    
    
    
        
    else if(inunit == "torr")
      {
            if(outunit == "pa")
        {
			
			y = x * 133.322;
            cout<<y<<" Pa"<<endl;
            myfile<<y<<" Pa"<<endl;
        }
         
        else if(outunit == "psi")
        {
			y = x * 0.019337;
           cout<<y<<" psi"<<endl;
             myfile<<y<<" psi"<<endl;
        }
        
         else if(outunit == "atm")
        {
			y = x * 0.0013158;
            cout<<y<<" atm"<<endl;
             myfile<<y<<" atm"<<endl;
        }
         
          else if(outunit == "bar")
        {
			 y = x * 0.0013332;
            cout<<y<<" bar"<<endl;
             myfile<<y<<" bar"<<endl;
        }
        
         else if(outunit == "torr")
        {
			y = x;
			cout<<y<<" Torr"<<endl;
             myfile<<y<<" Torr"<<endl;
        }
           
		
      }
     
	  }
	 else{
		
		cout<<"Invalid input or output unit selected \n Stopping Converter \n";
		myfile<<"Invalid input or output unit selected \n Stopping Converter \n";	
		break;
		
		}
    
	   
	    }
	  
       else if(x <=0 )
      {
          
        cout<<"Invalid value entered \n Value to convert must be greater than zero (0) \n";
          myfile<<"Invalid value entered \n Value to convert must be greater than zero (0) \n";
          break;
    	}

	   	cout<<"Do you want to end this converter? \n";
		cout<<"Enter: y for YES | n for NO \n";
		
		//write to file
		myfile<<"Do you want to end this converter? \n";
		myfile<<"Enter: y for YES | n for NO \n";
		
		cin>>choice;
		
		//write to file
		myfile<<choice<<endl;
		
		if(choice == "y" || choice == "n")
		{
			
		if(choice == "y")
		{
        LoopIterator = LoopLimit;
        }
        else if(choice == "n")
        {
           LoopIterator++; 
        }
			
		}
		else if(choice != "y" || choice != "n")
		{
			cout<<"Invalid Entry stopping converter..... \n";
			myfile<<"Invalid Entry stopping converter..... \n";
			break;
		} 
		  
	  }
	else
	  {
		cout<<"You failed to enter the correct value \n";
		cout<<"Stopping converter \n";
		myfile<<"You failed to enter the correct value \n";
		myfile<<"Stopping converter \n";
		break;
		  
	  }
	   
	   
    }   
	
	
        myfile<<" \n \n";
          myfile<<" \n \n";
         myfile.close();
        
    }
    
    
    
    
 double CurrencyConverter()
    {
    
      //open file
        fstream myfile;
        myfile.open("ProjectConverter.txt", ios :: out | ios :: app); 
        
        
      double x,y;
      string inunit,outunit,choice,incheck,outcheck,InputSelectedType,OutputSelectedType;
	  
	  int LoopLimit,LoopIterator;
	  
      cout<<"Enter how many times you want to run Currency converter: \n";
	  
      cin>>LoopLimit;
      
      if(cin.fail())
      {
		
		cout<<"Invalid Entry Stopping Converter....... \n";
	
		return 0;
		
		
	}
	
	if(LoopLimit <=0)
	{
		
	cout<<"Invalid Entry Stopping Converter....... \n";
	
	return 0;	
		
	}
      
      LoopIterator = 0;
      
      
      while(LoopIterator < LoopLimit){	 
	  
      cout<<"Enter Currency value to convert :\n";
      
      
      //write to file
      myfile<<"Enter Currency value to convert :\n";
      
      cin>>x;
      
      //write to file
      myfile<<x<<endl;
      
	  if(cin.fail())
	  {
		  cout<<"You failed to enter the correct value \n";
		  cout<<"Stopping converter \n";
		  
		 //LoopIterator = LoopLimit+1;
		 break;
		
		  
	  }
	  else if(!cin.fail())
	  {
		  
		   if(x > 0){
        
    cout<<"Enter input unit \n";
    //write to file
     myfile<<"Enter input unit \n";

	 cout<<"Enter: p for British Pound\n";
	 cout<<"Enter: e for Euro \n";
	 cout<<"Enter: yen for Japanese Yen \n";
	 cout<<"Enter: usd for USA Dollar \n";
	 cout<<"Enter: n for Naira \n";
	
		  //write to file
	 myfile<<"Enter: p for British Pound\n";
	 myfile<<"Enter: e for Euro \n";
	 myfile<<"Enter: yen for Japanese Yen \n";
	 myfile<<"Enter: usd for USA Dollar \n";
	 myfile<<"Enter: n for Naira \n";

	
	 	
    cin>>inunit;
    
    incheck = inunit;
    
    
	//Declare currency values
	if(inunit == "p")
    {
      InputSelectedType = " British Pound";
    }
    else if(inunit == "e")
    {
        InputSelectedType = " Euro";
    }
    else if(inunit == "yen")
    {
       InputSelectedType = " Japanese Yen"; 
    }
    else if(inunit == "usd")
    {
       InputSelectedType = " US Dollar"; 
    }
    else if(inunit == "n")
    {
       InputSelectedType = " Naira"; 
    }
	
	
         //write to file
     myfile<<inunit<<endl;
     
      cout<<"Enter output unit \n";
      //write to file
     myfile<<"Enter output unit \n";
	 
     cout<<"Enter: p for British Pound\n";
	 cout<<"Enter: e for Euro \n";
	 cout<<"Enter: yen for Japanese Yen \n";
	 cout<<"Enter: usd for USA Dollar \n";
	 cout<<"Enter: n for Naira \n";
	
		  //write to file
	 myfile<<"Enter: p for British Pound\n";
	 myfile<<"Enter: e for Euro \n";
	 myfile<<"Enter: yen for Japanese Yen \n";
	 myfile<<"Enter: usd for USA Dollar \n";
	 myfile<<"Enter: n for Naira \n";

 
	
	 
      cin>>outunit;
  
    outcheck = outunit;
  
  
  	
  	 //checker condition
  	 
  	 
  	 if((incheck == "p" | incheck == "e" | incheck == "yen" | incheck == "usd" | incheck == "n") && (outcheck == "p" | outcheck == "e" | outcheck == "yen" | outcheck == "usd" | outcheck == "n"))
  	 {
			 

	  if(outunit == "p")
    {
      OutputSelectedType = " British Pound";
    }
    else if(outunit == "e")
    {
        OutputSelectedType = " Euro";
    }
    else if(outunit == "yen")
    {
       OutputSelectedType = " Japanese Yen"; 
    }
    else if(outunit == "usd")
    {
       OutputSelectedType = " US Dollar"; 
    }
    else if(outunit == "n")
    {
       OutputSelectedType = " Naira"; 
    }
		
        //write to file
     myfile<<outunit<<endl;
      
      cout<<"Converting "<<x<<InputSelectedType <<" to "<<OutputSelectedType<<"......\n Answer = ";
      
      //Write conversion type to file
      
      myfile<<"Converting "<<x<<InputSelectedType <<" to "<<OutputSelectedType<<"......\n Answer = ";
      
      
      if(inunit == "usd")
      {
        if(outunit == "usd")
        {
			
			y = x;
            cout<<y<<" USD"<<endl;
            myfile<<y<<" USD"<<endl;
        }
         
        else if(outunit == "p")
        {
			y =  x * 0.726726;
           cout<<y<<" GBP"<<endl;
             myfile<<y<<" GBP"<<endl;
        }
        
         else if(outunit == "e")
        {
			y = x * 0.828507;
            cout<<y<<" EURO"<<endl;
             myfile<<y<<" EURO"<<endl;
        }
         
          else if(outunit == "yen")
        {
			 y = x * 109.335;
            cout<<y<<" JPY"<<endl;
             myfile<<y<<" JPY"<<endl;
        }
        
         else if(outunit == "n")
        {
			y = x * 359.478;
			cout<<y<<" Naira"<<endl;
             myfile<<y<<" Naira"<<endl;
        }
		
		
            
      }
    
    
    
    else if(inunit == "p")
      {
 
		
		if(outunit == "usd")
        {
			
			y = x * 1.37603;
            cout<<y<<" USD"<<endl;
            myfile<<y<<" USD"<<endl;
        }
         
        else if(outunit == "p")
        {
			y =  x;
           cout<<y<<" GBP"<<endl;
             myfile<<y<<" GBP"<<endl;
        }
        
         else if(outunit == "e")
        {
			y = x * 1.13883;
            cout<<y<<" EURO"<<endl;
             myfile<<y<<" EURO"<<endl;
        }
         
          else if(outunit == "yen")
        {
			 y = x * 150.467;
            cout<<y<<" JPY"<<endl;
             myfile<<y<<" JPY"<<endl;
        }
        
         else if(outunit == "n")
        {
			y = x * 494.369;
			cout<<y<<" Naira"<<endl;
             myfile<<y<<" Naira"<<endl;
        }
		
 
      }
        
    
    
    
   else if(inunit == "e")
      {
        
		if(outunit == "usd")
        {
			
			y = x * 1.20699;
            cout<<y<<" USD"<<endl;
            myfile<<y<<" USD"<<endl;
        }
         
        else if(outunit == "p")
        {
			y =  x * 0.878097;
           cout<<y<<" GBP"<<endl;
             myfile<<y<<" GBP"<<endl;
        }
        
         else if(outunit == "e")
        {
			y = x;
            cout<<y<<" EURO"<<endl;
             myfile<<y<<" EURO"<<endl;
        }
         
          else if(outunit == "yen")
        {
			 y = x * 132.039;
            cout<<y<<" JPY"<<endl;
             myfile<<y<<" JPY"<<endl;
        }
        
         else if(outunit == "n")
        {
			y = x * 434.092;
			cout<<y<<" Naira"<<endl;
             myfile<<y<<" Naira"<<endl;
        }
		
            
      }
    
    
    
    else if(inunit == "yen")
      {
        
	    if(outunit == "usd")
        {
			
			y = x * 0.00914622;
            cout<<y<<" USD"<<endl;
            myfile<<y<<" USD"<<endl;
        }
         
        else if(outunit == "p")
        {
			y =  x * 0.0066;
           cout<<y<<" GBP"<<endl;
             myfile<<y<<" GBP"<<endl;
        }
        
         else if(outunit == "e")
        {
			y = x * 0.0076;
            cout<<y<<" EURO"<<endl;
             myfile<<y<<" EURO"<<endl;
        }
         
          else if(outunit == "yen")
        {
			 y = x;
            cout<<y<<" JPY"<<endl;
             myfile<<y<<" JPY"<<endl;
        }
        
         else if(outunit == "n")
        {
			y = x * 3.28627;
			cout<<y<<" Naira"<<endl;
             myfile<<y<<" Naira"<<endl;
        }
		
		
      }
    
    
    
        
    else if(inunit == "n")
      {
          
		  if(outunit == "usd")
        {
			
			y = x * 0.0027818;
            cout<<y<<" USD"<<endl;
            myfile<<y<<" USD"<<endl;
        }
         
        else if(outunit == "p")
        {
			y =  x * 0.00202139;
           cout<<y<<" GBP"<<endl;
             myfile<<y<<" GBP"<<endl;
        }
        
         else if(outunit == "e")
        {
			y = x * 0.0023066;
            cout<<y<<" EURO"<<endl;
             myfile<<y<<" EURO"<<endl;
        }
         
          else if(outunit == "yen")
        {
			 y = x * 0.3042896;
            cout<<y<<" JPY"<<endl;
             myfile<<y<<" JPY"<<endl;
        }
        
         else if(outunit == "n")
        {
			y = x;
			cout<<y<<" Naira"<<endl;
             myfile<<y<<" Naira"<<endl;
        }
		  
		  
      }
	  	
			
	 }
	 else{
		
		cout<<"Invalid input or output unit selected \n Stopping Converter \n";	
		myfile<<"Invalid input or output unit selected \n Stopping Converter \n";
		break;
		
		}
  	 
  	 
  
 
	  }
	  
       else if(x <=0 )
      {
          
          cout<<"Invalid value entered \n value to convert must be greater than zero (0) \n";
          myfile<<"Invalid value entered \n value to convert must be greater than zero (0) \n";
          break;
    	}
       
		
		cout<<"Do you want to end this converter? \n";
		cout<<"Enter: y for YES | n for NO \n";
		
		myfile<<"Do you want to end this converter? \n";
		myfile<<"Enter: y for YES | n for NO \n";
		
		cin>>choice;
		
		//write to file
		myfile<<choice<<endl;
		
		if(choice == "y" || choice == "n")
		{
			
		if(choice == "y")
		{
        LoopIterator = LoopLimit;
        }
        else if(choice == "n")
        {
           LoopIterator++; 
        }
			
		}
		else if(choice != "y" || choice != "n")
		{
			cout<<"Invalid Entry stopping converter..... \n";
			myfile<<"Invalid Entry stopping converter..... \n";
			break;
		} 
		  
	  }
		  
	 
		
               
        
    } 
        
        myfile<<" \n \n";
        myfile<<" \n \n";
        myfile.close();
        
    }


	
	

     //MAIN METHOD THAT RUNS ALL OTHER METHODS
    
    int execute()
    {
    char ConversionType;
    string SelectedType;
    cout<<"What conversion do you want to make? \n";
    
    cout<<"Enter: l for Length \n";
    cout<<"Enter: w for Weight \n";
    cout<<"Enter: c for Currency \n";
    cout<<"Enter: t for Temperature \n";
    cout<<"Enter: p for Pressure \n";
    
    cin>>ConversionType;
    
    //Set selectedtype String value;
    if(ConversionType == 'l')
    {
      SelectedType = "Length";
    }
    else if(ConversionType == 'w')
    {
        SelectedType = "Weight";
    }
    else if(ConversionType == 'c')
    {
       SelectedType = "Currency"; 
    }
    else if(ConversionType == 't')
    {
       SelectedType = "Temperature"; 
    }
    else if(ConversionType == 'p')
    {
       SelectedType = "Pressure"; 
    }
    
   else if(ConversionType != 'p' || ConversionType != 't' || ConversionType != 'c' || ConversionType == 'w' || ConversionType == 'l')
    {
        cout<<"Invalid entry stopping converter..... \n";
        
        return 0;
      
       
    }
    
    cout<<"You selected "<<SelectedType<<endl;
    
    //start switch statement
    
    switch(ConversionType){
      
      case 'l': LengthConverter();
                break;
      case 't': TemperatureConverter();
                break;
      case 'p': PressureConverter();
                break;
      case 'w': WeightConverter();
                break;
      case 'c': CurrencyConverter();
                break;
      default: cout<<"Enter a valid conversion type \n";
                
         
        
        }
        
    }
    
    
    
           
           
        int RunProgram(){
            
            int x,y;
            string cmd;
            
            cout<<"Do you want this Software to run till you close the command line? \n";
            cout<<"Enter: y for YES | n for NO \n";
            cin>>cmd;
            
            if(cmd == "y")
            {
                 while(true)
            {
                
              execute();
      
            }
            
            
            }
            
            else if(cmd == "n")
            {
                
            cout<<"Enter Number of times you want to run this Software \n";
            cin>>x;
            
            y = 0;
            
            while(y < x)
            {
                
              execute();
              
                
            y++;    
            }
            
            }
            
            
           
            
        
       else if(cmd != "y" || cmd != "n")
       {
            cout<<"Wrong entry! Stopping Program..... \n";
            
        }
    
    
    }
    
    int main()
    {  
		//STUDENT DETAILS
		
        cout<<"NAME: MUMUNI MOFEHINTOLU OLUSOLAPE \n \n";
        cout<<"COURSE: C++ PROGRAMMING \n \n";
        cout<<"NUMBER: G2017/CITE/MSC/FT/005 \n \n";
        cout<<"PROJECT ON CURRENCY,PRESSURE,TEMPERATURE,WEIGHT, AND LENGTH CONVERTER. \n \n";
        cout<<"USING FIVE CONVERSION UNITS FOR EACH CATEGORY (I.E: CURRENCY,PRESSURE,TEMPERATURE,WEIGHT, AND LENGTH). \n \n";
        cout<<"CENTER FOR INFORMATION AND TELECOMMUNICATIONS ENGINEERING \n \n";
        cout<<"APRIL 2018. \n \n";
      	cout<<"-------------------------------------------------------------------------------- \n";
      	cout<<"-------------------------------------------------------------------------------- \n";
      	cout<<" \n";
      
      //CALL MAIN METHOD TO EXECUTE PROGRAM  
      
        execute();
   
        
    
        return 0;
    }


#include <string>
#include <iostream>
#include <cmath>
#include <fstream>


using namespace std;

 //Length converter function

double LengthConverter()
    {
        
    //open file
        ofstream myfile;
        myfile.open("created_files/LengthConverter.txt");  
        
        
      double x,y;
      string inunit,outunit;
      cout<<"Enter value to convert :\n";
      
      //write to file
      myfile<<"Enter value to convert :\n";
      
      cin>>x;
      
      //write to file
      myfile<<x<<endl;
      
      if(x>0){
        
    cout<<"Enter input unit \n";
    //write to file
     myfile<<"Enter input unit \n";
     
    cout<<"Enter: km for Kilometer , m for Meter, dm for Decimeter, cm for Centimeter, mm for Millimeter \n";
    
    myfile<<"Enter: km for Kilometer , m for Meter, dm for Decimeter, cm for Centimeter, mm for Millimeter \n";
    
      cin>>inunit;
      //write to file
     myfile<<inunit<<endl;
     
      cout<<"Enter output unit \n";
      //write to file
     myfile<<"Enter output unit \n";
     
     cout<<"Enter: km for Kilometer , m for Meter, dm for Decimeter, cm for Centimeter, mm for Millimeter \n";
     
     myfile<<"Enter: km for Kilometer , m for Meter, dm for Decimeter, cm for Centimeter, mm for Millimeter \n";
     
      cin>>outunit;
        //write to file
     myfile<<outunit<<endl;
      
      cout<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = "<<endl;
      
      //Write conversion type to file
      
      myfile<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = ";
      
      
      if(inunit == "mm")
      {
        if(outunit == "mm")
        {
            y = x;
            cout<<"y = "<<y<<" mm"<<endl;
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
            
      else if(x <=0 )
      {
          
        cout<<"Invalid value entered";
          myfile<<"value to convert must be greater than zero (0)";
    }
        
 
        myfile.close();
        
    }
    
    
    
    
    //Temperature converter function
    
    double TemperatureConverter()
    {
    
      //open file
        ofstream myfile;
        myfile.open("created_files/TemperatureConverter.txt");  
        
      double x,y;
      string inunit,outunit;
      cout<<"Enter Temperature value to convert :\n";
      
      
      //write to file
      myfile<<"Enter Temperature value to convert :\n";
      
      cin>>x;
      
      //write to file
      myfile<<x<<endl;
      
        
    cout<<"Enter input unit \n";
    //write to file
     myfile<<"Enter input unit \n";

	 cout<<"Enter: f for Fahrenheit , k for Kelvin, r for Rankine, de for Delisle, c for Celsius \n";
	 
	 //write to file
    myfile<<"Enter: f for Fahrenheit , k for Kelvin, r for Rankine, de for Delisle, c for Celsius \n";
    
      cin>>inunit;
      //write to file
     myfile<<inunit<<endl;
     
      cout<<"Enter output unit \n";
      //write to file
     myfile<<"Enter output unit \n";
	 
     cout<<"Enter: f for Fahrenheit , k for Kelvin, r for Rankine, de for Delisle, c for Celsius \n";
	 
	  //write to file
    myfile<<"Enter: f for Fahrenheit , k for Kelvin, r for Rankine, de for Delisle, c for Celsius \n";
	 
      cin>>outunit;
        //write to file
     myfile<<outunit<<endl;
      
      cout<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = "<<endl;
      
      //Write conversion type to file
      
      myfile<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = ";
      
      
      if(inunit == "f")
      {
        if(outunit == "k")
        {
			
			y = (x + 459.67) * (5.0/9.0);
            cout<<y<<" K"<<endl;
            myfile<<y<<" K"<<endl;
        }
         
        else if(outunit == "r")
        {
			y =  x + 459.67;
           cout<<y<<" °R"<<endl;
             myfile<<y<<" °R"<<endl;
        }
        
         else if(outunit == "de")
        {
			y = (212.0 - x) * (5.0/6.0);
            cout<<y<<" °De"<<endl;
             myfile<<y<<" °De"<<endl;
        }
         
          else if(outunit == "c")
        {
			 y = (x - 32.0) * (5.0/9.0);
            cout<<y<<" °C"<<endl;
             myfile<<y<<" °C"<<endl;
        }
        
         else if(outunit == "f")
        {
			y = x;
			cout<<y<<" °F"<<endl;
             myfile<<y<<" °F"<<endl;
        }
            
      }
    
    
    
    else if(inunit == "c")
      {
        if(outunit == "k")
        {
			y = x + 273.15;
            cout<<y<<" K"<<endl;
            myfile<<y<<" K"<<endl;
        }
         
        else if(outunit == "r")
        {
			y = (x + 273.15)*(9.0/5.0);
           cout<<y<<" °R"<<endl;
             myfile<<y<<" °R"<<endl;
        }
        
         else if(outunit == "de")
        {
			y = (100.0 - x) * (3.0/2.0);
            cout<<y<<" °De"<<endl;
             myfile<<y<<" °De"<<endl;
        }
         
          else if(outunit == "c")
        {
			  y = x;
            cout<<y<<" °C"<<endl;
             myfile<<y<<" °C"<<endl;
        }
        
         else if(outunit == "f")
        {
          y = x * (9.0/5.0) + 32.0;
		   cout<<y<<" °F"<<endl;
             myfile<<y<<" °F"<<endl;
        }
            
            
      }
        
    
    
    
   else if(inunit == "de")
      {
        
		if(outunit == "k")
        {
			y = 373.15 - (x * (2.0/3.0));
            cout<<y<<" K"<<endl;
            myfile<<y<<" K"<<endl;
        }
         
        else if(outunit == "r")
        {
			y = 671.67 - (x * (6.0/5.0));
           cout<<y<<" °R"<<endl;
             myfile<<y<<" °R"<<endl;
        }
        
         else if(outunit == "de")
        {
			  y = x;
            cout<<y<<" °De"<<endl;
             myfile<<y<<" °De"<<endl;
        }
         
          else if(outunit == "c")
        {
			y = 100.0 - (x*(2.0/3.0));
            cout<<y<<" °C"<<endl;
             myfile<<y<<" °C"<<endl;
        }
        
         else if(outunit == "f")
        {
			y = 212.0 - (x*(6.0/5.0));
		   cout<<y<<" °F"<<endl;
             myfile<<y<<" °F"<<endl;
        }
            
		
            
      }
    
    
    
    else if(inunit == "r")
      {
        
		
		
		if(outunit == "k")
        {
			y = x * (5.0/9.0);
            cout<<y<<" K"<<endl;
            myfile<<y<<" K"<<endl;
        }
         
        else if(outunit == "r")
        {
			
			 y = x;
           cout<<y<<" °R"<<endl;
             myfile<<y<<" °R"<<endl;
        }
        
         else if(outunit == "de")
        {
			y = (671.67 - x) * (5.0/6.0);
            cout<<y<<" °De"<<endl;
             myfile<<y<<" °De"<<endl;
        }
         
          else if(outunit == "c")
        {
			y = (x - 491.67) * (5.0/9.0);
            cout<<y<<" °C"<<endl;
             myfile<<y<<" °C"<<endl;
        }
        
         else if(outunit == "f")
        {
         
			y = x - 459.67;
		   cout<<y<<" °F"<<endl;
             myfile<<y<<" °F"<<endl;
        }
            
		
		
      }
    
    
    
        
    else if(inunit == "k")
      {
        
		
		
		if(outunit == "k")
        {
			
			 y = x;
            cout<<y<<" K"<<endl;
            myfile<<y<<" K"<<endl;
        }
         
        else if(outunit == "r")
        {
			y = x * (9.0/5.0);
			
           cout<<y<<" °R"<<endl;
             myfile<<y<<" °R"<<endl;
        }
        
         else if(outunit == "de")
        {
			 y = (373.15 - x) * (3.0/2.0);
            cout<<y<<" °De"<<endl;
             myfile<<y<<" °De"<<endl;
        }
         
          else if(outunit == "c")
        {
			y = x - 273.15;
            cout<<y<<" °C"<<endl;
             myfile<<y<<" °C"<<endl;
        }
        
         else if(outunit == "f")
        {
			y = x * (9.0/5.0) - 459.67;
		   cout<<y<<" °F"<<endl;
             myfile<<y<<" °F"<<endl;
        }
		
		
      }
        
            
          
         myfile.close();
        
    }
    
    
    
    
    //Pressure converter function
    
    double PressureConverter()
    {
    
      //open file
        ofstream myfile;
        myfile.open("created_files/PressureConverter.txt");  
        
      double x,y;
      string inunit,outunit;
      cout<<"Enter Pressure value to convert :\n";
      
      
      //write to file
      myfile<<"Enter Pressure value to convert :\n";
      
      cin>>x;
      
      //write to file
      myfile<<x<<endl;
      
        
    cout<<"Enter input unit \n";
    //write to file
     myfile<<"Enter input unit \n";

	 cout<<"Enter: pa for Pascal , psi for pound per square inch, atm for standard atmosphere, bar for bar, torr for Torr \n";
	 
	 //write to file
    myfile<<"Enter: pa for Pascal , psi for pound per square inch, atm for standard atmosphere, bar for bar, torr for Torr \n";
    
      cin>>inunit;
      //write to file
     myfile<<inunit<<endl;
     
      cout<<"Enter output unit \n";
      //write to file
     myfile<<"Enter output unit \n";
	 
     cout<<"Enter: pa for Pascal , psi for pound per square inch, atm for standard atmosphere, bar for bar, torr for Torr \n";
	 
	  //write to file
    myfile<<"Enter: pa for Pascal , psi for pound per square inch, atm for standard atmosphere, bar for bar, torr for Torr \n";
	 
      cin>>outunit;
        //write to file
     myfile<<outunit<<endl;
      
      cout<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = "<<endl;
      
      //Write conversion type to file
      
      myfile<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = ";
      
      
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
			y =  x * 0.000145;
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
			
			y = x * 6895.0;
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
			 y = 0.0013332;
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
        
            
          
         myfile.close();
        
    }
    
    
    
    
    
    
     //Weight Converter function
    
    double WeightConverter()
    {
    
      //open file
        ofstream myfile;
        myfile.open("created_files/WeightConverter.txt");  
        
      double x,y;
      string inunit,outunit;
      cout<<"Enter Weight value to convert :\n";
      
      
      //write to file
      myfile<<"Enter Weight value to convert :\n";
      
      cin>>x;
      
      //write to file
      myfile<<x<<endl;
      
        
    cout<<"Enter input unit \n";
    //write to file
     myfile<<"Enter input unit \n";

	 cout<<"Enter: ton for Tonne , lb for pounds, mg for milligrams, kg for kilograms, g for gram \n";
	 
	 //write to file
    myfile<<"Enter: ton for Tonne , lb for pounds, mg for milligrams, kg for kilograms, g for gram \n";
    
      cin>>inunit;
      //write to file
     myfile<<inunit<<endl;
     
      cout<<"Enter output unit \n";
      //write to file
     myfile<<"Enter output unit \n";
	 
     cout<<"Enter: ton for Tonne , lb for pounds, mg for milligrams, kg for kilograms, g for gram \n";
	 
	  //write to file
    myfile<<"Enter: ton for Tonne , lb for pounds, mg for milligrams, kg for kilograms, g for gram \n";
	 
      cin>>outunit;
        //write to file
     myfile<<outunit<<endl;
      
      cout<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = "<<endl;
      
      //Write conversion type to file
      
      myfile<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = ";
      
      
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
        
            
          
         myfile.close();
        
    }
    
    
    
    
    
    
      //Currency Converter function
    
    double CurrencyConverter()
    {
    
      //open file
        ofstream myfile;
        myfile.open("created_files/CurrencyConverter.txt");  
        
      double x,y;
      string inunit,outunit;
      cout<<"Enter Currency value to convert :\n";
      
      
      //write to file
      myfile<<"Enter Currency value to convert :\n";
      
      cin>>x;
      
      //write to file
      myfile<<x<<endl;
      
        
    cout<<"Enter input unit \n";
    //write to file
     myfile<<"Enter input unit \n";

	 cout<<"Enter: p for British Pound , e for Euro, yen for Japanese Yen, usd for USA Dollar, n for Naira \n";
	 
	 //write to file
    myfile<<"Enter: p for British Pound , e for Euro, yen for Japanese Yen, usd for USA Dollar, n for Naira \n";
    
      cin>>inunit;
      //write to file
     myfile<<inunit<<endl;
     
      cout<<"Enter output unit \n";
      //write to file
     myfile<<"Enter output unit \n";
	 
     cout<<"Enter: p for British Pound , e for Euro, yen for Japanese Yen, usd for USA Dollar, n for Naira \n";
	 
	  //write to file
    myfile<<"Enter: p for British Pound , e for Euro, yen for Japanese Yen, usd for USA Dollar, n for Naira \n";
	 
      cin>>outunit;
        //write to file
     myfile<<outunit<<endl;
      
      cout<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = "<<endl;
      
      //Write conversion type to file
      
      myfile<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = ";
      
      
      if(inunit == "usd")
      {
        if(outunit == "usd")
        {
			
			y = x;
            cout<<y<<" USD"<<endl;
            myfile<<y<<" USD"<<endl;
        }
         
        else if(outunit == "P")
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
         
        else if(outunit == "P")
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
         
        else if(outunit == "P")
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
         
        else if(outunit == "P")
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
         
        else if(outunit == "P")
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
        
            
          
         myfile.close();
        
    }
    
    
    
    
    
    
    int execute()
    {
    char ConversionType;
    string SelectedType;
    cout<<"What conversion do you want to make?\n";
    
    cout<<"Enter: l for Length, w for Weight, c for Currency, t for Temperature, p for Pressure \n";
    
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
    
    
    
           //MAIN METHOD THAT RUNS ALL OTHER METHODS
           
        int RunProgram(){
            
            int x,y;
            
                        
            cout<<"Enter Number of times you want to run the program \n";
            cin>>x;
            
            y = 0;
            
            while(y < x)
            {
                
              execute();
              
                
            y++;    
            }
            
           
            }
        
    
    
    
    
    int main()
    { //ofstream myfile;
    
     //myfile.open("created_files/TemperatureConverter.txt");  
    
        RunProgram();
        
        // myfile.close;
        //LengthConverter();
        return 0;
    }

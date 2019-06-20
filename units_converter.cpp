
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

//UNITS CONVERTER

double unitsConverter()
    {
      double x,y;
      string inunit,outunit;
      cout<<"Enter value to convert :\n";  
      cin>>x;
      
      if(x>0){
            
    cout<<"Enter input unit \n";
      cin>>inunit;
      cout<<"Enter output unit \n";
      cin>>outunit;
      
      cout<<"Converting "<<x<<inunit <<" to "<<outunit<<"......\n Answer = "<<endl;
      
      
      if(inunit == "mm")
      {
        if(outunit == "mm")
        {
            y = x;
            cout<<"y = "<<y<<" mm";
        }
         
        else if(outunit == "cm")
        {
            y = x/10.0;
             cout<<"y = "<<y<<" cm";
        }
        
         else if(outunit == "dm")
        {
            y = x/100.0;
             cout<<"y = "<<y<<" dm";
        }
         
          else if(outunit == "m")
        {
            y = x/1000.0;
             cout<<"y = "<<y<<" m";
        }
        
         else if(outunit == "km")
        {
            y = x/1000000.0;
             cout<<"y = "<<y<<" km";
        }
            
      }
    
    
    
    else if(inunit == "cm")
      {
          if(outunit == "mm")
        {
            y = x*10.0;
            cout<<"y = "<<y<<" mm";
        }
         
        else if(outunit == "cm")
        {
            y = x;
             cout<<"y = "<<y<<" cm";
        }
        
         else if(outunit == "dm")
        {
            y = x/10.0;
             cout<<"y = "<<y<<" dm";
        }
         
          else if(outunit == "m")
        {
            y = x/100.0;
             cout<<"y = "<<y<<" m";
        }
        
         else if(outunit == "km")
        {
            y = x/100000.0;
             cout<<"y = "<<y<<" km";
        }
            
      }
        
    
    
    
   else if(inunit == "dm")
      {
          if(outunit == "mm")
        {
            y = x * 100;
            cout<<"y = "<<y<<" mm";
        }
         
        else if(outunit == "cm")
        {
            y = x * 10.0;
             cout<<"y = "<<y<<" cm";
        }
        
         else if(outunit == "dm")
        {
            y = x;
             cout<<"y = "<<y<<" dm";
        }
         
          else if(outunit == "m")
        {
            y = x/10.0;
             cout<<"y = "<<y<<" m";
        }
        
         else if(outunit == "km")
        {
            y = x/10000.0;
             cout<<"y = "<<y<<" km";
        }
            
      }
    
    
    
    else if(inunit == "m")
      {
          if(outunit == "mm")
        {
            y = x *1000.0;
            cout<<"y = "<<y<<" mm";
        }
         
        else if(outunit == "cm")
        {
            y = x * 100;
             cout<<"y = "<<y<<" cm";
        }
        
         else if(outunit == "dm")
        {
            y = x * 10;
             cout<<"y = "<<y<<" dm";
        }
         
          else if(outunit == "m")
        {
            y = x;
            
             cout<<"y = "<<y<<" m";
        }
        
         else if(outunit == "km")
        {
            y = x/1000;
             cout<<"y = "<<y<<" km";
        }
            
      }
    
    
    
        
    else if(inunit == "km")
      {
        
          if(outunit == "mm")
        {
            y = x * 1000000.0;
            cout<<"y = "<<y<<" mm";
        }
         
        else if(outunit == "cm")
        {
            y = x * 100000.0;
             cout<<"y = "<<y<<" cm";
        }
        
         else if(outunit == "dm")
        {
            y = x * 10000.0;
             cout<<"y = "<<y<<" dm";
        }
         
          else if(outunit == "m")
        {
            y = x * 1000;
             cout<<"y = "<<y<<" m";
        }
        
         else if(outunit == "km")
        {
            y = x;
             cout<<"y = "<<y<<" km";
        }
      }
        
            
        }
            
      else if(x <=0 )
      {
        cout<<"Invalid value entered";
    }
        
        
        
        
    }
    
    
    
    
    
    int main()
    {
        unitsConverter();
        return 0;
    }

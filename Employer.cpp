#include "Employer.h"

void Employer::setID(int X)
{
	ID = X;
}
void Employer::setName(char myname[])
{
	for (int i = 0; i < 21; i++)
	{
		name[i] = myname[i];
	}
}

void Employer::setSalary(float x)
{
	salary = x;
}

void Employer::setHours(int x)
{
	hours = x;
}

void Employer::setTotal(float x)
{
	total = x;
}

float Employer::totalSalary()
{
    float p = 0; 
    if(total<1000) //if s smaller than 1000 
    {           
        p+=(total*0.1);
    }   
    if(total>=1000)
    {
        p+=100; 
    }
    
    if(total>=1000 && total<=2000) // if  1000 < s < 2000 
    {
        int x = (total-1000);
        p+=(x*0.15);
    }
    
    if(total>2000)
    {
        p+=(1000*0.15);
    }
    
    //////
    
    if(total>=2000 && total<=4000) // if     1000 < s < 2000 
    {
        int y = (total-2000);
        p+=(y*0.2);
    }
    
    if(total>4000)
    {
        p+=(2000*0.2);
    }
    
    ///
    
    if(total>=4000 && total<=5000) // if     1000 < s < 2000 
    {
        int z = (total-4000);
        p+=(z*0.3);
    }
    
    if(total>5000)
    {
        p+=(1000*0.3);
        int w = (total-5000);
        p+= (w*0.4);
    }
    p += hours * salary;
; 
    return p;

}


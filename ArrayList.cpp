#include "ArrayList.h"
#include <iostream>
using namespace std ;

ArrayList::ArrayList(int maxSize)
{
    cout << "construtor " << endl;
    this -> maxSize = maxSize;

    curSize = 0;

    L = new int [this ->maxSize];
}

ArrayList::~ArrayList()
{
    delete [] L;
}

int ArrayList::size()
{
   
    return this -> curSize;
}

int ArrayList::indexOf(int e)
{
    for(int i = 0; i< curSize ; i ++)
    {
        if (e == L[i])
        {
            cout<< "Position ["<< i <<"]is "<<e;
        }
    }
    return 0;
}

int ArrayList::get(int i)
{
    
    if ( i > this -> curSize)
    {
        cerr << "Error! data is empyt" << endl;
    }

   if  ( i < 0 )
   {
    cerr << "Warning  :  lower bound index " << i << endl;
   }
   
   return L[i];
}

int ArrayList::remove(int i)
{
    
    if (this -> curSize==0)
    {
        cerr << "Error! data is empyt" << endl;

    }
    if (i > this -> curSize)
    {
        cerr << "Warning  !  upper bound index "<<endl;
    }
    if (i < 0)
    {
        cerr << "Warning  :  lower bound index " << i << endl;
        cerr << "Mesage  :  index " << i <<"Change to 0 " << endl;
    }
    
    int tmp =L[i];
    for ( int j =i; j < curSize; j++) 
    {
        L[j]=L[j+1];
    }
    curSize--;
    return tmp;
}

void ArrayList::set(int i, int e)
{
    if (i > this-> curSize)
    {
        cerr << "Warning  !  upper bound index "<<endl;
    }
    if(i <0)
    {
        cerr << "Warning  :  lower bound index " <<endl ;
    }

    L[i]=e;
}

void ArrayList::add(int i, int e)
{
    
    if (curSize > maxSize)
    {
        cerr << "Error !! Data is full. "<< endl;
        return;
    }
    
    
    if (i < 0)
    {
        cerr << "Warning  :  lower bound index " << i << endl;
        cerr << "Mesage  :  index " << i <<"Change to 0 " << endl;
    i= 0;
    }
    
    else if ( i > curSize -1 )
    {
        cerr << "Warning  :  lower bound index " << i << endl;
        cerr << "Mesage  :  index " << i << "Change to  " <<curSize-1 << endl;
        i= curSize;
    } 
    for ( int j = curSize -1 ; j >= i ; j--) 
    {
        L[j+1]=L[j];
    }
    L[i]=e;
    curSize ++;
}

void ArrayList::display()
{
    cout << " Data [ ";
    for (int i = 0 ; i < curSize ; i++  )
    {
        cout << L [i];
        if(i<curSize-1)
            cout<< ", ";
        else 
        cout<< "]"<<endl;
    }
}
int ArrayList::maxVal()
{   
   if(curSize == 0)
   {
    cout << "Error Empty List" << endl;
    return 0;
   }

   int maxValue = L[0];
   for (int i = 1; i < curSize; i++) { 
            if (L[i] > maxValue) { 
                maxValue = L[i];
            } 
        } 
}
int ArrayList::minVal()
{   
    if(curSize == 0)
   {
    cout << "Error Empty List" << endl;
    return 0;
   }

   int minValue = L[0];
   for (int i = 1; i < curSize; i++) { 
            if (L[i] < minValue) { 
                minValue = L[i];
            } 
        } 
}

void ArrayList::clear()
{
}

int ArrayList::isEmpty()
{
    if(curSize <= 0)
    {
        cout << "Ts Empty with size : " << curSize << endl;
        return true;
    }

    else
    {
        cout << "Is not Empty with size : " << curSize << endl;
        return false;
    }
}

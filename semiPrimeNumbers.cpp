
#include <iostream>

using namespace std;

bool isprime(int x)
{
   for(int i = 2; i<x/2 ;i++)
    { if(x%i==0)
      {  return false ;
    }
  }
  return true ;
}

bool isSemiprime(int x)
{
    for(int i = 2 ; i < x/2 ; i++ )
    {
           if(x%i==0)
            {
                if(isprime(i)&&isprime(x/i))
               {
                  return true ;
                  }
           }
    }
    return false ;
}

int main()
{   int cnt=0 ;
    for(int i = 4 ;cnt<70;i++)
    {
      if(isSemiprime(i)) ;
      { cout<< i << endl;
        cnt++ ;
    }
  }
}

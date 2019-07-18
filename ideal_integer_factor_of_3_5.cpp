/* Problem of finding count of ideal integer factor of 3 and 5 (Prime factors) */

#include <iostream>

#include <conio.h>
#include <stdio.h>

using namespace std;

int isIdealInteger(int l, int r)
{
  int count=0;
  int num;
  if (r-l ==0)
  {
    count = count +1;
  }
  else
  {
    if (l==1)
    {
      l=l+1;
      count = count +1;
      for(int j=l; j<=r;j++)
      {
        num= j;
        while (num %3==0)
        {
          num = num/3;
        }

        while (num %5==0)
        {
          num=num/5;
        }

        if (num==1)
        {
          count ++;
        }
      }
    }
    else
    {
      for(int j=l; j<=r;j++)
      {
        num=j;
        while (num%3==0)
        {
          num = num/3;
        }

        while (num%5==0)
        {
          num=num/5;
        }

        if (num==1)
        {
          count ++;
        }
      }

    }
  }

  return count;

}

int main()
{
  int l, r;
  cout << "Please enter an first integer value: ";
  cin >> l;

  cout << "Please enter an last integer value: ";
  cin >> r;

  int count = isIdealInteger(l,r);

  cout << "num of prime factors between the range" <<"\n" << count << endl;

  getch();
  return 0;
}
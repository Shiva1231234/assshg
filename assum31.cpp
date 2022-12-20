Q=1
/*
#include<iostream>
using namespace std;
void test_try(int num)
{
        try
        {
                if(num>=0 && num<=9)
                        throw num;
                else
                        cout<<"\n It is not a Single Number ";
                throw;
        }
        catch(int a)
        {
                cout<<"\n It is a Single Number";
        }
        catch(char b[100])
        {
                cout<<b;
        }
}
int main()
{
        int num;
        cout<<"\n Enter Number : ";
        cin>>num;
        test_try(num);
        return 0;
}*/
Q=2
/*
#include <iostream>
using namespace std;
 
int main()
{
   int x = -1;
 
   // Some code
   cout << "Before try \n";
   try {
      cout << "Inside try \n";
      if (x < 0)
      {
         throw x;
         cout << "After throw (Never executed) \n";
      }
   }
   catch (int x ) {
      cout << "Exception Caught \n";
   }
 
   cout << "After catch (Will be executed) \n";
   return 0;
}*/
Q=3
/*
#include<iostream>
#include<string>
using namespace std;

int main()
{
     float num1, num2, ans;
     char Operator;
     
     cout<<"\n Perform Arithmetic Operations on Two Numbers";
     cout<<"\n --------------------------------------------";

     try
     {
          cout<<"\n Enter First Number   :  ";
          cin>>num1;
          if(num1==0)
               throw 0;
          cout<<"\n Enter Operator       :  ";
          cin>>Operator;
          if(Operator != '+' && Operator != '-' &&
               Operator != '*' && Operator != '/')
          throw Operator;
          cout<<"\n Enter Second Number  :  ";
          cin>>num2;
          cout<<"\n --------------------------------------------";
          switch(Operator)
          {
               case '+':
                    ans = num1 + num2;
                    break;
               case '-':
                    ans = num1 - num2;
                    break;
               case '*':
                    ans = num1 * num2;
                    break;
               case '/':
                    ans = num1 / num2;
                    break;
          }
          if(num2 == 0) //finding if the denominator is 0
               throw 0;
          cout<<"\n Answer : "<<num1<<" "<<Operator<<" "<<num2<<" = "<<ans;
     }
     catch(const char c)
     {
          cout<<"\n Exception Caught... \n Bad Operator : "<<c<<" is not a Valid Operator";
     }
     catch(const int n)
     {
          cout<<"\n Error : Bad Operation...";
     }
     return 0;
}*/
Q=4
/*
#include<iostream>
#include<string>
using namespace std;

int main()
{
     float num1, num2, ans;
     char Operator;
     
     cout<<"\n Perform Arithmetic Operations on Two Numbers";
     cout<<"\n --------------------------------------------";

     try
     {
          cout<<"\n Enter First Number   :  ";
          cin>>num1;
          if(num1==0)
               throw 0;
          cout<<"\n Enter Operator       :  ";
          cin>>Operator;
          if(Operator != '+' && Operator != '-' &&
               Operator != '*' && Operator != '/')
          throw Operator;
          cout<<"\n Enter Second Number  :  ";
          cin>>num2;
          cout<<"\n --------------------------------------------";
          switch(Operator)
          {
               case '+':
                    ans = num1 + num2;
                    break;
               case '-':
                    ans = num1 - num2;
                    break;
               case '*':
                    ans = num1 * num2;
                    break;
               case '/':
                    ans = num1 / num2;
                    break;
          }
          if(num2 == 0) //finding if the denominator is 0
               throw 0;
          cout<<"\n Answer : "<<num1<<" "<<Operator<<" "<<num2<<" = "<<ans;
     }
     catch(const char c)
     {
          cout<<"\n Exception Caught... \n Bad Operator : "<<c<<" is not a Valid Operator";
     }
     catch(const int n)
     {
          cout<<"\n Error : Bad Operation...";
     }
     return 0;
}*/
Q=5
/*
// is valid.
#include <iostream>
#include <regex>
using namespace std;
 
bool isValid(string s)
{
    // The given argument to pattern()
    // is regular expression. With the help of
    // regular expression we can validate mobile
    // number.
    // 1) Begins with 0 or 91
    // 2) Then contains 6,7 or 8 or 9.
    // 3) Then contains 9 digits
  const regex pattern("(0|91)?[6-9][0-9]{9}");
 
  // regex_match() is used to
  // to find match between given number
  // and regular expression
  if(regex_match(s, pattern))
  {
    return true;
  }
  else
  {
    return false;
  }
}
 
// Driver Code
int main()
{
  string s = "347873923408";
  if(isValid(s))
  {
      cout << "Valid";
  }
  else
  {
      cout<<"Invalid";
  }
  return 0;
}
 
*\
Q=6
/*




Login page validations - C++ Program
Home > CPP Programs > CPP Exception Handling Programs
« PreviousNext »
Programs
C++ Programs on Exception Handling
Demonstrate try, catch block
Demonstrate try, throw & catch
Perform arithmetic operations
Accept an email address
Login page validations

Q. Write a C++ program to accept user name and password and throw an exception if the password has less than 6 characters or does not contain a digit.

Answer:

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

using namespace std;

int main()
{
     char uname[50];
     char pass[20];
     cout<<"\n Enter User Name  :  ";
     gets(uname);
     cout<<"\n Enter Password   :  ";
     gets(pass);
     try
     {
          //This section is used to verify the number of characters.
          if(strlen(pass)<6)
          {
               cout<<"\n Password must be at least 6 Characters Long..."<<endl;
               throw 'c';
          }
          //This section is used to verify the digits in the string.
          bool digit_yes=false;
          bool valid;
          int len = strlen(pass);
          for (int count = 0; count < len; count++)
          if (isdigit(pass[count]))      
               digit_yes=true;
          if (!digit_yes)
          {
               valid=false;
               cout <<"\n Password must have at least One Digit (0-9)"<< endl;
               throw 'c';
          }
          else
          {
               valid=true;
               cout<<"\n Password is Correct";
          }
     }
     catch(char c)
     {
          cout<<"\n Invalid Password Format!!!";
     }
     catch(...)
     {
          cout<<"\n Default Exception";
     }
     return 0;
}

*\
Q=7
/*





Login page validations - C++ Program
Home > CPP Programs > CPP Exception Handling Programs
« PreviousNext »
Programs
C++ Programs on Exception Handling
Demonstrate try, catch block
Demonstrate try, throw & catch
Perform arithmetic operations
Accept an email address
Login page validations

Q. Write a C++ program to accept user name and password and throw an exception if the password has less than 6 characters or does not contain a digit.

Answer:

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

using namespace std;

int main()
{
     char uname[50];
     char pass[20];
     cout<<"\n Enter User Name  :  ";
     gets(uname);
     cout<<"\n Enter Password   :  ";
     gets(pass);
     try
     {
          //This section is used to verify the number of characters.
          if(strlen(pass)<6)
          {
               cout<<"\n Password must be at least 6 Characters Long..."<<endl;
               throw 'c';
          }
          //This section is used to verify the digits in the string.
          bool digit_yes=false;
          bool valid;
          int len = strlen(pass);
          for (int count = 0; count < len; count++)
          if (isdigit(pass[count]))      
               digit_yes=true;
          if (!digit_yes)
          {
               valid=false;
               cout <<"\n Password must have at least One Digit (0-9)"<< endl;
               throw 'c';
          }
          else
          {
               valid=true;
               cout<<"\n Password is Correct";
          }
     }
     catch(char c)
     {
          cout<<"\n Invalid Password Format!!!";
     }
     catch(...)
     {
          cout<<"\n Default Exception";
     }
     return 0;
}
*\
Q=8
/*





Login page validations - C++ Program
Home > CPP Programs > CPP Exception Handling Programs
« PreviousNext »
Programs
C++ Programs on Exception Handling
Demonstrate try, catch block
Demonstrate try, throw & catch
Perform arithmetic operations
Accept an email address
Login page validations

Q. Write a C++ program to accept user name and password and throw an exception if the password has less than 6 characters or does not contain a digit.

Answer:

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

using namespace std;

int main()
{
     char uname[50];
     char pass[20];
     cout<<"\n Enter User Name  :  ";
     gets(uname);
     cout<<"\n Enter Password   :  ";
     gets(pass);
     try
     {
          //This section is used to verify the number of characters.
          if(strlen(pass)<6)
          {
               cout<<"\n Password must be at least 6 Characters Long..."<<endl;
               throw 'c';
          }
          //This section is used to verify the digits in the string.
          bool digit_yes=false;
          bool valid;
          int len = strlen(pass);
          for (int count = 0; count < len; count++)
          if (isdigit(pass[count]))      
               digit_yes=true;
          if (!digit_yes)
          {
               valid=false;
               cout <<"\n Password must have at least One Digit (0-9)"<< endl;
               throw 'c';
          }
          else
          {
               valid=true;
               cout<<"\n Password is Correct";
          }
     }
     catch(char c)
     {
          cout<<"\n Invalid Password Format!!!";
     }
     catch(...)
     {
          cout<<"\n Default Exception";
     }
     return 0;
}
*\

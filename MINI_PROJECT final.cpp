/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
void student();
void faculty();
int main()
{
    int ch;
    cout<<"\n ******************* WELCOME ************\n ******** GEC PORTAL ************ \n";
    d: cout<<"\n ENTER 1 IF YOU ARE A STUDENT AND 2 IF YOU ARE A FACULTY\t";
    cin>>ch;
    switch(ch)
    {
        case 1: student ();
            break;
        case 2: faculty();
            break;
        default: cout<<"\n PLEASE ENTER A VALID OPTION \t"; goto d;
    }
}
void student()
{   int flag=0;
    string stud;
    string studpass;
    string stud1= "ADERSH";
    string stud2= "ASHWIN";
    string stud3= "ABHIRAM";
    string pass1= "ADE";
    string pass2= "ASH";
    string pass3= "ABHI";
    cout<<"\n **** WELCOME STUDENT ***** \t";
   a: cout<<"\n ENTER YOUR NAME \t";
    cin>>stud;
    if(stud==stud1||stud==stud2||stud==stud3)
    {   b:cout<<"\n ENTER YOUR PASSWORD \t";
        cin>>studpass;
        if(stud==stud1&&studpass==pass1)
        {
            cout<<"\n ***** YOUR MARKS ARE : 96/100 ***** ";
            
        }
        else if(stud==stud2&&studpass==pass2)
        {
            cout<<"\n ****** YOUR MARKS ARE : 98/100  ****** ";
            
        }
        
        else if(stud==stud3&&studpass==pass3)
        {
            cout<<"\n ***** YOUR MARKS ARE: 99/100 ******";
            
            
        }
        else
        {
            flag++;
        }
        if(flag==3)
       {
        cout<<"\n *** SORRY YOU HAVE REACHED MAXIMUM ATTEMPT, TRY AFTER SOMETIME *****";
        
       }
       else if(flag>0)
       goto b;

}
    else
    {   cout<<"\n ENTER VALID NAME\t";
        goto a;
    }
}
    
void faculty()
{
    string fid1= "SASHANKAN";
    string fpass1= "SASH";
    string fid;
    string fpass;
     c:cout<<"\n *** ENTER FACULTY ID***\t";
    cin>>fid;
    cout<<"\n *** ENTER YOUR PASSWORD***\t";
    cin>>fpass;
    if(fid==fid1&&fpass==fpass1)
    {
        cout<<"\n *** WELCOME MR. SASHANKAN ***";
        cout<<"\n   ************************************************************************************\t";
        cout<<"\n   *   MR.ADERSH      :      96/100                                                   *\t";
        cout<<"\n   *   MR.ASHWIN      :      98/100                                                   *\t";
        cout<<"\n   *   MR.ABHIRAM     :      99/100                                                   *\t";
        cout<<"\n   ************************************************************************************\t";
        
    }
    else
    {
        cout<<"\n INVALID FACULTY ID AND PASSWORD!!!!\n ENTER VALID CREDENTIALS ";
        goto c;
    }
}

    


   
  

#include <iostream>
#include <stdbool.h>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

//deutera htan 1 iouniou 2009

int main()
{
system("color f1");

              int etos,month,meres,day,f,i,j;
              cout<<"                            ";
              cout<<"Diale3e etos: ";  //diabasma etous
              cin>>etos;
              cout<<endl;

              if (etos%4==0)   //disekto
              {
                          if (etos%100==0)
                          {
                                        if (etos%400==0)
                                        {
                                                        cout<<"                                  ";
                                                        cout<<"Disekto";
                                                        cout<<endl;
                                                        cout<<endl;
                                                        f=29;                
                                        }else{
                                                        cout<<"                                ";
                                                        cout<<"OXI Disekto";
                                                        cout<<endl;
                                                        cout<<endl;
                                                        f=28;
                                        }
                          }else{
                                cout<<"                                  ";
                                cout<<"Disekto";
                                cout<<endl;
                                cout<<endl;
                                f=29;
                          }
              }else{
                    cout<<"                                ";
                    cout<<"OXI Disekto";
                    cout<<endl;
                    cout<<endl;
                    f=28;
              }
              
          int SUM_MERWN_ETOUS=0;
          i=0;    //meres etous sunolika apo etos 0
          int ff;
          while (i<etos)
          {         
              if (i%4==0)   //disekto
              {
                          if (i%100==0)
                          {
                                        if (i%400==0)
                                        {
                                                        ff=29;                
                                        }else{
                                                        ff=28;
                                        }
                          }else{
                                ff=29;
                          }
              }else{
                    ff=28;
              }
              
              SUM_MERWN_ETOUS=SUM_MERWN_ETOUS+337+ff;
			  i++;
          }         
             
          int default_sum=31+28+31+30+31+1; //noumero einai 6 mhnes iouniou +1 iouniou
          i=0;    //meres etous sunolika apo etos 0
          while (i<2009)
          {
              if (i%4==0)   //disekto
              {
                          if (i%100==0)
                          {
                                        if (i%400==0)
                                        {
                                                        ff=29;
                                        }else{
                                                        ff=28;
                                        }
                          }else{
                                ff=29;
                          }
              }else{
                    ff=28;
              }
              default_sum=default_sum+337+ff;
              i++;
          }
          
              _Bool flagmonth=0;   //diabasma mhna
              while (!flagmonth)
              {
                    cout<<"                            ";
                    cout<<"Diale3e mhna 1-12: ";
                    cin>>month;
                    cout<<endl;
                    month--;
                    if (month<0 || month>11)
                    {
                                cout<<"                            ";
                                cout<<"La8os Noumero Mhna!";
                                cout<<endl;           
                    }else{
                          flagmonth=1;
                    }
              }
              
              int sum_merwn_mhnwn=0;  //a8roisma merwn mhnwn (gia xrhsh sto default))
              for (i=0; i<month; i++)
              {
                      if (i==0 || i==2 || i==4 || i==6 || i==7 || i==9 || i==11)
                      {
                            meres=31;
                      }else if (i==3 || i==5 || i==8 || i==10){
                            meres=30;
                      }else{
                            meres=f;
                      }
                  sum_merwn_mhnwn=sum_merwn_mhnwn+meres;
              }
              
              //meres mhna p edwse o xrhsths
              if (month==0 || month==2 || month==4 || month==6 || month==7 || month==9 || month==11)
              {
                      meres=31;
              }else if (month==3 || month==5 || month==8 || month==10){
                      meres=30;
              }else{
                      meres=f;
              }

              cout<<"                            ";
              cout<<"* Meres tou mhna: "<<meres<<" *";
              cout<<endl;
              cout<<endl;
              
              _Bool flagday=0;   //diabasma merwn
              while (!flagday)
              { 
                    cout<<"                            ";
                    cout<<"Diale3e mera 1-"<<meres<<": ";
                    cin>>day;
                    cout<<endl;
                    day--;
                    if (day<0 || day>=meres)
                    {
                          cout<<"                            ";
                          cout<<"La8os Noumero Merwn!";
                          cout<<endl;    
                    }else{
                          flagday=1;
                    }
              }
              
        	  int myday=SUM_MERWN_ETOUS+sum_merwn_mhnwn+(day+1);  //SUNOLIKA OI MERES APO ETOS MHDES WS THN MERA P DIALE3E O XRHSTHS
               
			  int diafora_merwn=myday-default_sum;  //diafora merwn apo 1 jun 2009 mexri thn mera p diale3e o xrhsths
        	  
        	  if (diafora_merwn>0)  //  2/6/2009+
        	  {
					j=0;
					for (i=0; i<diafora_merwn; i++)
					{
						j++;
                    	if (j==7)
                    	{
                       		j=0;
                    	}
					}
        	  }

			  if (diafora_merwn<0) //  31/5/2009-
        	  {
					j=7;
					for (i=0; i>diafora_merwn; i--)
					{
						j--;
                    	if (j==-1)
                    	{
                       		j=6;
                    	}
					}
        	  }

			  if (diafora_merwn==0) //  1/6/2009 (Deutera by default)
        	  {
					j=0;
        	  }

			  if (j==0){
                        cout<<"                            ";
              			cout<<"Deutera";
              }else if (j==1){
                        cout<<"                            ";
                        cout<<"Trith";
              }else if (j==2){
                        cout<<"                            ";
                        cout<<"Tetarth";
              }else if (j==3){
                        cout<<"                            ";
                        cout<<"Pempth";
              }else if (j==4){
                        cout<<"                            ";
                        cout<<"Paraskeuh";
              }else if (j==5){
                        cout<<"                            ";
                        cout<<"Sabbato";
              }else if (j==6){
                        cout<<"                            ";
                        cout<<"Kuriakh";
              }

cout<<endl;
cout<<endl;

system("pause");
}


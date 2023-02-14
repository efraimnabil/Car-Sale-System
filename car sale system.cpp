#include <iostream>
#include <cstring>

using namespace std;

class CarDetails
 
{
	protected :
		string model;
		string color;	
	 	string Engine_capacity;
	 	string Acceleration;
	 	string Horses;
	 	string volume;
	 	int speed;
	 	int price;
	public : 
		void setprice(int x)
			{
				price = x;
			}
		void setColor(string y)
			{
				color=y;
			}
		void setspeed(int x)
			{
				speed = x;
			}
		void setmodel(string y)
			{
				model=y;
			}
		void Engine(string a)
			{
				Engine_capacity=a;
			}
		void Accelerations(string a)
			{
				Acceleration=a;
			}
		void Horse(string a)
			{
				Horses=a;
			}
		void volumes(string a)
			{
				volume=a;
			}
};

class car : public CarDetails 
{
	private :
		string name;
		string type;
	public : 
		void setname(string n)
			{
				name=n;
			}
		void settype(string n)
			{
				type=n;
			}
		string getname()
			{
				return name;
			}
		void print()
			{
				cout<<"type : "<<type<<endl
				    <<"Model : "<<model<<endl
				    <<"Color : "<<color<<endl
				    <<"Speed : "<<speed<<endl
				    <<"Price : "<<price<<endl
				    <<"Engine capacity : "<<Engine_capacity<<endl
				    <<"Acceleration : "<<Acceleration<<endl
				    <<"Horses : "<<Horses<<endl
				    <<"volume : "<<volume<<endl;
			}
};
void P(){
	cout<<"\nDone\nyour order is \n\n";
};
int main()
{
	int ch_s,ch_c,ch_x;
	car Cars,B1,B2,B3,N1,N2,N3,A1,A2,A3,M1,M2,M3;
	
	Cars.setname(" 1-BMW \n 2-Nissan  \n 3-Audi \n 4-mercedes ");
	/*****/
	B1.settype("BMW");
	B1.setmodel("BMW X6 2021");
	B1.setColor("BLack");
	B1.setspeed(280);
	B1.setprice(2300000.0);
	B1.Engine("4400 CC Turbo");
	B1.Accelerations("0 to 100 in 4.3 seconds");
	B1.Horse("530 hp");
	B1.volumes("Crossover Coupe Over");
	/*-----*/
	B2.settype("BMW");
	B2.setmodel("BMW 850 2020");
	B2.setColor("gray");
	B2.setprice(2990000.0);
	B2.setspeed(300);
	B2.Engine("4400 CC Turbo");
	B2.Accelerations("0 to 100 in 3.7 seconds");
	B2.Horse("530 hp");
	B2.volumes("Coupe");
	/*------*/
	B3.settype("BMW");
	B3.setColor("white");
	B3.setspeed(220);
	B3.setprice(620000.0);
	B3.setmodel("BMW 218 Gran Tourer");
	B3.Engine("1500 CC Turbo");
	B3.Accelerations("0 to 100 in 9.8 seconds");
	B3.Horse("140 hp");
	B3.volumes("Station under compact");
	/*****************/
	M1.settype("mercedes");
	M1.setColor("white");
	M1.setspeed(300);
	M1.setprice(3320000.0);
	M1.setmodel("mercedes amg gt53");
	M1.Engine("3000 CC Turbo");
	M1.Accelerations("0 to 100 in 4.5 seconds");
	M1.Horse("435 hp");
	M1.volumes("Four-door coupe");
	/*------*/
	M2.settype("mercedes");
	M2.setColor("Black");
	M2.setspeed(300);
	M2.setprice(4180000.0);
	M2.setmodel("mercedes S500");
	M2.Engine("3000 CC Turbo");
	M2.Accelerations("0 to 100 in 4.9 seconds");
	M2.Horse("435 hp");
	M2.volumes("Luxury full-size sedan");
	/*------*/
	M3.settype("mercedes");
	M3.setColor("Black");
	M3.setspeed(300);
	M3.setprice(1500000.0);
	M3.setmodel("mercedes GLC300");
	M3.Engine("2000 CC Turbo");
	M3.Accelerations("0 to 100 in 6.3 seconds");
	M3.Horse("258 hp");
	M3.volumes("Compact Crossover/Crossover Over Coup");
	/*------*/
	N1.settype("Nissan");
	N1.setColor("BLack");
	N1.setprice(3500000.0);
	N1.setspeed(320);
	N1.setmodel("2021 Nissan centra");
	N1.Engine("1600 CC");
	N1.Accelerations("0 to 100 in 10.9 seconds");
	N1.Horse("118 hp");
	N1.volumes("Built-in sedan");
	
	/*-----*/
	N2.settype("Nissan");
	N2.setmodel("Nissan Qashqai 2021 ");
	N2.setColor("gray");
	N2.setprice(314000.0);
	N2.setspeed(200);
	N2.Engine(" 1200 CC Turbo");
	N2.Accelerations("0 to 100 in 11 seconds");
	N2.Horse("115 hp");
	N2.volumes("CrossOver compact");
	/*-----*/
	
	N3.settype("Nissan");
	N3.setmodel("Nissan versa note 2019 ");
	N3.setColor("white");
	N3.setprice(2900000.0);
	N3.setspeed(220);
	N2.Engine(" 1400 CC Turbo");
	N2.Accelerations("0 to 100 in 8.9 seconds");
	N2.Horse("119 hp");
	N2.volumes("CrossOver compact");
	/*******/
	A1.settype("Audi");
	A1.setColor("Black");
	A1.setprice(5550000.0);
	A1.setspeed(280);
	A1.setmodel("Audi A3 2020 ");
	A1.Engine("1000 CC Turbo");
	A1.Accelerations("0 to 100 in 9.9 seconds");
	A1.Horse("115 hp");
	A1.volumes("Sedan under luxurious compact");
	/*----*/
	A2.settype("Audi");
	A2.setmodel("Audi A8 2019");
	A2.setColor("gray");
	A2.setprice(3500000.0);
	A2.setspeed(340);
	A2.Engine(" 3000 CC Turbo");
	A2.Accelerations("0 to 100 in 5.7 seconds");
	A2.Horse("240 hp");
	A2.volumes("Large sedan");
	/*----*/
	A3.settype("Audi");
	A3.setmodel("Audi Q7 2021");
	A3.setColor("white");
	A3.setprice(1550000.0);
	A3.setspeed(300);
	A3.Engine(" 2000 CC Turbo");
	A3.Accelerations("0 to 100 in 7.7 seconds");
	A3.Horse("245 hp");
	A3.volumes(" Medium-sized Crossover Over");
	/************************************/
	
	cout<<" \t\t\t\t+--------------------------------+\n \t\t\t\t|       WELCOME in EGY CAR       |\n \t\t\t\t+--------------------------------+\n"<<endl;
	
	
	do
	{
		cout<<" 1- Cars menu \n 0- Exit \n Enter your choise : " ;
		cin>>ch_s;
		if( (ch_s < 0) || (ch_s > 1) )
    	{
    		cout<<"\n Wrong choice...\n choose again.\n";
		}
		if (ch_s==1)
		{
				
			cout<<"\n The avalible Cars is :- \n\n";
			cout<<Cars.getname();
			cout<<"\n now you will choose car : ";
			cin>>ch_c;
			switch (ch_c)
			{
				case 1:
				{
					cout<<"1-\n";
					B1.print();
					cout<<"\n\n\n";
					cout<<"2-\n";
					B2.print();
					cout<<"\n\n\n";
					cout<<"3-\n";
					B3.print();
					cout<<"\n\n\n"<<
					"choose model : ";
					cin>>ch_x;
						
							if(ch_x==1)
							{
							P();	B1.print();		break;
							}
							if(ch_x==2)
	    					{
					    	P();	B2.print();		break;
							}
							if(ch_x==3)
							{
								P();	B3.print();		break;
							}
						
					break;
				}
								
				case 2:
				{
					cout<<"1-\n";
					N1.print();
					cout<<"\n\n\n";
					cout<<"2-\n";
					N2.print();
					cout<<"\n\n\n";
					cout<<"3-\n";
					N3.print();				
					cout<<"\n\n\n"
					<<"choose model : ";
					cin>>ch_x;
						if (ch_x==1)
						{
							P();	N1.print();		break;
						}
						if(ch_x==2)
							{
							P();	N2.print();		break;
							}
						if(ch_x==3)
							{
							P();	N3.print();		break;
							}
						
				break;
				}
				case 3:
				{
					cout<<"1-\n";
					A1.print();
					cout<<"\n\n\n";
					cout<<"2-\n";
					A2.print();
					cout<<"\n\n\n";
					cout<<"3-\n";
					A3.print();
					cout<<"\n\n\n";
					"choose model : ";
					cin>>ch_x;
						if (ch_x==1)
							{
								P();	A1.print();		break;
							}
							if(ch_x==2)
							{
							P();	A2.print();		break;
							}
							if(ch_x==3)
							{
							P();	A3.print();		break;
							}
					break;
				}
				case 4:
				{
									
					cout<<"1-\n";
					M1.print();
					cout<<"\n\n\n";
					cout<<"2-\n";
					M2.print();
					cout<<"\n\n\n";
					cout<<"3-\n";
					M3.print();
					cout<<"\n\n\n"
					<<"choose model : ";
					cin>>ch_x;
					if(ch_x==1)
					{	
					P();	M1.print();		break;				
					}
					if(ch_x==2)
						{
						P();	M2.print();		break;
						}
						if(ch_x==3)
						{
						P();	M3.print();		break;
						}
				break;		
				}
			}	
		}	
		cout<<"\n\nif you want Exit enter 0 \n\n";		
	}while(ch_s!=0);
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int num=0;
int *q1 = new int[num];
int *m1 = new int[num];
int *f1 = new int[num];

int main()
{	
	int select = 0; 
	cout<<setw(50)<<setfill('=')<<" "<<endl;
	cout<<setw(25)<<setfill(' ')<<" "<<"MENU"<<endl;
	cout<<setw(50)<<setfill('=')<<" "<<endl;

	cout<<setw(5)<<setfill(' ')<<" "<<"1.Input student records"<<endl;
	cout<<setw(5)<<setfill(' ')<<" "<<"2.View all student records"<<endl;
	cout<<setw(5)<<setfill(' ')<<" "<<"3.Exit"<<endl;

	
	cout<<"Select menu :";
	cin>>select;
	if (select ==1){
		cout<<"Input Number of Student :";
		cin>>num;	
		for(int i =0 ; i<num ; i++){
			cout<<"Number "<<i+1<<endl;
			cout<<" Input Quiz: ";
			cin>>q1[i];
			cout<<" Input Midterm: ";
			cin>>m1[i];
			cout<<" Input Final: ";
			cin>>f1[i];		
		
		}
		main();
	}
	else if(select == 2)
	{
		cout<<setw(40)<<setfill('-')<<" "<<endl;
		cout<<left<<"Stdent"<<setw(5)<<setfill(' ')<<" "<<"Quizt"<<setw(5)<<setfill(' ')<<" "<<"Midterm"<<setw(5)<<setfill(' ')<<" "<<"Final"<<endl;
		cout<<setw(40)<<setfill('-')<<" "<<endl;
		for(int i=0 ; i<num ; i++)
		{
			cout<<left<<i+1<<setw(10)<<setfill(' ')<<" "<<q1[i]<<setw(10)<<setfill(' ')<<" "<<m1[i]<<setw(10)<<setfill(' ')<<" "<<f1[i]<<endl;
		
		}
			main();
	}

	



	return 0;

}
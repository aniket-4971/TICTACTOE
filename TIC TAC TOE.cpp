#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <unistd.h>
#include <windows.h>
#include <time.h>
using namespace std;

	char board[10] = {'0','1','2','3','4','5','6','7','8','9'};
//for status
int check()
{
	if(board[1] == board[2] && board[2] == board[3])
	{
		return 1;
	}
	else if(board[4] == board[5] && board[5] == board[6])
	{
		return 1;
	}
	else if(board[7] == board[8] && board[8] == board[9])
	{
		return 1;
	}
	else if(board[1] == board[4] && board[4] == board[7])
	{
		return 1;
	}
	  else if(board[2] == board[5] && board[5] == board[8])
	{
		return 1;
	}
	else if(board[3] == board[6] && board[6] == board[9])
	{
		return 1;
	}
	else if(board[1] == board[5] && board[5] == board[9])
	{
		return 1;
	}
	else if(board[3] == board[5] && board[5] == board[7])
	{
		return 1;
	}
	else if(board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8' && board[9] != '9')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
//for view
void view()
{
  system("cls"); 

 cout<<"PLAYER - 1-> (X)  PLAYER - 2 -> (O)"<<endl;;
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1]<<"  | "<<board[2]<<"   |  "<<board[3]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[4]<<"  | "<<board[5]<<"   |  "<<board[6]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[7]<<"  | "<<board[8]<<"   |  "<<board[9]<<" \n";
    cout<<"\t\t     |     |     \n";
	
}
int main()
{
int player = 1;
int i,select;
char c;

do{
   
	view();
	player = (player%2)?1:2;
	cout<<"Player: "<<player<<" Enter your place "<<endl;
	cin>>select;
	c = (player == 1)?'X':'O';
	if(select == 1 && board[1] == '1')
	{
		board[1] = c;
		
	}
	else if(select == 2 && board[2] == '2')
	{
		board[2] = c;
		
	}
		else if(select == 3 && board[3] == '3')
	{
		board[3] = c;
		
	}
		else if(select == 4 && board[4] == '4')
	{
		board[4] = c;
		
	}
		else if(select == 5 && board[5] == '5')
	{
		board[5] = c;
		
	}
		else if(select == 6 && board[6] == '6')
	{
		board[6] = c;
		
	}
		else if(select == 7 && board[7] == '7')
	{
		board[7] = c;
		
	}
		else if(select == 8&& board[8] == '8')
	{
		board[8] = c;
		
	}
		else if(select == 9 && board[9] == '9')
	{
		board[9] = c;
		
	}
	else
	{
		cout<<"Invalid move"<<endl;
		player--;
	}
	player++;
	i = check();
	
}while(i == -1);
if(i == 1)
{
	player--;
	
	cout<<"Player "<<player<<" wins"<<endl;
}
else if(i == 0)
{
	cout<<"Draw"<<endl;
}

}

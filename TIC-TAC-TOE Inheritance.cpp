char arr[4][4] = {{'1', '2', '3', '1'}, {'4', '5', '6', '2'}, {'7', '8', '9', '3'}, {'4', '5', '6', '7'}};

/*
#include<iostream>
using namespace std;
int choice; char ar[3][3]={{'X','Y','Z'},{'X','Y','Z'},{'X','Y','Z'}};
char arr[4][4]={{'1','2','3','!'},{'4','5','6','@'},{'7','8','9','#'},{'14','15','16','$'}};

int main()
{
	for(int i=0;i<=2;i++)
	{
	for(int j=0;j<=2;j++)
	{
	arr[i][j]=ar[i][j];
	cout<<arr[i][j]<<" ";	
	}	
	cout<<endl;
	}


for(int i=0;i<=3;i++)
	{
	for(int j=0;j<=3;j++)
	{
		
	cout<<arr[i][j]<<" ";	
	}	
	cout<<endl;
	}
	
	return 0;
}


 
 
 
*/

#include <iostream>
using namespace std;

class tat_3
{
	int choice_3, choice2_3, r = 0;

public:
	char ar[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

	void table_3()
	{
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t" << ar[0][0] << "    |  " << ar[0][1] << "  |   " << ar[0][2] << "     \n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t_____|_____|_____\n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t" << ar[1][0] << "    |  " << ar[1][1] << "  |   " << ar[1][2] << "     \n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t_____|_____|_____\n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t" << ar[2][0] << "    |  " << ar[2][1] << "  |   " << ar[2][2] << "     \n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t     |     |     \n";
	}

	int dec_3()
	{

		if ((ar[0][0] == 'X') && (ar[0][1] == 'X') && (ar[0][2] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[1][0] == 'X') && (ar[1][1] == 'X') && (ar[1][2] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[2][0] == 'X') && (ar[2][1] == 'X') && (ar[2][2] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][0] == 'X') && (ar[1][0] == 'X') && (ar[2][0] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][1] == 'X') && (ar[1][1] == 'X') && (ar[2][1] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][2] == 'X') && (ar[1][2] == 'X') && (ar[2][2] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][0] == 'X') && (ar[1][1] == 'X') && (ar[2][2] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][2] == 'X') && (ar[1][1] == 'X') && (ar[2][0] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][0] == 'O') && (ar[0][1] == 'O') && (ar[0][2] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[1][0] == 'O') && (ar[1][1] == 'O') && (ar[1][2] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[2][0] == 'O') && (ar[2][1] == 'O') && (ar[2][2] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[0][0] == 'O') && (ar[1][0] == 'O') && (ar[2][0] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[0][1] == 'O') && (ar[1][1] == 'O') && (ar[2][1] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[0][2] == 'O') && (ar[1][2] == 'O') && (ar[2][2] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[0][0] == 'O') && (ar[1][1] == 'O') && (ar[2][2] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[0][2] == 'O') && (ar[1][1] == 'O') && (ar[2][0] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}
		else
		{
			return 0;
		}
	}

	int check_3()
	{
		if (choice_3 == choice2_3)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	int game()
	{
		int x = 0;
		cout << "PLAYER 1 [X] TURN : ";
		cin >> choice_3;
		switch (choice_3)
		{
		case 1:
			ar[0][0] = 'X';
			break;

		case 2:
			ar[0][1] = 'X';
			break;

		case 3:
			ar[0][2] = 'X';
			break;

		case 4:
			ar[1][0] = 'X';
			break;

		case 5:
			ar[1][1] = 'X';
			break;

		case 6:
			ar[1][2] = 'X';
			break;

		case 7:
			ar[2][0] = 'X';
			break;

		case 8:
			ar[2][1] = 'X';
			break;

		case 9:
			ar[2][2] = 'X';
			break;

		default:
			cout << "INVALID";
			break;
		}
		table_3();

		x = dec_3();
		if (x == 1)
		{
			return x;
		}

		cout << "PLAYER 2 [O] TURN : ";
		cin >> choice2_3;
		switch (choice2_3)
		{
		case 1:
			ar[0][0] = 'O';
			break;

		case 2:
			ar[0][1] = 'O';
			break;

		case 3:
			ar[0][2] = 'O';
			break;

		case 4:
			ar[1][0] = 'O';
			break;

		case 5:
			ar[1][1] = 'O';
			break;

		case 6:
			ar[1][2] = 'O';
			break;

		case 7:
			ar[2][0] = 'O';
			break;

		case 8:
			ar[2][1] = 'O';
			break;

		case 9:
			ar[2][2] = 'O';
			break;

		default:
			cout << "INVALID";
			break;
		}

		r = check_3();
		if (r == 0)
		{
			table_3();
			else
			{
				cout << "\n\nINVALID CHOICE\n\n";
			}

			x = dec_3();
			if (x == 1)
			{
				return x;
			}

			cout << "PLAYER 1 [X] TURN : ";
			cin >> choice_3;
			switch (choice_3)
			{
			case 1:
				ar[0][0] = 'X';
				break;

			case 2:
				ar[0][1] = 'X';
				break;

			case 3:
				ar[0][2] = 'X';
				break;

			case 4:
				ar[1][0] = 'X';
				break;

			case 5:
				ar[1][1] = 'X';
				break;

			case 6:
				ar[1][2] = 'X';
				break;

			case 7:
				ar[2][0] = 'X';
				break;

			case 8:
				ar[2][1] = 'X';
				break;

			case 9:
				ar[2][2] = 'X';
				break;

			default:
				cout << "INVALID";
				break;
			}

			r = check_3();
			if (r == 0)
			{
				table_3();
			}
			else
			{
				cout << "\n\nINVALID CHOICE\n\n";
			}

			x = dec_3();
			if (x == 1)
			{
				return x;
			}

			cout << "PLAYER 2  [O] TURN : ";
			cin >> choice2_3;
			switch (choice2_3)
			{
			case 1:
				ar[0][0] = 'O';
				break;

			case 2:
				ar[0][1] = 'O';
				break;

			case 3:
				ar[0][2] = 'O';
				break;

			case 4:
				ar[1][0] = 'O';
				break;

			case 5:
				ar[1][1] = 'O';
				break;

			case 6:
				ar[1][2] = 'O';
				break;

			case 7:
				ar[2][0] = 'O';
				break;

			case 8:
				ar[2][1] = 'O';
				break;

			case 9:
				ar[2][2] = 'O';
				break;

			default:
				cout << "INVALID";
				break;
			}

			r = check_3();
			if (r == 0)
			{
				table_3();
			}
			else
			{
				cout << "\n\nINVALID CHOICE\n\n";
			}

			x = dec_3();
			if (x == 1)
			{
				return x;
			}

			cout << "PLAYER 1 [X] TURN : ";
			cin >> choice_3;
			switch (choice_3)
			{
			case 1:
				ar[0][0] = 'X';
				break;

			case 2:
				ar[0][1] = 'X';
				break;

			case 3:
				ar[0][2] = 'X';
				break;

			case 4:
				ar[1][0] = 'X';
				break;

			case 5:
				ar[1][1] = 'X';
				break;

			case 6:
				ar[1][2] = 'X';
				break;

			case 7:
				ar[2][0] = 'X';
				break;

			case 8:
				ar[2][1] = 'X';
				break;

			case 9:
				ar[2][2] = 'X';
				break;

			default:
				cout << "INVALID";
				break;
			}

			r = check_3();
			if (r == 0)
			{
				table_3();
			}
			else
			{
				cout << "\n\nINVALID CHOICE\n\n";
			}

			x = dec_3();
			if (x == 1)
			{
				return x;
			}

			cout << "PLAYER 2  [O] TURN : ";
			cin >> choice2_3;
			switch (choice2_3)
			{
			case 1:
				ar[0][0] = 'O';
				break;

			case 2:
				ar[0][1] = 'O';
				break;

			case 3:
				ar[0][2] = 'O';
				break;

			case 4:
				ar[1][0] = 'O';
				break;

			case 5:
				ar[1][1] = 'O';
				break;

			case 6:
				ar[1][2] = 'O';
				break;

			case 7:
				ar[2][0] = 'O';
				break;

			case 8:
				ar[2][1] = 'O';
				break;

			case 9:
				ar[2][2] = 'O';
				break;

			default:
				cout << "INVALID";
				break;
			}

			r = check_3();
			if (r == 0)
			{
				table_3();
				else
				{
					cout << "\n\nINVALID CHOICE\n\n";
				}

				x = dec_3();
				if (x == 1)
				{
					return x;
				}

				cout << "PLAYER 1 [X] TURN : ";
				cin >> choice_3;
				switch (choice_3)
				{
				case 1:
					ar[0][0] = 'X';
					break;

				case 2:
					ar[0][1] = 'X';
					break;

				case 3:
					ar[0][2] = 'X';
					break;

				case 4:
					ar[1][0] = 'X';
					break;

				case 5:
					ar[1][1] = 'X';
					break;

				case 6:
					ar[1][2] = 'X';
					break;

				case 7:
					ar[2][0] = 'X';
					break;

				case 8:
					ar[2][1] = 'X';
					break;

				case 9:
					ar[2][2] = 'X';
					break;

				default:
					cout << "INVALID";
					break;
				}

				r = check_3();
				if (r == 0)
				{
					table_3();
				}
				else
				{
					cout << "\n\nINVALID CHOICE\n\n";
				}

				x = dec_3();
				if (x == 1)
				{
					return x;
				}

				cout << "PLAYER 2 [O] TURN : ";
				cin >> choice2_3;
				switch (choice2_3)
				{
				case 1:
					ar[0][0] = 'O';
					break;

				case 2:
					ar[0][1] = 'O';
					break;

				case 3:
					ar[0][2] = 'O';
					break;

				case 4:
					ar[1][0] = 'O';
					break;

				case 5:
					ar[1][1] = 'O';
					break;

				case 6:
					ar[1][2] = 'O';
					break;

				case 7:
					ar[2][0] = 'O';
					break;

				case 8:
					ar[2][1] = 'O';
					break;

				case 9:
					ar[2][2] = 'O';
					break;

				default:
					cout << "INVALID";
					break;
				}

				r = check_3();
				if (r == 0)
				{
					table_3();
				}
				else
				{
					cout << "\n\nINVALID CHOICE\n\n";
				}

				x = dec_3();
				if (x == 1)
				{
					return x;
				}

				cout << "PLAYER 1 [X] TURN : ";
				cin >> choice_3;
				switch (choice_3)
				{
				case 1:
					ar[0][0] = 'X';
					break;

				case 2:
					ar[0][1] = 'X';
					break;

				case 3:
					ar[0][2] = 'X';
					break;

				case 4:
					ar[1][0] = 'X';
					break;

				case 5:
					ar[1][1] = 'X';
					break;

				case 6:
					ar[1][2] = 'X';
					break;

				case 7:
					ar[2][0] = 'X';
					break;

				case 8:
					ar[2][1] = 'X';
					break;

				case 9:
					ar[2][2] = 'X';
					break;

				default:
					cout << "INVALID";
					break;
				}

				r = check_3();
				if (r == 0)
				{
					table_3();
				}
				else
				{
					cout << "\n\nINVALID CHOICE\n\n";
				}

				x = dec_3();
				if (x == 1)
				{
					return x;
				}
				else
				{
					for (int i = 0; i <= 2; i++)
					{
						for (int j = 0; j <= 2; j++)
						{
							arr[i][j] = ar[i][j];
						}
						cout << endl;
					}
					return 0;
				}
			}
		};

		class tat_4 : public tat_3
		{
			int choice, choice2, r1 = 0;

		public:
			void table_4()
			{

				cout << "\t\t\t     |     |     |\n";
				cout << "\t\t\t     |     |     |\n";
				cout << "\t\t\t" << arr[0][0] << "    |  " << arr[0][1] << "  |   " << arr[0][2] << " |   " << arr[0][3] << "     \n";
				cout << "\t\t\t     |     |     |\n";
				cout << "\t\t\t_____|_____|_____|_____\n";
				cout << "\t\t\t     |     |     |\n";
				cout << "\t\t\t     |     |     |\n";
				cout << "\t\t\t" << arr[1][0] << "    |  " << arr[1][1] << "  |   " << arr[1][2] << " |   " << arr[1][3] << "     \n";
				cout << "\t\t\t     |     |     |\n";
				cout << "\t\t\t_____|_____|_____|_____\n";
				cout << "\t\t\t     |     |     | \n";
				cout << "\t\t\t" << arr[2][0] << "    |  " << arr[2][1] << "  |   " << arr[2][2] << " |   " << arr[2][3] << "     \n";
				cout << "\t\t\t     |     |     |\n";
				cout << "\t\t\t_____|_____|_____|_____\n";
				cout << "\t\t\t     |     |     |\n";
				cout << "\t\t\t" << arr[3][0] << "    |  " << arr[3][1] << "  |   " << arr[3][2] << " |   " << arr[3][3] << "     \n";
				cout << "\t\t\t     |     |     |\n";
				cout << "\t\t\t     |     |     |\n";
			}

			int check()
			{
				if (choice == choice2)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}

			int dec_4()
			{

				if ((arr[0][0] == 'X') && (arr[0][1] == 'X') && (arr[0][2] == 'X') && (arr[0][3] == 'X'))
				{
					cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
					return 1;
				}

				else if ((arr[1][0] == 'X') && (arr[1][1] == 'X') && (arr[1][2] == 'X') && (arr[1][3] == 'X'))
				{
					cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
					return 1;
				}

				else if ((arr[2][0] == 'X') && (arr[2][1] == 'X') && (arr[2][2] == 'X') && (arr[2][3] == 'X'))
				{
					cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
					return 1;
				}
				else if ((arr[3][0] == 'X') && (arr[3][1] == 'X') && (arr[3][2] == 'X') && (arr[3][3] == 'X'))
				{
					cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
					return 1;
				}

				else if ((arr[0][0] == 'X') && (arr[1][0] == 'X') && (arr[2][0] == 'X') && (arr[3][0] == 'X'))
				{
					cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
					return 1;
				}

				else if ((arr[0][1] == 'X') && (arr[1][1] == 'X') && (arr[2][1] == 'X') && (arr[3][1] == 'X'))
				{
					cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
					return 1;
				}

				else if ((arr[0][2] == 'X') && (arr[1][2] == 'X') && (arr[2][2] == 'X') && (arr[3][2] == 'X'))
				{
					cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
					return 1;
				}

				else if ((arr[0][3] == 'X') && (arr[1][3] == 'X') && (arr[2][3] == 'X') && (arr[3][3] == 'X'))
				{
					cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
					return 1;
				}

				else if ((arr[0][0] == 'X') && (arr[1][1] == 'X') && (arr[2][2] == 'X') && (arr[3][3] == 'X'))
				{
					cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
					return 1;
				}

				else if ((arr[0][3] == 'X') && (arr[1][2] == 'X') && (arr[2][1] == 'X') && (arr[3][0] == 'X'))
				{
					cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
					return 1;
				}

				else if ((arr[0][0] == 'O') && (arr[0][1] == 'O') && (arr[0][2] == 'O') && (arr[0][3] == 'O'))
				{
					cout << "CONGRATULATIONS PLAYER 2 [O] WINS ";
					return 1;
				}

				else if ((arr[1][0] == 'O') && (arr[1][1] == 'O') && (arr[1][2] == 'O') && (arr[1][3] == 'O'))
				{
					cout << "CONGRATULATIONS PLAYER 2 [O] WINS ";
					return 1;
				}

				else if ((arr[2][0] == 'O') && (arr[2][1] == 'O') && (arr[2][2] == 'O') && (arr[2][3] == 'O'))
				{
					cout << "CONGRATULATIONS PLAYER 2 [O] WINS ";
					return 1;
				}
				else if ((arr[3][0] == 'O') && (arr[3][1] == 'O') && (arr[3][2] == 'O') && (arr[3][3] == 'O'))
				{
					cout << "CONGRATULATIONS PLAYER 2 [O] WINS ";
					return 1;
				}

				else if ((arr[0][0] == 'O') && (arr[1][0] == 'O') && (arr[2][0] == 'O') && (arr[3][0] == 'O'))
				{
					cout << "CONGRATULATIONS PLAYER 2 [O] WINS ";
					return 1;
				}

				else if ((arr[0][1] == 'O') && (arr[1][1] == 'O') && (arr[2][1] == 'O') && (arr[3][1] == 'O'))
				{
					cout << "CONGRATULATIONS PLAYER 2 [O] WINS ";
					return 1;
				}

				else if ((arr[0][2] == 'O') && (arr[1][2] == 'O') && (arr[2][2] == 'O') && (arr[3][2] == 'O'))
				{
					cout << "CONGRATULATIONS PLAYER 2 [O] WINS ";
					return 1;
				}

				else if ((arr[0][3] == 'O') && (arr[1][3] == 'O') && (arr[2][3] == 'O') && (arr[3][3] == 'O'))
				{
					cout << "CONGRATULATIONS PLAYER 2 [O] WINS ";
					return 1;
				}

				else if ((arr[0][0] == 'O') && (arr[1][1] == 'O') && (arr[2][2] == 'O') && (arr[3][3] == 'O'))
				{
					cout << "CONGRATULATIONS PLAYER 2 [O] WINS ";
					return 1;
				}

				else if ((arr[0][3] == 'O') && (arr[1][2] == 'O') && (arr[2][1] == 'O') && (arr[3][0] == 'O'))
				{
					cout << "CONGRATULATIONS PLAYER 2 [O] WINS ";
					return 1;
				}
				else
				{
					return 0;
				}
			}

			int tat_4_game()
			{
				int x = 0;

				table_4();

				cout << "PLAYER 1 [X] TURN : ";
				cin >> choice;
				switch (choice)
				{
				case 1:
					arr[0][3] = 'X';
					break;

				case 2:
					arr[1][3] = 'X';
					break;

				case 3:
					arr[2][3] = 'X';
					break;

				case 4:
					arr[3][0] = 'X';
					break;

				case 5:
					arr[3][1] = 'X';
					break;

				case 6:
					arr[3][2] = 'X';
					break;

				case 7:
					arr[3][3] = 'X';
					break;

				default:
					cout << "INVALID";
					break;
				}
				table_4();

				x = dec_4();
				if (x == 1)
				{
					return x;
				}

				cout << "PLAYER 2 [O] TURN : ";
				cin >> choice2;
				switch (choice2)
				{
				case 1:
					arr[0][3] = 'O';
					break;

				case 2:
					arr[1][3] = 'O';
					break;

				case 3:
					arr[2][3] = 'O';
					break;

				case 4:
					arr[3][0] = 'O';
					break;

				case 5:
					arr[3][1] = 'O';
					break;

				case 6:
					arr[3][2] = 'O';
					break;

				case 7:
					arr[3][3] = 'O';
					break;

				default:
					cout << "INVALID";
					break;
				}

				r1 = check();
				if (r1 == 0)
				{
					table_4();
				}
				else
				{
					cout << "\n\nINVALID CHOICE\n\n";
				}

				x = dec_4();
				if (x == 1)
				{
					return x;
				}

				cout << "PLAYER 1 [X] TURN : ";
				cin >> choice;
				switch (choice)
				{
				case 1:
					arr[0][3] = 'X';
					break;

				case 2:
					arr[1][3] = 'X';
					break;

				case 3:
					arr[2][3] = 'X';
					break;

				case 4:
					arr[3][0] = 'X';
					break;

				case 5:
					arr[3][1] = 'X';
					break;

				case 6:
					arr[3][2] = 'X';
					break;

				case 7:
					arr[3][3] = 'X';
					break;

				default:
					cout << "INVALID";
					break;
				}
				r1 = check();
				if (r1 == 0)
				{
					table_4();
				}
				else
				{
					cout << "\n\nINVALID CHOICE\n\n";
				}

				x = dec_4();
				if (x == 1)
				{
					return x;
				}

				cout << "PLAYER 2 [O] TURN : ";
				cin >> choice2;
				switch (choice2)
				{
				case 1:
					arr[0][3] = 'O';
					break;

				case 2:
					arr[1][3] = 'O';
					break;

				case 3:
					arr[2][3] = 'O';
					break;

				case 4:
					arr[3][0] = 'O';
					break;

				case 5:
					arr[3][1] = 'O';
					break;

				case 6:
					arr[3][2] = 'O';
					break;

				case 7:
					arr[3][3] = 'O';
					break;

				default:
					cout << "INVALID";
					break;
				}
				r1 = check();
				if (r1 == 0)
				{
					table_4();
				}
				else
				{
					cout << "\n\nINVALID CHOICE\n\n";
				}

				x = dec_4();
				if (x == 1)
				{
					return x;
				}

				cout << "PLAYER 1 [X] TURN : ";
				cin >> choice;
				switch (choice)
				{
				case 1:
					arr[0][3] = 'X';
					break;

				case 2:
					arr[1][3] = 'X';
					break;

				case 3:
					arr[2][3] = 'X';
					break;

				case 4:
					arr[3][0] = 'X';
					break;

				case 5:
					arr[3][1] = 'X';
					break;

				case 6:
					arr[3][2] = 'X';
					break;

				case 7:
					arr[3][3] = 'X';
					break;

				default:
					cout << "INVALID";
					break;
				}
				r1 = check();
				if (r1 == 0)
				{
					table_4();
				}
				else
				{
					cout << "\n\nINVALID CHOICE\n\n";
				}

				x = dec_4();
				if (x == 1)
				{
					return x;
				}

				cout << "PLAYER 2 [O] TURN : ";
				cin >> choice2;
				switch (choice2)
				{
				case 1:
					arr[0][3] = 'O';
					break;

				case 2:
					arr[1][3] = 'O';
					break;

				case 3:
					arr[2][3] = 'O';
					break;

				case 4:
					arr[3][0] = 'O';
					break;

				case 5:
					arr[3][1] = 'O';
					break;

				case 6:
					arr[3][2] = 'O';
					break;

				case 7:
					arr[3][3] = 'O';
					break;

				default:
					cout << "INVALID";
					break;
				}
				r1 = check();
				if (r1 == 0)
				{
					table_4();
				}
				else
				{
					cout << "\n\nINVALID CHOICE\n\n";
				}

				x = dec_4();
				if (x == 1)
				{
					return x;
				}

				cout << "PLAYER 1 [X] TURN : ";
				cin >> choice;
				switch (choice)
				{
				case 1:
					arr[0][3] = 'X';
					break;

				case 2:
					arr[1][3] = 'X';
					break;

				case 3:
					arr[2][3] = 'X';
					break;

				case 4:
					arr[3][0] = 'X';
					break;

				case 5:
					arr[3][1] = 'X';
					break;

				case 6:
					arr[3][2] = 'X';
					break;

				case 7:
					arr[3][3] = 'X';
					break;

				default:
					cout << "INVALID";
					break;
				}
				r1 = check();
				if (r1 == 0)
				{
					table_4();
				}
				else
				{
					cout << "\n\nINVALID CHOICE\n\n";
				}

				x = dec_4();
				if (x == 1)
				{
					return x;
				}
				else
				{
					return 0;
				}
			}
		};

		int main()
		{

			int y = 0, z = 0;
			char ar[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
			cout << "\t\t\t     TIC- TAC-TOE\n\n\n\n";
			cout << "\t\tPLAYER 1 [X]\t\tPLAYER 2  [O]\n\n";
			tat_3 t;
			t.table_3();
			y = t.game();
			if (y == 0)
			{
				cout << "SO 3x3 MATCH WAS DRAW TRY 4x4 NOW\n";
				tat_4 ta;
				z = ta.tat_4_game();
				if (z == 0)
				{
					cout << "\n\n4X4 MATCH DRAW";
				}
			}
		}

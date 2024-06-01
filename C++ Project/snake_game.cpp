#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

enum Direction{STOP =0, LEFT, RIGHT, UP, DOWN};
Direction dir;
bool gameOver;
const int height = 20;
const int width = 20;
int headX, headY, fruitX, fruitY, score;
int tailX[100], tailY[100];
int tail_len;

void setup();
void draw();
void input();
void logic();

int main()
{
	char start;
	cout << "\t_____________________________________" <<endl;
	cout << "\t\t :Snake King: " << endl;
	cout << "\t_____________________________________" <<endl;
	cout << "Press 's' to start: " ;
	cin >> start;
	
	if( start == 's')
	{
		setup();
		while (!gameOver)
		{
			draw();
			input();
			logic();
			Sleep(30);
			system("cls");
		}
	}
	return 0;
}

void setup()
{
	gameOver = false;
	dir = STOP;
	headX = width/2;
	headY = height/2;
	fruitX = rand()%width;
	fruitY = rand()%height;
	score = 0;
}

void draw()
{
    system("cls");

    // UPPER BORDER
    cout << "\t\t";

    for (int i = 0; i < width; i++)
    {
        cout << "||";
    }
    cout << endl;

    // SNAKE, FRUIT, SPACE, AND SIDE BORDERS
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            // LEFT BOREDR
            if (j == 0)
            {
                cout << "\t\t||";
            }

            // SNAKE HEAD
            if (i == headY && j == headX)
            {
                cout << "O";
            }

            // FRUIT
            else if (i == fruitY && j == fruitX)
            {
                cout << "*";
            }

            // SPACE, SNAKE TAIL
            else
            {
                bool print = false;

                // TAIL
                for (int k = 0; k < tail_len; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }

                // space
                if (!print)
                {
                    cout << " ";
                }
            }

            // RIGHT BORDER
            if (j == width - 1)
            {
                cout << "||";
            }
        }
        cout << endl;
    }

    // LOWER BORDER
    cout << "\t\t";
    for (int i = 0; i < width - 8; i++)
    {
        cout << "||";
    }
    cout << endl;
    cout << "\t\tScore: " << score << endl; // Display the actual score value
}


void input()
{
	if (_kbhit())
	switch (getch())
	{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		default :
			break;				
	}
}

void logic()
{
	
	//TAIL LOGIC
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = headX;
	tailY[0] = headY;
	
	for ( int i = 1 ; i < tail_len ; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	
	//DIRECTION LOGIC
	switch (dir)
	{
		case LEFT:
			headX--;
			break;
		case RIGHT:
			headX++;
			break;
		case UP:
			headY--;
			break;
		case DOWN:
			headY++;
			break;
		default:
			break;				
	}
	
	//TOUCH WALLS
	if ( headX >= width )
	{
		headX = 0;
	}
	else if ( headX < 0 )
	{
		headX = width-1;
	}
	if ( headY >= width )
	{
		headY = 0;
	}
	else if ( headY < 0 )
	{
		headY = width-1;
	}
	
	//SNAKE BITES ITSELF
	for ( int i = 0 ; i < tail_len ; i++ )
	{
		if ( tailX[i] == headX && tailY[i] == headY )
		{
			gameOver = true;
		}
	}
	
	//SNAKE EAT FRUIT
	if ( headX == fruitX && headY == fruitY )
	{
		score += 10;
		fruitX = rand()%width;
		fruitY = rand()%height;
		tail_len++;
	}
}


//void draw()
//{
//	system("cls");
//	
//	//UPPER BORDER
//	cout << "\t\t";
//	
//	for ( int i = 0 ; i < width ; i++ )
//	{
//		cout << "||";
//	}
//	cout << endl;
//	
//	//SNAKE, FRUIT, SPACE, AND SIDE BORDERS
//	for ( int i = 0 ; i < height ; i++ )
//	{
//		for ( int j = 0 ; j < width ; j++ )
//		{
//			
//			//LEFT BOREDR
//			if ( j == 0)
//			{
//				cout << "\t\t||";
//			}
//			
//			//SNAKE HEAD
//			if ( i == headY && j == headX)
//			{
//				cout << "O";
//			}
//			
//			//FRUIT
//			else if ( i == fruitY && j == fruitX )
//			{
//				cout << "*";
//			}
//			
//			//SPACE, SNAKE TAIL
//			else
//			{
//				bool print = false;
//				
//				//TAIL
//				for ( int k = 0 ; k < tail_len ; k++)
//				{
//					if (tailX[k] == j && tailY[k] == i)
//					{
//						cout << "o";
//						print = true;
//					}
//				}
//				
//				//space
//				if (!print)
//				{
//					cout << " ";
//				}
//			}
//			
//			//RIGHT BORDER
//			if ( j == width-1)
//			{
//				cout << "||";
//			}
//		}
//		cout << endl;
//	}
//	
//	//LOWER BORDER
//	cout << "\t\t";
//	for ( int i = 0 ; i < width-8 ; i++ )
//	{
//		cout << "||";
//	}
//	cout << endl;
//	cout << "\t\tScore: " << endl;
//}

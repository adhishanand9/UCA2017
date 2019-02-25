#include <bits/stdc++.h>
#include <conio.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
using namespace std;
void turn_snake(char);
char board[20][80];
int temp1, temp2, row, col, len = 4;
struct food
{
    int x, y;
    char value;
};
struct snake
{
    int a, b;
    char value;
};
vector<struct snake> v{4};
struct food f;
void create_board()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            if (i == 0 || i == 19)
                board[i][j] = '-';
            else if (i != 0 && i != 19 && j == 0 || j == 79)
                board[i][j] = '|';
            else
                board[i][j] = ' ';
        }
    }
}
void print_snake_on_board(int j, int k)
{
    for (int i = 0; i < 4; i++)
    {
        v[i].a = j;
        v[i].b = k;
        if (i == 0)
            v[i].value = '0';
        else if (i == 3)
            v[i].value = 'o';
        else
            v[i].value = 'o';
        board[v[i].a][v[i].b] = v[i].value;
        k++;
    }
}
void print_food_on_board()
{
    srand(time(0));
    f.x = rand() % 20;
    f.y = rand() % 80;
    if (f.x == 0 || f.x == 19 || f.y == 0 || f.y == 79)
    {
        print_food_on_board();
    }
    else
    {
        f.value = 'x';
        board[f.x][f.y] = f.value;
    }
}
void change_snake_postion(char ch)
{
    switch (ch)
    {
    case KEY_UP:
        turn_snake(ch);
        break;
    case KEY_DOWN:
        turn_snake(ch);
        break;
    case KEY_LEFT:
        turn_snake(ch);
        break;
    case KEY_RIGHT:
        turn_snake(ch);
        break;
    }
}
void turn_snake(char ch)
{
    int pos, flag = 0;
    temp1 = v[0].a;
    temp2 = v[0].b;
    if (ch == KEY_LEFT)
    {
        pos = 1;
        if (board[v[0].a][v[0].b - 1] == 'x')
        {
            flag = 1;
            print_food_on_board();
        }
        if (board[v[0].a][v[0].b - 1] == 'o')
        {
            cout << "Game Over\n";
            getch();
            exit(0);
        }
        if (v[0].b == 1)
            v[0].b = 78;
        else
            v[0].b = v[0].b - 1;
        board[v[0].a][v[0].b] = v[0].value;
    }
    if (ch == KEY_UP)
    {
        pos = 2;
        if (board[v[0].a - 1][v[0].b] == 'x')
        {
            flag = 1;
            print_food_on_board();
        }
        if (board[v[0].a - 1][v[0].b] == 'o')
        {
            cout << "Game Over\n";
            getch();
            exit(0);
        }
        if (v[0].a == 1)
            v[0].a = 18;
        else
            v[0].a = v[0].a - 1;
        board[v[0].a][v[0].b] = v[0].value;
    }
    if (ch == KEY_DOWN)
    {
        pos = 3;
        if (board[v[0].a + 1][v[0].b] == 'x')
        {
            flag = 1;
            print_food_on_board();
        }
        if (board[v[0].a + 1][v[0].b] == 'o')
        {
            cout << "Game Over\n";
            getch();
            exit(0);
        }
        if (v[0].a == 18)
            v[0].a = 1;
        else
            v[0].a = v[0].a + 1;
        board[v[0].a][v[0].b] = v[0].value;
    }
    if (ch == KEY_RIGHT)
    {
        pos = 4;
        if (board[v[0].a][v[0].b + 1] == 'x')
        {
            flag = 1;
            print_food_on_board();
        }
        if (board[v[0].a][v[0].b + 1] == 'o')
        {
            cout << "Game Over\n";
            getch();
            exit(0);
        }
        if (v[0].b == 78)
            v[0].b = 1;
        else
            v[0].b = v[0].b + 1;
        board[v[0].a][v[0].b] = v[0].value;
    }
    for (int i = 1; i < len; i++)
    {
        row = v[i].a;
        col = v[i].b;
        v[i].a = temp1;
        v[i].b = temp2;
        temp1 = row;
        temp2 = col;
        board[v[i].a][v[i].b] = v[i].value;
    }
    if (flag == 0)
        board[row][col] = ' ';
    else
    {
        struct snake s;
        s.a = row;
        s.b = col;
        s.value = 'o';
        v.push_back(s);
        len++;
    }
}

void refresh_board()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 80; j++)
            cout << board[i][j];
        cout << endl;
    }
}
int main()
{
    char ch;
    create_board();
    print_snake_on_board(10, 40);
    print_food_on_board();
    refresh_board();
    cout << "Press any button to start:\n";
    cout << "<- Left       ->Right       Up        Down\n";
    ch = getch();
    while (ch)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
        system("CLS");
        refresh_board();
        change_snake_postion(ch);
        cout << "<- Left       ->Right       Up        Down\n";
        if (kbhit())
        {
            ch = getch();
            change_snake_postion(ch);
        }
    }
    return 0;
}

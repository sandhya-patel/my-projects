#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

/*Function definition for setting cursor position in the console
window*/
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    char yes_or_no;
    do
    {
        system("cls");
        int number, n, m, k, l, p, guess, nguesses = 1, uguesses = 1, sguesses = 1, rguesses = 1;
        int star;
        srand(time(0));
        number = rand() % 100 + 1;
        k = rand() % 100 + 1;
        m = rand() % 100 + 1;
        l = rand() % 100 + 1;
        p = rand() % 100 + 1;
        printf("enter the number of player \n ");
        printf("1 player \n 2 players \n 3 players \n 4 players \n   ");
        scanf("%d", &n);

        if (n == 1)
        {
            printf("------1st player is playing----------\n ");

            // printf("the number is %d", number);

            do
            {
                printf("guess the number between 1 to 100  \n ");
                scanf("%d", &guess);

                if (guess > number)
                {
                    printf(" lower number please!  ");
                }

                else if (guess < number)
                {
                    printf("higher number please!   ");
                }
                else
                {
                    printf(" 1st player guessed it in %d attempts : ", nguesses);
                }
                nguesses++;
                printf("\n");

            } while (guess != number);

            printf("\n------------GAME IS OVER---------------\n \n");
        }

        if (n == 2)
        {

            printf("------ 1st player is playing----------\n ");
            // printf("the number is %d", k);

            do
            {
                printf("guess the number between 1 to 100  \n ");
                scanf("%d", &guess);

                if (guess > k)
                {
                    printf(" lower number please!  ");
                }

                else if (guess < k)
                {
                    printf("higher number please!   ");
                }
                else
                {
                    printf("1st player guessed  it in %d attempts : ", nguesses);
                }
                nguesses++;
                printf("\n");

            } while (guess != k);

            printf("------ 2nd player is playing----------\n ");

            // printf("the number is %d", m);

            do
            {
                printf("guess the number between 1 to 100  \n ");
                scanf("%d", &guess);

                if (guess > m)
                {
                    printf(" lower number please!  ");
                }

                else if (guess < m)
                {
                    printf("higher number please!   ");
                }
                else
                {
                    printf("2nd guessed it in %d attempts :\n ", uguesses);
                }
                uguesses++;
                printf("\n");

            } while (guess != m);

            if (nguesses > uguesses)
            {

                printf("2nd player is winner\n");
            }
            else if (nguesses < uguesses)
            {

                printf("1st player is winner \n");
            }
            else
            {
                printf(" game is tie ");
            }
            printf("-------------GAME IS OVER-----------------\n ");
        }

        if (n == 3)
        {

            printf("------ 1st player is playing----------\n ");

            // printf("the number is %d", k);

            do
            {
                printf("guess the number between 1 to 100  \n ");
                scanf("%d", &guess);

                if (guess > k)
                {
                    printf(" lower number please!  ");
                }

                else if (guess < k)
                {
                    printf("higher number please!   ");
                }
                else
                {
                    printf("1st player guessed  it in %d attempts : ", nguesses);
                }
                nguesses++;
                printf("\n");

            } while (guess != k);

            printf("------ 2nd player is playing----------\n ");

            // printf("the number is %d", m);

            do
            {
                printf("guess the number between 1 to 100  \n ");
                scanf("%d", &guess);

                if (guess > m)
                {
                    printf(" lower number please!  ");
                }

                else if (guess < m)
                {
                    printf("higher number please !  ");
                }
                else
                {
                    printf("2nd guessed it in %d attempts :\n ", uguesses);
                }
                uguesses++;
                printf("\n");

            } while (guess != m);
            printf(" 3rd player is playing\n ");

            // printf("the number is %d", l);

            do
            {
                printf("guess the number between 1 to 100  \n ");
                scanf("%d", &guess);

                if (guess > l)
                {
                    printf(" lower number please!  ");
                }

                else if (guess < l)
                {
                    printf("higher number please!   ");
                }
                else
                {
                    printf("2nd guessed it in %d attempts :\n ", sguesses);
                }
                sguesses++;
                printf("\n");

            } while (guess != l);

            if (nguesses < uguesses && nguesses < sguesses)
            {

                printf("1st player is winner\n");
            }
            else if (uguesses < nguesses && uguesses < sguesses)
            {

                printf("2nd player is winner\n");
            }
            else if (sguesses < nguesses && sguesses < nguesses)
            {

                printf("3rd player is winner\n");
            }
            else if (nguesses == uguesses && sguesses == nguesses)
            {

                printf("game is tie\n");
            }
            else if (nguesses == uguesses)
            {

                printf("game is tie between 1st & 2nd player\n");
            }
            else if (nguesses == sguesses)
            {

                printf("game is tie between 1st & 3rd player\n");
            }

            else if (uguesses == sguesses)
            {

                printf("game is tie between 2nd & 3rd player\n");
            }
            printf("\n");
            printf("\n");
            printf("-----------------GAME IS OVER--------------------\n");
        }

        if (n == 4)
        {

            printf("-------1st player is playing-----------\n ");

            // printf("the number is %d", k);

            do
            {
                printf("guess the number between 1 to 100  \n ");
                scanf("%d", &guess);

                if (guess > k)
                {
                    printf(" lower number please!  ");
                }

                else if (guess < k)
                {
                    printf("higher number please!   ");
                }
                else
                {
                    printf("1st player guessed  it in %d attempts : ", nguesses);
                }
                nguesses++;
                printf("\n");

            } while (guess != k);

            printf(" -----2nd player is playing------\n ");

            // printf("the number is %d", m);

            do
            {
                printf("guess the number between 1 to 100  \n ");
                scanf("%d", &guess);

                if (guess > m)
                {
                    printf(" lower number please!  ");
                }

                else if (guess < m)
                {
                    printf("higher number please!   ");
                }
                else
                {
                    printf("2nd guessed it in %d attempts :\n ", uguesses);
                }
                uguesses++;
                printf("\n");

            } while (guess != m);
            printf("------3rd player is playing---------\n ");

            // printf("the number is %d", l);

            do
            {
                printf("guess the number between 1 to 100  \n ");
                scanf("%d", &guess);

                if (guess > l)
                {
                    printf(" lower number please!  ");
                }

                else if (guess < l)
                {
                    printf("higher number please!   ");
                }
                else
                {
                    printf("2nd guessed it in %d attempts :\n ", sguesses);
                }
                sguesses++;
                printf("\n");

            } while (guess != l);
            printf("---------- 4th player is playing-------------\n ");

            //  printf("the number is %d", p);

            do
            {
                printf("guess the number between 1 to 100  \n ");
                scanf("%d", &guess);

                if (guess > p)
                {
                    printf(" lower number please!  ");
                }

                else if (guess < p)
                {
                    printf("higher number please!   ");
                }
                else
                {
                    printf("2nd guessed it in %d attempts :\n ", rguesses);
                }
                rguesses++;
                printf("\n");

            } while (guess != p);

            if (nguesses < uguesses && nguesses < sguesses && nguesses < rguesses)
            {

                printf("1st player is winner\n");
            }
            else if (uguesses < nguesses && uguesses < sguesses && uguesses < rguesses)
            {

                printf("2nd player is winner\n");
            }
            else if (sguesses < nguesses && sguesses < uguesses && sguesses < rguesses)
            {

                printf("3rd player is winner\n");
            }
            else if (rguesses < nguesses && rguesses < uguesses && rguesses < sguesses)
            {

                printf("4th player is winner\n");
            }
            else if (nguesses == uguesses && nguesses == sguesses && nguesses == rguesses)
            {

                printf("game is tie\n");
            }
            else if (nguesses == uguesses)
            {

                printf("game is tie between 1st & 2nd player\n");
            }
            else if (nguesses == sguesses)
            {

                printf("game is tie between 1st & 3rd player\n");
            }
            else if (nguesses == rguesses)
            {

                printf("game is tie between 1st & 4th player\n");
            }

            else if (uguesses == sguesses)
            {

                printf("game is tie between 2nd & 3rd player\n");
            }
            else if (uguesses == rguesses)
            {

                printf("game is tie between 2nd & 4th player\n");
            }
            else if (sguesses == rguesses)
            {

                printf("game is tie between 3rd & 4th player\n");
            }
            printf("\n");
            printf("\n");
            printf("-----------------GAME IS OVER--------------------\n \n");
        }

        printf("DO YOU ENJOY THIS GAME\n");
        printf("IF YES, HOW MUCH STARS GIVE ME ??.....\n");

        printf(" * * * * *\n ");
        scanf("%d", &star);
        if (star >= 4)
        {
            printf("EXCELLENT \n");
        }
        else if (star == 2 || star == 3)
        {
            printf("GOOD \n");
        }
        else if (star == 1)
        {
            printf("NOT_BAD \n");
        }

        printf("DO YOU WANT PLAY AGAIN (y/n) \n");
        scanf("%s", &yes_or_no);
        if (yes_or_no == 'y')
        {
            system("cls");
        }
        else
        {
            printf("\n");
            printf("\n");
            printf("----------------------THANK_YOU----------------------");
            printf("\n");
            printf("\n");
            printf("\n");
        }
    } while (yes_or_no != 'n');

    return 0;
}

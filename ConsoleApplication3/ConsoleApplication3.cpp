// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define RAND_MAX 256
#define N 5


void litery();
void liczby();

int main()
{
	printf("\nJesli chcesz sortowac litery wpisz 1, jesli liczby 2 a slowa wcisnij 3 ");
	int a;
	scanf_s("%i", &a);


	switch (a)
	{
	case 1:
		litery();
		_getch();
		break;
	case 2:
		liczby();
		_getch();
		break;
	case 3:
		//slowa();
		_getch();
		break;

	default: printf("\nNiepoprawne dane");
		break;
	}


	return 0;
}

void litery()
{
	int a;
	char tab[N];

	printf("\nJesli chcesz wpisywac litery wcisnij 1, jesli chcesz losowe litery wpisz 2");
	scanf_s("%i", &a);

	switch (a)
	{
	case 1:
		for (int i = 0; i <N; i++)
		{
			printf("\nPodaj znak nr %i lub wcisnij 0 aby wyjsc", i);
			char b;
			scanf_s(" %c", &b);

			if (b = 0)
			{
				break;
			}
			else
			{
				tab[i] = b;
			}
		}
		printf("\nKoniec zapisu");

		printf("\nZapisane symbole");
		for (int i = 0; i < 20; i++)
		{
			printf(" %c", tab[i]);
		}
		break;

	case 2:
		srand(time(NULL));
		for (int i = 0; i < 20; i++)
		{
			tab[i] = rand();
			printf("  %c", tab[i]);
		}
		printf("\nKoniec zapisu");

		printf("\nZapisane symbole");
		for (int i = 0; i < 20; i++)
		{
			printf(" %c", tab[i]);
		}		

		break;

	default:
		printf("\nNiepoprawny znak!");
		litery();
		break;
	}
	
}

void liczby()
{
	int a;
	int tab[N];

	printf("\nJesli chcesz wpisywac liczby wcisnij 1, jesli chcesz losowe liczby wpisz 2");
	scanf_s("%i", &a);

	switch (a)
	{
	case 1:
		for (int i = 0; i <N; i++)
		{
			printf("\nPodaj znak nr %i lub wcisnij -0 aby wyjsc", i);
			int b;
			scanf_s(" %i", &b);

			if (b == -0)
			{
				break;
			}
			else
			{
				tab[i] = b;
			}
		}
		printf("\nKoniec zapisu");

		printf("\nZapisane symbole");
		for (int i = 0; i < 20; i++)
		{
			printf(" %i", tab[i]);
		}
		_getch();
		break;

	case 2:
		srand(time(NULL));
		for (int i = 0; i < 20; i++)
		{
			tab[i] = rand();
			printf("  %i", tab[i]);
		}
		printf("\nKoniec zapisu");

		printf("\nZapisane symbole");
		for (int i = 0; i < 20; i++)
		{
			printf(" %i", tab[i]);
		}
		_getch();
		break;

	default:
		printf("\nNiepoprawny znak!");
		liczby();
		break;
	}

}

/*void slowa()
{
	int a;
	char tab[N];

	printf("\nJesli chcesz wpisywac litery wcisnij 1, jesli chcesz losowe litery wpisz 2");
	scanf_s("%i", &a);

	switch (a)
	{
	case 1:
		for (int i = 0; i <N; i++)
		{
			printf("\nPodaj znak nr %i lub wcisnij 0 aby wyjsc", i);
			char b;
			scanf_s(" %c", &b);

			if (b = 0)
			{
				break;
			}
			else
			{
				tab[i] = a;
			}
		}
		printf("\nKoniec zapisu");

		printf("\nZapisane symbole");
		for (int i = 0; i < 20; i++)
		{
			printf(" %c", tab[i]);
		}
		break;

	case 2:
		srand(time(NULL));
		for (int i = 0; i < 20; i++)
		{
			tab[i] = rand();
			printf("  %c", tab[i]);
		}
		printf("\nKoniec zapisu");

		printf("\nZapisane symbole");
		for (int i = 0; i < 20; i++)
		{
			printf(" %c", tab[i]);
		}

		break;

	default:
		printf("\nNiepoprawny znak!");
		litery();
		break;
	}

}*/
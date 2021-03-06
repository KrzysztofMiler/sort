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
int metsort(int tab[],int wypis);
void HeapSort(int *A);
void BuildHeap(int* A, int heapSize);
void Heapify(int* A, int i, int heapSize);
void quicksort(int number[N], int first, int last);
void Bucket_Sort(int array[]);

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
	int tab[N];

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

			if (b == '0')
			{
				printf("\nWpisano 0");
				break;
			}
			else
			{
				tab[i] = b;
			}
		}
		printf("\nKoniec zapisu");

		printf("\nZapisane symbole");
		for (int i = 0; i < N; i++)
		{
			printf(" %c", tab[i]);
		}
		break;

	case 2:
		srand(time(NULL));
		for (int i = 0; i < N; i++)
		{
			tab[i] = rand();
			printf("  %c", tab[i]);
		}
		printf("\nKoniec zapisu");

		printf("\nZapisane symbole");
		for (int i = 0; i < N; i++)
		{
			printf(" %c", tab[i]);
		}		

		break;

	default:
		printf("\nNiepoprawny znak!");
		litery();
		break;	
		
	}
	int wypis = 1; //oznaczenie że chodzi o litery
	metsort(tab,wypis);
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
		for (int i = 0; i < N; i++)
		{
			printf(" %i", tab[i]);
		}
		
		break;

	case 2:
		srand(time(NULL));
		for (int i = 0; i < N; i++)
		{
			tab[i] = rand();
			printf("  %i", tab[i]);
		}
		printf("\nKoniec zapisu");

		printf("\nZapisane symbole");
		for (int i = 0; i < N; i++)
		{
			printf(" %i", tab[i]);
		}
		
		break;

	default:
		printf("\nNiepoprawny znak!");
		liczby();
		break;
	}

	int wypis = 2; //oznaczenie że chodzi o liczby
	metsort(tab, wypis);
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

int metsort(int tab[],int wypis)
{
	printf("\nWybierz metode sortowania: kopcowanie 1, quicksort 2, kubelkowe 3, na wielu listach 4");
	int c;
	scanf_s("%i", &c);
	switch (c)
	{
	case 1:
		 HeapSort(tab);

		if(wypis == 1)//wypis 1 oznacza litery
		{
			printf("\nWynik sortowania kopcowego \n");
			for (int i = 0; i < N; i++)
			{
				printf(" %c ", tab[i]);
			}
				
		}
		if (wypis == 2)//wypis 2 oznacza inty
		{
			printf("\nWynik sortowania kopcowego \n");
			for (int i = 0; i < N; i++)
			{
				printf(" %i ", tab[i]);
			}
		}

		break;
	case 2:
		quicksort(tab, 0, N - 1);

		if (wypis == 1)//wypis 1 oznacza litery
		{
			printf("\nWynik sortowania quicksort \n");
			for (int i = 0; i < N; i++)
			{
				printf(" %c ", tab[i]);
			}

		}
		if (wypis == 2)//wypis 2 oznacza inty
		{
			printf("\nWynik sortowania quicksort  \n");
			for (int i = 0; i < N; i++)
			{
				printf(" %i ", tab[i]);
			}
		}

		break;
	case 3:
		Bucket_Sort(tab);

		if (wypis == 1)//wypis 1 oznacza litery
		{
			printf("\nWynik sortowania quicksort \n");
			for (int i = 0; i < N; i++)
			{
				printf(" %c ", tab[i]);
			}

		}
		if (wypis == 2)//wypis 2 oznacza inty
		{
			printf("\nWynik sortowania quicksort  \n");
			for (int i = 0; i < N; i++)
			{
				printf(" %i ", tab[i]);
			}
		}
		break;
	case 4:
		break;
	default:
		printf("\nNiepoprawny znak!");
		break;
	}


	return 0;
}




void Heapify(int* A, int i,int heapSize)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int largest;

	if (l <= heapSize && A[l] > A[i])
		largest = l;
	else
		largest = i;
	if (r <= heapSize && A[r] > A[largest])
		largest = r;
	if (largest != i)
	{
		int temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		Heapify(A, largest,heapSize);
	}
}

void BuildHeap(int* A,int heapSize)
{
	
	int i;
	for (i = (N - 1) / 2; i >= 0; i--)
		Heapify(A, i,heapSize);
}

void HeapSort(int* A)
{
	int heapSize = N - 1;
	BuildHeap(A,heapSize);
	int i;
	for (i = N - 1; i > 0; i--)
	{
		int temp = A[heapSize];
		A[heapSize] = A[0];
		A[0] = temp;
		heapSize--;
		Heapify(A, 0,heapSize);
	}
}


void quicksort(int number[N], int first, int last)
{
	int i, j, pivot, temp;

	if (first<last) {
		pivot = first;
		i = first;
		j = last;

		while (i<j) {
			while (number[i] <= number[pivot] && i<last)
				i++;
			while (number[j]>number[pivot])
				j--;
			if (i<j) {
				temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}

		temp = number[pivot];
		number[pivot] = number[j];
		number[j] = temp;
		quicksort(number, first, j - 1);
		quicksort(number, j + 1, last);

	}
}

void Bucket_Sort(int array[])
{
	int i, j;
	int count[N];
	for (i = 0; i < N; i++)
	{
		count[i] = 0;
	}
	for (i = 0; i < N; i++)
	{
		(count[array[i]])++; //powoduje błędy
	}
	for (i = 0, j = 0; i < N; i++)
	{
		for (; count[i]>0; (count[i])--)
		{
			array[j++] = i;
		}
	}
}
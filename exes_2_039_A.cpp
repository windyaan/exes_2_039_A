#include <iostream>
using namespace std;


int Windya[35];	//Array
int n;			//jumlah elements dalam array
int i;			//Index array element

void input()
{
	while (true)
	{
		cout << "Masukkan jumlah array: ";
		cin >> n;
		if ((n > 0) && (n <= 35))
			break;
		else
			cout << "\nArray harus memiliki minimum 1 and maksimal 35 element.\n\n";
	}

	cout << "\n----------------------\n";
	cout << "Masukkan jumlah array \n";
	cout << "\n----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> Windya[i];
	}
}

//set lowerbound, upperbound, mid
void exercise(int lowerbound, int upperbound, int mid) 
{
	//Accept the element to be searched
	cout << "\nEnter the element you want to search: ";	//langkah1
	int item;
	cin >> item;

	int l, u, m;		//langkah 2-4
	{
		l = 0;
		u = n - 1;
		m = (l + u) / 2;

		while (l <= u) //langkah8
		{
			while (Windya[m] = item) { //langkah 5
				cout << "Found" << endl;
			}

			if (item < Windya[m]) { //langkah 6
				u = m - 1;
			}
		}

		if (item > Windya[m]) { //langkah 7
			u = m + 1;
		}
	}
	cout << "Not Found" << endl;
}

int main()
{
	input();
	exercise();
	system("pause");
	return 0;
}
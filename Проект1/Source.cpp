#include <iostream>;
#include <fstream>;

using namespace std;

int main() {
	int a[20] = { 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1 }; 
	ofstream f;
	f.open("F:\C++Y.txt");
	for (int i = 0; i <= 8; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			if ((a[j]==1)&&(a[j+1]==0))
			{
				a[j] = 0;
				a[j + 1] = 1;
				j++;
			}
		}
		for (int x = 0; x <= 19; x++) {
			f << a[x];
		}
		f << endl;
	}
	f.close();
	system("pause");
}
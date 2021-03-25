#include <iostream>
using namespace std;

int check_mas(int N, int mas[])
{
    for (int i = 1; i < N; i++)
      { 
		  if (mas[i] < mas[i - 1])
	    {
            return(i);
            break;
        }
		else
		{
			return(0);
	
		}
	}
}

int main()
{
    setlocale( LC_ALL, "Rus");
    const int N = 6;
    int mas[N];
    cout << "¬ведите масcив длинной "<< N <<" : ";
    for (int i = 0; i < N; i++) {
        cin >> mas[i];
    }
    cout << check_mas(N,mas);
    system("pause");
}

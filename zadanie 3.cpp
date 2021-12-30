// ConsoleApplication32.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

void dec_to_bin(int liczba)
{
	int i = 0, tab[31];

	while (liczba) //
	{
		tab[i++] = liczba % 2;
		liczba /= 2;
	}

	for (int j = i - 1; j >= 0; j--)
		cout << tab[j];
}

int main()
{
	int liczba;

	cout << "Podaj liczbe: ";
	cin >> liczba;

	cout << liczba << " po zamianie na postac binarna: ";
	dec_to_bin(liczba);
	cout << endl;

	return 0;
}
	




// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

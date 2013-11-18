#include <iostream>
using namespace std;
struct LISTA {
	char etun[20];
	char sukun[20];
	int koulumatka;
	char osoite[30];
	int postinro;
	int kengannumero;
} lista1, lista2={"Jesse", "Noppa", 15, "Seponkuja 2", 10000, 43}, lista3={"Mika", "Järvi", 1200, "Kuutamokuja 33", 70256, 37};
int main()
{
	const int MAX_TAULU = 3;
	int i = 0;
	int j = 0;
	cout << "Anna etu- ja sukunimesi"<<endl;
	cin >> lista1.etun>>ws>>lista1.sukun;
	cout << "kuinka pitkä koulumatka sinulla on(kilometreinä)?"<<endl;
	cin >>lista1.koulumatka;
	cout << "Mikä on osoitteesi?"<<endl;
	cin>>ws;
	cin.getline(lista1.osoite,29);
	cout <<"Entä postinumerosi?"<<endl;
	cin>>ws;
	cin>>lista1.postinro;
	cout<<"Ja kengännumerosi?"<<endl;
	cin >> lista1.kengannumero;
	int taulu[MAX_TAULU] = {lista1.koulumatka, lista2.koulumatka, lista3.koulumatka};
	int taulu1[MAX_TAULU] = {lista1.koulumatka, lista3.koulumatka, lista2.koulumatka};
	int taulu2[MAX_TAULU] = {lista2.koulumatka, lista1.koulumatka, lista3.koulumatka};
	int taulu3[MAX_TAULU] = {lista3.koulumatka, lista2.koulumatka, lista1.koulumatka};
	int taulu4[MAX_TAULU] = {lista3.koulumatka, lista1.koulumatka, lista2.koulumatka};
	int taulu5[MAX_TAULU] = {lista2.koulumatka, lista3.koulumatka, lista1.koulumatka};
	int taulu6[MAX_TAULU] = {lista1.koulumatka, lista2.koulumatka, lista3.koulumatka};

	for(i = 0; i < MAX_TAULU-1; i++)
	{
		for(j = i + 1; j < MAX_TAULU; j++)
		{
			if (taulu[j]<taulu[i])
			{
				int apu = taulu[i];
				taulu[i] = taulu[j];
				taulu[j] = apu;
			}
		}
	}
	if (taulu[0] == taulu1[0]&&taulu[1] == taulu1[1]&&taulu[2] == taulu1[2])
	{
			cout<<"Tietosi"<<endl<<lista1.etun<<" "<<lista1.sukun<<endl<<"Koulumatkan pituus "<<lista1.koulumatka<<" km"<<endl<<lista1.osoite<<endl<<lista1.postinro<<endl<<"Kengannumerosi "<<lista1.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista3.etun<<" "<<lista3.sukun<<endl<<"Koulumatkan pituus "<<lista3.koulumatka<<" km"<<endl<<lista3.osoite<<endl<<lista3.postinro<<endl<<"Kengannumerosi "<<lista3.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista2.etun<<" "<<lista2.sukun<<endl<<"Koulumatkan pituus "<<lista2.koulumatka<<" km"<<endl<<lista2.osoite<<endl<<lista2.postinro<<endl<<"Kengannumerosi "<<lista2.kengannumero<<endl;
	}
	if (taulu[0] == taulu2[0]&&taulu[1] == taulu2[1]&&taulu[2] == taulu2[2])
	{
			cout<<"Tietosi"<<endl<<lista2.etun<<" "<<lista2.sukun<<endl<<"Koulumatkan pituus "<<lista2.koulumatka<<" km"<<endl<<lista2.osoite<<endl<<lista2.postinro<<endl<<"Kengannumerosi "<<lista2.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista1.etun<<" "<<lista1.sukun<<endl<<"Koulumatkan pituus "<<lista1.koulumatka<<" km"<<endl<<lista1.osoite<<endl<<lista1.postinro<<endl<<"Kengannumerosi "<<lista1.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista3.etun<<" "<<lista3.sukun<<endl<<"Koulumatkan pituus "<<lista3.koulumatka<<" km"<<endl<<lista3.osoite<<endl<<lista3.postinro<<endl<<"Kengannumerosi "<<lista3.kengannumero<<endl;
	}
	if (taulu[0] == taulu3[0]&&taulu[1] == taulu3[1]&&taulu[2] == taulu3[2])
	{
			cout<<"Tietosi"<<endl<<lista3.etun<<" "<<lista3.sukun<<endl<<"Koulumatkan pituus "<<lista3.koulumatka<<" km"<<endl<<lista3.osoite<<endl<<lista3.postinro<<endl<<"Kengannumerosi "<<lista3.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista2.etun<<" "<<lista2.sukun<<endl<<"Koulumatkan pituus "<<lista2.koulumatka<<" km"<<endl<<lista2.osoite<<endl<<lista2.postinro<<endl<<"Kengannumerosi "<<lista2.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista1.etun<<" "<<lista1.sukun<<endl<<"Koulumatkan pituus "<<lista1.koulumatka<<" km"<<endl<<lista1.osoite<<endl<<lista1.postinro<<endl<<"Kengannumerosi "<<lista1.kengannumero<<endl;
	}
	if (taulu[0] == taulu4[0]&&taulu[1] == taulu4[1]&&taulu[2] == taulu4[2])
	{
			cout<<"Tietosi"<<endl<<lista3.etun<<" "<<lista3.sukun<<endl<<"Koulumatkan pituus "<<lista3.koulumatka<<" km"<<endl<<lista3.osoite<<endl<<lista3.postinro<<endl<<"Kengannumerosi "<<lista3.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista1.etun<<" "<<lista1.sukun<<endl<<"Koulumatkan pituus "<<lista1.koulumatka<<" km"<<endl<<lista1.osoite<<endl<<lista1.postinro<<endl<<"Kengannumerosi "<<lista1.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista2.etun<<" "<<lista2.sukun<<endl<<"Koulumatkan pituus "<<lista2.koulumatka<<" km"<<endl<<lista2.osoite<<endl<<lista2.postinro<<endl<<"Kengannumerosi "<<lista2.kengannumero<<endl;
	}
	if (taulu[0] == taulu5[0]&&taulu[1] == taulu5[1]&&taulu[2] == taulu5[2])
	{
			cout<<"Tietosi"<<endl<<lista2.etun<<" "<<lista2.sukun<<endl<<"Koulumatkan pituus "<<lista2.koulumatka<<" km"<<endl<<lista2.osoite<<endl<<lista2.postinro<<endl<<"Kengannumerosi "<<lista2.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista3.etun<<" "<<lista3.sukun<<endl<<"Koulumatkan pituus "<<lista3.koulumatka<<" km"<<endl<<lista3.osoite<<endl<<lista3.postinro<<endl<<"Kengannumerosi "<<lista3.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista1.etun<<" "<<lista1.sukun<<endl<<"Koulumatkan pituus "<<lista1.koulumatka<<" km"<<endl<<lista1.osoite<<endl<<lista1.postinro<<endl<<"Kengannumerosi "<<lista1.kengannumero<<endl;
	}
	if (taulu[0] == taulu6[0]&&taulu[1] == taulu6[1]&&taulu[2] == taulu6[2])
	{
			cout<<"Tietosi"<<endl<<lista1.etun<<" "<<lista1.sukun<<endl<<"Koulumatkan pituus "<<lista1.koulumatka<<" km"<<endl<<lista1.osoite<<endl<<lista1.postinro<<endl<<"Kengannumerosi "<<lista1.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista2.etun<<" "<<lista2.sukun<<endl<<"Koulumatkan pituus "<<lista2.koulumatka<<" km"<<endl<<lista2.osoite<<endl<<lista2.postinro<<endl<<"Kengannumerosi "<<lista2.kengannumero<<endl;
			cout<<"Tietosi"<<endl<<lista3.etun<<" "<<lista3.sukun<<endl<<"Koulumatkan pituus "<<lista3.koulumatka<<" km"<<endl<<lista3.osoite<<endl<<lista3.postinro<<endl<<"Kengannumerosi "<<lista3.kengannumero<<endl;
	}



	return 0;
	
}
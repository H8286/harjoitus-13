/*Harjoitus 13
Sami Liimatainen
Versio 1.0
7.10.2014
IIO14S1

Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi naytölle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehdäksesi merkkijonojen yhdistämisen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA

Esimerkki
Anna etunimi: Aku
Anna sukunimi: Ankka
Nimesi oli: Aku Ankka
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char etunimi[40];
	char sukunimi[40];
	char kokonimi[45];

	cout << "Anna etunimesi";
	cin >> etunimi;

	cout << "Anna sukunimesi";
	cin >> sukunimi;

	strcpy_s(kokonimi,etunimi);
	strcat_s(kokonimi,sukunimi);

	cout <<kokonimi;

}
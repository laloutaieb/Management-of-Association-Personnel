#include <string>
#include "Employer.h"
using namespace std;
int main()
{
	cout << "enter details, to end enter 0:" << endl;
	/* pour cree une liste de fichier il ne 
	faut pas créé un liste infini de donnée mais toujours faire une 
	boucle infini tel que while true et cree une seul valeur qui va 
	evolue au fur et a mesur de l'entre des donne. Cependant dans notre cas 
	il faudra faire un systeme ou j'ai 3 valeur une valeur qui entre un max et 
	un min mais c'est le meme principe*/ 
	Employer A, B ,Max, Min;
	int a, b, c, d, e, f, g, h, i, j, k;
	char Nom[21];
	char Nom2[21];
	char Nom3[21];


	cin >> a;
	if (a == 0)
		return 0;
		A.setID(a);
		cin >> Nom;
		A.setName(Nom);
		cin >> b;
		A.setSalary(b); // le prix a lheur
		cin >> c;
		A.setHours(c); // le nombre dheur 
		cin >> d;
		A.setTotal(d); // Argent

		while (a < 0 || b < 0 || c < 0 || d < 0)
		{
			cout << "ERROR" << endl;
			cin >> a;
			if (a == 0)
				return 0;
			A.setID(a);
			cin >> Nom;
			A.setName(Nom);
			cin >> b;
			A.setSalary(b); // le prix a lheur
			cin >> c;
			A.setHours(c); // le nombre dheur 
			cin >> d;
			A.setTotal(d); // Argent
 
		}
	
	Max = A;
	Min = A; 
	
	while (true)
	{
		cin >> f;
		if (f == 0)
			break ;
		B.setID(f);
		cin >> Nom2;
		B.setName(Nom2);
		cin >> g;
		B.setSalary(g); // le prix a lheur
		cin >> h;
		B.setHours(h); // le nombre dheur 
		cin >> i;
		B.setTotal(i); // Argent 

		while (f < 0 || g < 0 || h < 0 || i < 0)
		{
			cout << "ERROR" << endl;
			cin >> f;
			if (f == 0)
				break;
			B.setID(f);
			cin >> Nom2;
			B.setName(Nom2);
			cin >> g;
			B.setSalary(g); // le prix a lheur
			cin >> h;
			B.setHours(h); // le nombre dheur 
			cin >> i;
			B.setTotal(i); // Argent 

		}
		if (f == 0)
			break;

		if (B.totalSalary() > Max.totalSalary()) // trouver le max du salaire.
			Max = B;
		if (Min.getTotal() > B.getTotal())
			Min = B;
	}

	cout << "minimum collected: " << Min.getID() << " " << Min.getName() << " " << Min.getTotal() << endl ;
	cout << "highest salary: " << Max.getID() << " " << Max.getName() << " " << Max.totalSalary();
		
	return 0; 
}


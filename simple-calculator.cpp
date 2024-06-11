#include <iostream>
#include <String>
int main()
{
	std::string calculType;
	int firstNumber;
	int secondNumber;
	int finalNumber;

	std::cout << "Veillez d'abord indiquer le type de calcul que vous souhaitez effectuer >>\n";
	std::cout << "('add' -> addition) ('sub' -> soustraction) ('mul' -> multiplier) ('div' -> diviser) ";
	std::cin >> calculType;
	//conditions
	if (calculType == "add")
	{
		//add
		std::cout << "Vous avez choisi: Addition \n";
		std::cout << "Veillez indiquer le 1e nombre ";
		std::cin >> firstNumber;
		std::cout << "Veillez indiquer le 2e nombre ";
		std::cin >> secondNumber;
		finalNumber = firstNumber + secondNumber;
		std::cout << "Le resultat est: ";
		std::cout << finalNumber;
		std::cout << std::endl;
		std::cout << "Veuillez appuyer sur 'Entrer' pour refaire un nouveau calcul... \n";
		std::cin.ignore();
		std::cin.ignore();
		main();
	}
	else if (calculType == "sub")
	{
		//sub
		std::cout << "Vous avez choisi: Soustraction \n";
		std::cout << "Veillez indiquer le 1e nombre (Affecte) ";
		std::cin >> firstNumber;
		std::cout << "Veillez indiquer le 2e nombre (Affectant) ";
		std::cin >> secondNumber;
		finalNumber = firstNumber - secondNumber;
		std::cout << "Le resultat est: ";
		std::cout << finalNumber;
		std::cout << std::endl;
		std::cout << "Veuillez appuyer sur 'Entrer' pour refaire un nouveau calcul... \n";
		std::cin.ignore();
		std::cin.ignore();
		main();
	}
	else if (calculType == "mul")
	{
		//mul
		std::cout << "Vous avez choisi: Multiplication \n";
		std::cout << "Veillez indiquer le 1e nombre ";
		std::cin >> firstNumber;
		std::cout << "Veillez indiquer le 2e nombre ";
		std::cin >> secondNumber;
		finalNumber = firstNumber * secondNumber;
		std::cout << "Le resultat est: ";
		std::cout << finalNumber;
		std::cout << std::endl;
		std::cout << "Veuillez appuyer sur 'Entrer' pour refaire un nouveau calcul... \n";
		std::cin.ignore();
		std::cin.ignore();
		main();
	}
	else if (calculType == "div")
	{
		//div
		std::cout << "Vous avez choisi: Division \n";
		std::cout << "Veillez indiquer le 1e nombre (Affecte / Numerateur) ";
		std::cin >> firstNumber;
		std::cout << "Veillez indiquer le 2e nombre (Affecteur / Denominateur) ";
		std::cin >> secondNumber;
		finalNumber = firstNumber / secondNumber;
		std::cout << "Le resultat est: ";
		std::cout << finalNumber;
		std::cout << std::endl;
		std::cout << "Veuillez appuyer sur 'Entrer' pour refaire un nouveau calcul... \n";
		std::cin.ignore();
		std::cin.ignore();
		main();
	}
	else
	{
		std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
		std::cin.ignore();
		std::cin.ignore();
		main();
	}

	//Made by Shaydon Gervais
}

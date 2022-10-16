
#include "utilities.h"
/**
 * Écrire la fonction maxmin qui retourne dans min et max les valeurs maximums et minimums du tableau T
 * @param T un tableau d'entiers de taille n
 * @param n la taille de t
 * @param min valeur maximum
 * @param max valeur minimum
 *
 */
void maxmin(int *T, int n, int & min, int & max){

		// Déclaration locale et initialisation
		int minFound=T[0]; // Min trouvé (par défaut, on affecte la première valeur du tableau)
		int maxFound=T[0]; // Max trouvé (par défaut, on affecte la première valeur du tableau)


		// Parcours du tableau	
		for(int i=0; i<n;i++){


			// Lecture du tableau. Comparaison.
			(T[i] < minFound ? minFound=T[i] : minFound);
			(T[i] > maxFound ? maxFound=T[i] : maxFound);

		}

		// On affecte les données en référence
		min = minFound;
		max = maxFound;


// Fin de la fonction
}

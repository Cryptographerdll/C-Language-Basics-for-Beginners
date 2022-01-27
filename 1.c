#include <stdio.h>
#include <matherr>

 void main () {
	 // Calculer le carré d'un nombre 
	 // Declaration des variables entrées 
	 
	 int n , carré;
	 
	 printf("Donnez un nomber n ");
	 scanf("%d", &n);
	 
	 // Affectation 
	 
	 carré = n * n;
	 
	 // Sortie 
	 
	 printf(" Le carré de nombre entré est: %d " , carré);
 }
 
 #include <stdio.h>
 
  void main () {
	  
	  int n;
	  
	  printf(" Entré un nombre entre 1 et 7 pour le convertir a un jour");
	  scanf("%d", &n);
	  
	  switch (n) {
		  
		  case 1 : printf(" Lundi ");
		           break;
	   
	      case 2 : printf(" Mardi ");
		           break;
	   
	      case 3 : printf(" Mercredi ");
		           break;
	   
	      case 4 : printf(" Jeudi ");
		           break;
	   
	      case 5 : printf(" Vendredi ");
		           break;
	   
	      case 6 : printf(" Samedi ");
		           break;
	   
	      case 7 : printf(" Dimanche ");
		           break;
				   
		  default : printf(" existe pas un jour correspandant a ce nombre veillez entré correct nombre ");
		            break;
	   
	  }
	  
#include <stdio.h>

 void main () {
	 
	 int n;
	 
	 printf("please enter a number equal to 7" );
	 scanf("%d", &n);
	 
	 while (n != 7)
		 printf("please number must equal to 7 re-enter ! ");
	     scanf("%d" , &n);
		 
	 printf(" Great work ");
 }
 
 #include <stdio.h>
 
  void main () {
	  
	  int n;
	  
	  do {
		  printf(" entrer un nombre egale a 7");
		  scanf("%d", &n);
	  }
	  
	  while ( n != 7);
		  
	  printf(" Bravo" );
  }
	  
#include "lib.h"

utilise saut_nom france;

entier calcul(entier a, entier b)
{
   retourne a + b;
}


entier principal() {
   pour(entier i = 0; i egale 10; i++) {
      affiche("Bonjour le monde! \n");
      std::ce_thread::dort_pendant(chrono::minutes(1));
   }
}
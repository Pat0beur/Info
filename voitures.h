// évite les problemes de définition multiples si ce fichier etait importe
// plusieurs fois (voire etait indirectement inclus recursivement)
#ifndef VOITURES
#define VOITURES

#include <stdlib.h>
#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

typedef struct {
  char identification;
  int position;
  int vitesse;
  bool ralenti;
} Voiture;          // representation d'une voiture

typedef struct {
  vector<Voiture> voitures;
  vector<int> occupe;
  int vmax;
  double pv;
  bool unique;
} Route;
#endif

#ifndef FILTERS_H
#define FILTERS_H

#define MAX_WORD_LENGTH 6   // 5 lettres + '\0'
#define TOTAL_WORDS 12972   // nombre total de mots dans bdd_wordle_clean.txt

// Convertit une chaîne en minuscules
void toLowerCase(char* str);

// Affiche un mot avec des couleurs selon les indices (v, o, x)
void displayColorLetter(char* word, char* try);

// Charge les mots depuis un fichier
void getWord(char* bddName, char words[TOTAL_WORDS][MAX_WORD_LENGTH]);

// Vérifie si le mot existe dans la BDD
int checkValidWord(char* word, char words[TOTAL_WORDS][MAX_WORD_LENGTH]);

// Compare le mot à deviner et la proposition de l'utilisateur
void checkLetters(char* word, char* guess, char* try);

// Filtre : inclure certaines lettres
void filterByIncludedLetters(char words[TOTAL_WORDS][MAX_WORD_LENGTH], char* included, int count);

// Filtre : exclure certaines lettres
void filterByExcludedLetters(char words[TOTAL_WORDS][MAX_WORD_LENGTH], char* excluded, int count);

// Filtre : lettre à une position précise
void filterByLetterPosition(char words[TOTAL_WORDS][MAX_WORD_LENGTH], char letter, int position);

// Filtre : contient une sous-chaîne
void filterBySubstring(char words[TOTAL_WORDS][MAX_WORD_LENGTH], char* substring);

// Affiche tous les mots valides restants
void displayFilteredWords(char words[TOTAL_WORDS][MAX_WORD_LENGTH]);

// Menu interactif pour appliquer les filtres
void applyFilters(char originalWords[TOTAL_WORDS][MAX_WORD_LENGTH]);

#endif


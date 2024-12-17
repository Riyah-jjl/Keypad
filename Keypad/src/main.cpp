#include <Arduino.h>
#include <Keypad.h>// Bibliothèque pour le clavier


/*
EXERCICE 2

// Dimensions du clavier : 4 lignes et 4 colonnes
const byte ROWS = 4;
const byte COLS = 4;

// Définition des touches physiques du clavier
char keys[ROWS][COLS] = {
  {'1','2','3', 'F'},
  {'4','5','6', 'E'},
  {'7','8','9', 'D'},
  {'A','0','B', 'C'}
};

// Définition des broches utilisées pour connecter les lignes et colonnes du clavier
byte rowPins[ROWS] = {5, 4, 3, 2}; // Lignes connectées aux broches Arduino
byte colPins[COLS] = {9, 8, 7, 6}; // Colonnes connectées aux broches Arduino

// On crée un objet "monClavier" pour gérer les interactions avec le clavier
Keypad monClavier = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// Mot de passe que l'utilisateur doit entrer (2 chiffres)
const char motDePasse[3] = "12"; // 2 chiffres + caractère nul '\0' (fin de chaîne)
char saisieUtilisateur[3]; // Stocke les touches que l'utilisateur entre
byte indexSaisie = 0; // Position actuelle de la saisie (0 à 2)

// Broches pour contrôler la LED verte
const int LED_VERTE = 11; // Broche pour la couleur verte

void setup() {
  // Initialisation de la communication avec le PC pour afficher des messages
  Serial.begin(9600);
  Serial.println("Veuillez entrer un mot de passe à 2 chiffres :");

  // On configure la broche de la LED verte comme sortie
  pinMode(LED_VERTE, OUTPUT);

  // On s'assure que la LED verte est éteinte au départ
  digitalWrite(LED_VERTE, LOW);
}

void loop() {
  // On lit la dernière touche pressée sur le clavier
  char key = monClavier.getKey();

  // Si une touche a été appuyée
  if (key) {
    // Vérifie si la touche appuyée est un chiffre (de '0' à '9')
    if (key >= '0' && key <= '9') {
      // Ajoute le chiffre à la saisie en cours
      saisieUtilisateur[indexSaisie] = key;
      indexSaisie++; // On passe à la position suivante
      Serial.print(key); // Affiche la touche entrée dans le moniteur série

      // Si l'utilisateur a entré 2 chiffres
      if (indexSaisie == 2) {
        // On termine la chaîne avec un caractère nul pour pouvoir comparer
        saisieUtilisateur[2] = '\0';
        Serial.println(); // Saut de ligne pour plus de clarté

        // Vérifie si la saisie correspond au mot de passe
        if (strcmp(saisieUtilisateur, motDePasse) == 0) {
          // Mot de passe correct
          Serial.println("Mot de passe correct ! Bienvenue !\n");
          digitalWrite(LED_VERTE, HIGH); // Allume la LED verte
          delay(2000); // Garde la LED verte allumée pendant 2 secondes
          digitalWrite(LED_VERTE, LOW); // Éteint la LED verte
        } else {
          // Mot de passe incorrect
          Serial.println("Mot de passe incorrect. Réessayez !\n");
        }

        // Réinitialise la saisie pour un nouveau cycle
        indexSaisie = 0;
      }
    } else {
      // Si une touche non valide est appuyée (par exemple A, B, C, etc.)
      Serial.println("\nTouche non valide. Veuillez entrer un chiffre !");
    }
  }
}
*/












/*
EXERCICE 3

// Dimensions du clavier : 4 lignes et 4 colonnes
const byte ROWS = 4;
const byte COLS = 4;

// Définition des touches physiques du clavier
char keys[ROWS][COLS] = {
  {'1','2','3', 'F'},
  {'4','5','6', 'E'},
  {'7','8','9', 'D'},
  {'A','0','B', 'C'}
};

// Définition des broches utilisées pour connecter les lignes et colonnes du clavier
byte rowPins[ROWS] = {5, 4, 3, 2}; // Lignes connectées aux broches Arduino
byte colPins[COLS] = {9, 8, 7, 6}; // Colonnes connectées aux broches Arduino

// On crée un objet "monClavier" pour gérer les interactions avec le clavier
Keypad monClavier = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// Mot de passe que l'utilisateur doit entrer (4 chiffres)
const char motDePasse[5] = "1234"; // 4 chiffres + caractère nul '\0' (fin de chaîne)
char saisieUtilisateur[5]; // Stocke les touches que l'utilisateur entre
byte indexSaisie = 0; // Position actuelle de la saisie (0 à 4)

// Broches pour contrôler la LED verte
const int LED_VERTE = 11; // Broche pour la couleur verte

void setup() {
  // Initialisation de la communication avec le PC pour afficher des messages
  Serial.begin(9600);
  Serial.println("Veuillez entrer un mot de passe à 4 chiffres :");

  // On configure la broche de la LED verte comme sortie
  pinMode(LED_VERTE, OUTPUT);

  // On s'assure que la LED verte est éteinte au départ
  digitalWrite(LED_VERTE, LOW);
}

void loop() {
  // On lit la dernière touche pressée sur le clavier
  char key = monClavier.getKey();

  // Si une touche a été appuyée
  if (key) {
    // Vérifie si la touche appuyée est un chiffre (de '0' à '9')
    if (key >= '0' && key <= '9') {
      // Ajoute le chiffre à la saisie en cours
      saisieUtilisateur[indexSaisie] = key;
      indexSaisie++; // On passe à la position suivante
      Serial.print(key); // Affiche la touche entrée dans le moniteur série

      // Si l'utilisateur a entré 4 chiffres
      if (indexSaisie == 4) {
        // On termine la chaîne avec un caractère nul pour pouvoir comparer
        saisieUtilisateur[4] = '\0';
        Serial.println(); // Saut de ligne pour plus de clarté

        // Vérifie si la saisie correspond au mot de passe
        if (strcmp(saisieUtilisateur, motDePasse) == 0) {
          // Mot de passe correct
          Serial.println("Mot de passe correct ! Bienvenue !\n");
          digitalWrite(LED_VERTE, HIGH); // Allume la LED verte
          delay(2000); // Garde la LED verte allumée pendant 2 secondes
          digitalWrite(LED_VERTE, LOW); // Éteint la LED verte
        } else {
          // Mot de passe incorrect
          Serial.println("Mot de passe incorrect. Réessayez !\n");
        }

        // Réinitialise la saisie pour un nouveau cycle
        indexSaisie = 0;
      }
    } else {
      // Si une touche non valide est appuyée (par exemple A, B, C, etc.)
      Serial.println("\nTouche non valide. Veuillez entrer un chiffre !");
    }
  }
}
*/











//EXERCICE 4

// Dimensions du clavier : 4 lignes et 4 colonnes
const byte ROWS = 4; 
const byte COLS = 4; 

// Définition des touches physiques du clavier
char keys[ROWS][COLS] = {
  {'1','2','3', 'F'},
  {'4','5','6', 'E'},
  {'7','8','9', 'D'},
  {'A','0','B', 'C'}
};

// Définition des broches utilisées pour connecter les lignes et colonnes du clavier
byte rowPins[ROWS] = {5, 4, 3, 2}; // Lignes connectées aux broches Arduino
byte colPins[COLS] = {9, 8, 7, 6}; // Colonnes connectées aux broches Arduino

// On crée un objet "monClavier" pour gérer les interactions avec le clavier
Keypad monClavier = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// Mot de passe que l'utilisateur doit entrer (peut être changé ici)
const char motDePasse[5] = "1234"; // 4 chiffres + caractère nul '\0' (fin de chaîne)
char saisieUtilisateur[5]; // Stocke les touches que l'utilisateur entre
byte indexSaisie = 0; // Position actuelle de la saisie (0 à 4)
byte tentativesRatees = 0; // Compteur pour suivre le nombre d'erreurs consécutives

// Broches pour contrôler les LEDs RGB
const int LED_ROUGE = 10; // Broche pour la couleur rouge
const int LED_VERTE = 11; // Broche pour la couleur verte

void setup() {
  // Initialisation de la communication avec le PC pour afficher des messages
  Serial.begin(9600);
  Serial.println("Veuillez entrer un mot de passe à 4 chiffres :");

  // On configure les broches des LEDs comme des sorties
  pinMode(LED_ROUGE, OUTPUT);
  pinMode(LED_VERTE, OUTPUT);

  // Au démarrage, on s'assure que les LEDs sont éteintes
  digitalWrite(LED_ROUGE, LOW);
  digitalWrite(LED_VERTE, LOW);
}

void loop() {
  // On lit la dernière touche pressée sur le clavier
  char key = monClavier.getKey();

  // Si une touche a été appuyée
  if (key) {
    // Vérifie si la touche appuyée est un chiffre (de '0' à '9')
    if (key >= '0' && key <= '9') {
      // Ajoute le chiffre à la saisie en cours
      saisieUtilisateur[indexSaisie] = key;
      indexSaisie++; // On passe à la position suivante
      Serial.print(key); // Affiche la touche entrée dans le moniteur série

      // Si l'utilisateur a entré 4 chiffres
      if (indexSaisie == 4) {
        // On termine la chaîne avec un caractère nul pour pouvoir comparer
        saisieUtilisateur[4] = '\0';
        Serial.println(); // Saut de ligne pour plus de clarté

        // Vérifie si la saisie correspond au mot de passe
        if (strcmp(saisieUtilisateur, motDePasse) == 0) {
          // Mot de passe correct
          Serial.println("Mot de passe correct ! Bienvenue !\n");
          digitalWrite(LED_VERTE, HIGH); // Allume la LED verte
          delay(2000); // Garde la LED verte allumée pendant 2 secondes
          digitalWrite(LED_VERTE, LOW); // Éteint la LED verte
          tentativesRatees = 0; // Réinitialise les tentatives ratées
        } else {
          // Mot de passe incorrect
          Serial.println("Mot de passe incorrect. Réessayez !\n");
          tentativesRatees++; // Incrémente le compteur d'erreurs

          // Si 3 erreurs consécutives
          if (tentativesRatees >= 3) {
            Serial.println("3 tentatives échouées. Veuillez patienter 5 secondes.\n");
            digitalWrite(LED_ROUGE, HIGH); // Allume la LED rouge
            delay(5000); // Attend 5 secondes
            digitalWrite(LED_ROUGE, LOW); // Éteint la LED rouge
            tentativesRatees = 0; // Réinitialise les tentatives ratées
          }
        }

        // Réinitialise la saisie pour un nouveau cycle
        indexSaisie = 0;
      }
    } else {
      // Si une touche non valide est appuyée (par exemple A, B, C, etc.)
      Serial.println("\nTouche non valide. Veuillez entrer un chiffre !");
    }
  }
}

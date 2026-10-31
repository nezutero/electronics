//////////////////////////////////////////
// 
// L1 - DE1
// Génération du signal d'échantillonnage
//
// S. CRAND - juin 2017
// First version
//
// D. HARDY - sept 2024
// Minor revision
//
//////////////////////////////////////////

//----------------------------------------
// Définition des constantes
//----------------------------------------

//CAN : Broches utilisées
const int WRB_CAN = 2; 

//----------------------------------------
// Fonction d'initialisation
//----------------------------------------
void setup()
{
  // Définition des entrées/sorties
  // du microcontrôleur
  pinMode(WRB_CAN, OUTPUT);
}

//----------------------------------------
// Fonction principale
//----------------------------------------
void loop()
{
  digitalWrite(WRB_CAN, HIGH); // convert now, turn on
  delayMicroseconds(2000); // delay
  digitalWrite(WRB_CAN, LOW); // convert now, turn off
  delayMicroseconds(10); // delay 10ms
}

#include <LiquidCrystal.h>
#define BOUCLEAMONT 22
#define BOUCLEAVAL 24
#define MESSAGE1 "    Bonjour     "
#define MESSAGE2 "Entrez code SVP "
#define MESSAGE3 " Code correct   "
#define MESSAGE4 "  Bienvenu      "
#define MESSAGE5 "   Au revoir    "
#define MESSAGE6 " et a bientot   "
#define MESSAGE7 "carte non valide"
#define MESSAGE8 "Quittez la place"
#define MESSAGE9 "code non valide "
#define MESSAGE10 "Quittez la place"


LiquidCrystal lcd (
void setup() {

}

void loop() {
/*--------------------------------------------------------Affichage début------------------------------------------------------*/  
 if (digitalRead(BOUCLEAMONT) == 1 && digitalRead(BOUCLEAVAL) == 0)
 { 
lcd.begin(2,16);        //initialise l'ecran LCD a 2 colones sur 16 lignes
lcd.clear();             //efface l'ecran
lcd.setCursor(0,0);     //place le curseur à la première ligne
lcd.print(MESSAGE1);    //affiche le MESSAGE1  
lcd.setCursor(0,1);      //passe à la deuxieme lignes
lcd.print(MESSAGE2);    //affiche le MESSAGE2
delay(5000);
 }
/*--------------------------------------------------------Code valide ou non---------------------------------------------------*/
lcd.clear();
 if (digitalRead(VALIDATION) == 1) {
 delay(20);
 lcd.setCursor(0,0);
 lcd.print(MESSAGE3);
 lcd.setCursor(0,1);
 lcd.print(MESSAGE4); 
 lcd.clear();
 
 

 
 
 

#include "struct.h"

void fill_struct(character * perso)
{
    perso->strength = 50;
    perso->intelligence = 55;
    perso->wisdom = 100;
    perso->agility = 60;
    perso->endurance = 40;
}

int main() {
    character perso;
    fill_struct(&perso);
     
    printf("Ton personnage a : \n force : %d \n intelligence : %d \n sagesse : %d \n agilite : %d \n endurence : %d\n", perso.strength, perso.intelligence, perso.wisdom, perso.agility, perso.endurance);

    return 0;

}

#include <iostream>

using namespace std;

class Player
{
private:
  float health = 100; // Vie de base initialisée à 100
  float stamina = 100; // Endurance de base initialisée à 100

public:
  float getHealth()
  {
    return this->health;
  }
  float setHealth(float health)
  {
    if (health > 100) // Si la vie est supérieure à celle max, je met la vie au max
      this->health = 100;
    else if (health < 0) // Sinon si la vie est négative, je met la vie à 0
      this->health = 0;
    else // Sinon je met la vie indiquée
      this->health = health;
  }
  float getStamina()
  {
    return this->stamina;
  }
  float setStamina(float stamina)
  {
    if (stamina > 100) // Si l'endurance est supérieure à celle max, je met l'endurance au max
      this->stamina = 100;
    else if (stamina < 0) // Sinon si l'endurance est négative, je met l'endurance à 0
      this->stamina = 0;
    else // Sinon je met l'endurance indiquée
      this->stamina = stamina;
  }
};


int main()
{
  class Player player1;

  // Manage health
  cout << "J'ai " << player1.getHealth() << " de vie" << endl;
  player1.setHealth(player1.getHealth() + 500); // Ajoute 500 de vie à mon player1
  cout << "J'ai desormais " << player1.getHealth() << " de vie" << endl;

  // Manage stamina
  cout << "J'ai " << player1.getStamina() << " d'endurance" << endl;
  player1.setStamina(player1.getStamina() - 87.04); // Enleve 87.04 d'endurance à mon player1
  cout << "J'ai desormais " << player1.getStamina() << " d'endurance" << endl;

  return 0;
}
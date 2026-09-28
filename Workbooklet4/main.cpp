#include <iostream>
#include <format>
#include <string>

void Problem01()
{
	int health{ 30 };
	int enemyCount{ 3 };

	if (health <= 0)
	{
		std::cout << "Status: dead\n";
	}

	else if (health < 25)
	{
		std::cout << "Status: critical\n"; 
	}

	else if (enemyCount > 2)
	{
		std::cout << "Status: outnumbered\n";
	}

	else
	{
		std::cout << "Status: ready\n";
	}
}

void Problem02()
{
    int mana{ 0 };
    int arrows{ 5 };
    bool hasStaff{ true };

    if (mana)
    {
        std::cout << "A: mana\n";
    }

    if (arrows)
    {
        std::cout << "B: arrows\n";
    }

    if (hasStaff == true)
    {
        std::cout << "C: staff\n";
    }

    if (mana = 10)
    {
        std::cout << "D: mana again\n";
    }

    std::cout << std::format("E: mana is {}\n", mana);

    if (arrows > 3)
        std::cout << "F: plenty of arrows\n";
    std::cout << "G: ready\n";

    if (mana > 5 && arrows > 10)
    {
        std::cout << "H: fully equipped\n";
    }
    else if (mana > 5 || arrows > 10)
    {
        std::cout << "I: partly equipped\n";
    }
}

enum class DamageType {Physical = 0, Fire = 1, Ice = 2, Poison = 3};
void Problem04()
{

}

int main()
{
	Problem01();
    Problem02();
	return 0;
}
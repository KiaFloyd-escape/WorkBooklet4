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
enum class ArmourType { None, Leather, Chain, Plate };

int ApplyResistance(int damage, DamageType type, ArmourType armour)
{
    switch (armour)
    {
    case ArmourType::None:
        return damage;

    case ArmourType::Leather:
        if (type == DamageType::Poison)
        {
            return damage / 2;
        }
        return damage;

    case ArmourType::Chain:
        if (type == DamageType::Physical)
        {
            return damage / 2;
        }
        if (type == DamageType::Ice)
        {
            return damage * 2;
        }
        return damage;

    case ArmourType::Plate:
        if (type == DamageType::Physical)
        {
            return damage / 2;
        }
        if (type == DamageType::Fire || type == DamageType::Ice)
        {
            return damage * 2;
        }
        return damage;
    }

    return damage;
}

const char* NameOf(DamageType type)
{
    switch (type)
    {
    case DamageType::Physical:  return "physical";
    case DamageType::Fire:      return "fire";
    case DamageType::Ice:       return "ice";
    case DamageType::Poison:    return "poison";
    }

    return "unknown";
}

void Problem04()
{
    int fireOnPlate = ApplyResistance(20, DamageType::Fire, ArmourType::Plate);
    int physicalOnChain = ApplyResistance(20, DamageType::Physical, ArmourType::Chain);

    std::cout << std::format("20 {} damage against plate armour becomes {}\n",
        NameOf(DamageType::Fire), fireOnPlate);
    std::cout << std::format("20 {} damage against chain armour becomes {}\n",
        NameOf(DamageType::Physical), physicalOnChain);
}

int main()
{
	Problem01();
    Problem02();
	return 0;
}
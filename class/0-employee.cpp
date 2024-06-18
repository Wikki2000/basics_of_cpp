/**
 * @class Animal
 * @brief A class representing an animal.
 *
 * This class defines an animal with a name, sound, and food,
 * and provides a method to display these attributes.
 */
class Animal
{
	string name; ///< Name of the animal
	string sound; ///< Sound the animal makes
	string food; ///< Food the animal eats
	
public:
	/**
	 * @brief Constructor for the Animal class
	 * @param a Name of the animal.
	 * @param b Sound the animal makes.
	 * @param c Food the animal eats.
	 *
	 * Initializes an Animal object with the provided name, sound, and food.
	 */
	Animal(string a, string b, string c)
	{
		name = a;
		sound = b;
		food = c;
	}

	/**
	 * @brief Displays the attributes of the animal.
	 * Prints the name, sound, and food of the animal to the standard output.
	 */
	 void display()
	 {
		 cout << "Name of animal: " << name << endl;
		 cout << "Sound of animal: " << sound << endl;
		 cout << "Food eaten by animal: " << food << endl;
	 }
};

/**
 * @brief Entry point of the program.
 * Creates an Animal object and displays its attributes.
 *
 * @return 0 on success.
 */
int main(void)
{
	Animal obj("Cat", "Meow", "Fish");
	obj.display();
	return (0);
}


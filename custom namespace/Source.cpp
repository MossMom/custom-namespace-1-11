#include <iostream>
using namespace std;

namespace MubbleWhomp
{
	int flerple = 100;
}

// Global variable
int flerple = 200;

int main()
{
	// Local variable
	int flerple = 300;
	
	cout << flerple << endl;
	cout << MubbleWhomp::flerple << endl;

}

/*
1) Were you correct with your guess? Why does the code print out what it does?

		I was right, I assumed the code would first print the most recently 
		updated variable within its area (such as the main function), and
		then the namespaced variable would use whatever the namespace's
		variable was initalized as.

2) What happens if you have a global and local variable with the same name? Does this have anything to do with namespaces?
	
		The local variable either doesn't effect the global variable, or 
		reassigns it and turns it into a local variable. Namespaced
		variables seem to be immune from similarly named variables.

3) What do namespaces allow you to do? What problems might this cause? Why might some profs consider it bad practice to include namespace std?

		Namespaces appear to create their own bubble of information
		that can only be accessed through their keyword, the namespace.

4) What else can go into a namespace? Experiment with code or google.

		Namespaces, through some research, seem to be an organization 
		solution for large clusters of code and information, an example
		of how we could use them is everything involving an inventory
		being held in the 'inventory' namespace, such as if there are
		both items in the inventory and in the game world.

*/
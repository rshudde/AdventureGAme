#include <iostream>
#include <map>
// find some graph implementation to use

// // +++++ TO DO LIST +++++ // //
// figure out graph
// figure out map (initlization)
// change items in person?
// // ++++++++++++++++++++++ // //



enum Major { CS, Math, Pre-Med, Business, Bible }

class World
{
	private: 
		double timeRemaining; 
		bool ID; 

	public: 
		World() 
		{
			timeRemaining = 10.0;
			ID = false;
		}
		virtual ~World() {}
		double getTime const();
		void setTime();
		void findID();  // changes ID to true
};

class Location
{
	private:
		string placeName; // (which location you are at)
		double placeTime; // how much time is spent at each location
		double* placeBenefits;
		static Graph placeNext; // where player is going next
		Item* placeItem; // what items are in each place
		static Map<Location, Professor>  profList; // map of locations to which professors they are have 

	public:
		Location(string tempPlace, double tempTime, double* tempBenefits, Item* tempItem, int numItems);
		{
			placeName = tempPlace;
			placeTime = tempTime;

			placeBenefits = new double[5];
			for (int i = 0; i < 5; i++)
				placeBenefits[i] = tempBenefits[i];

			// hold off on graph 
			placeItem = new Item[numItems];
			for (int i = 0; i < numItems; i++)
				placeItem[i] = tempItem[i];

			// hold off on map

		}
		~Location() 
		{
			delete [] placeBenefits;
			delete [] placeItem;

			// delete the graphs / maps
		}
		// getFunctions // we will further specify these as we begin our coding
		void getLocationTime(); // how much time decrements after the player leaves a location
		void printNext(); // prints out where the player can go next
		void printDialogue(); // prints out what the professor says
};

class Person
{
	private:
		string name;
		string personLocation;

	private:
		Person(string tempName, string tempLocation)
		{
			name = tempName;
			personLocation = tempLocation;
		}
		virtual ~Person() {}
		string getName() const;
		string getLocation const();

};

class Professor: public Person
{
	private: 
		double* profBenefits;

	public: 
		Professor(string tempName, string tempLocation, double* tempBenefits) : Person(tempName, tempLocation)
		{
			profBenefits = new double[5];
			for (int i = 0; i < 5; i++)
				profBenefits[i] = tempBenefits[i];
		}
		~Professor()
		{
			delete [] profBenefits;
		}
		void getDialogue() const;
};

class Player: public World, public Person
{
	private:
		Major study; // refers to enum major type
		Item* inventory; // points to what items are in the student's inventory

	public:
		Player(string tempName, string tempLocation, Major tempMajor, Item* tempInventory) : Person(tempName, tempLocation)
		{
			study = tempMajor;

			// may come back and initilize this here
			inventory = new Item[3];
			for (int i = 0; i < 3; i++)
				inventory[i] = tempInventory[i];
		}
		~Player()
		{
			delete [] inventory;
		}
		void useItem();
		void takeItem(); // get an item from the world and put it in inventory
		void getBenefits(); // benefits from major
		void setLocation();// where the player currently is
};

class Item
{	
	private:
		string itemName;
		bool itemVisible; // whether or not the player can see the item, False initially
		double* itemBenefits; // benefits from specific items during certain challenges 

	public: 
		Item(temp tempName, double* tempBenefits)
		{
			itemName = tempName;
			itemVisible = false;

			itemBenefits = new double[5];
			for (int i = 0; i < 5; i++)
				itemBenefits[i] = tempBenefits[i];
		}
		~Item()
		{
			delete [] itemBenefits;
		}
		// get functions // we will expand on these as we begin to write code
		void setVisible(); // set the item visible to player

};
// GARCIA, DENNIS JAMES T.
#include <iostream>
#include <string>

class Items{
    private:
        std::string itemName;
        double itemPrice;
        int itemQuantity;
        double quantity_price;

    public:
    //constructor items
    Items(std::string newName, double newPrice, double newQuantity){

      itemName = std::move(newName); 
      itemPrice = newPrice;
      itemQuantity = newQuantity;

      std::cout <<" Items Constructor was called"<<std::endl;
    }

    //destructor items
    //virtual, because without this 
    //this is will be the only destructor that will activate instead
    //of activating the other derived classes (w3schools ref)
    virtual ~Items(){
    std::cout << "Items Destructor was called" << std::endl;
    }

    //copy constructor items
    Items(const Items &copyItems){
        std::cout<<"Items Copy Constructor was called"<< std::endl;
        itemName = copyItems.itemName;
        itemPrice = copyItems.itemPrice;
        itemQuantity = copyItems.itemQuantity;
    }

    //copy assignment operator items
    Items& operator=(const Items &copyItems){
        std::cout<<" Items Copy Assignment Operator was called"<< std::endl;

        if (this == &copyItems) {
            return *this; 
        }

        itemName = copyItems.itemName;
        itemPrice = copyItems.itemPrice;
        itemQuantity = copyItems.itemQuantity;

        return *this;

    }

        void QuantityPrice() { //setter
        quantity_price = itemPrice * itemQuantity;
        }

        double getQuantityPrice() { //getter
        return quantity_price;
        }
};

class Fruits: public Items{
    public:
    //constructor fruits
    Fruits(std::string fruitName, double fruitPrice, 
    int fruitQuantity) : Items(fruitName, fruitPrice, fruitQuantity){

    std::cout <<"Fruits Constructor was called"<<std::endl;
    }

    //destructor fruits
    ~Fruits(){
    std::cout << "Fruits Destructor was called" << std::endl;
    }

    //copy constructor fruits
    Fruits(const Fruits &copyFruits) : Items(copyFruits){
    std::cout<<"Fruits Copy Constructor was called"<< std::endl;
        
    }

    //copy assignment operator fruits
    Fruits& operator=(const Fruits &copyFruits){
    std::cout<<" Fruits Copy Assignment Operator was called"<< std::endl;

        if (this == &copyFruits){
            return *this; 
        }
    }

};

class Vegetables: public Items{
    public:
    //constructor vegetables
    Vegetables(std::string vegName, double vegPrice, 
    int vegQuantity) : Items(vegName, vegPrice, vegQuantity){

    std::cout <<"Vegetables Constructor was called"<<std::endl;

    }

    //destructor vegetables
    ~Vegetables(){
    std::cout << "Vegetables Destructor was called" << std::endl;
    }

    //copy constructor vegetables
    Vegetables(const Vegetables &copyVegetables) : Items(copyVegetables){
    std::cout<<"Vegetables Copy Constructor was called"<< std::endl;
        
    }

    //copy assignment operator vegetables
    Vegetables& operator=(const Vegetables &copyVegetables){
    std::cout<<" Vegetables Copy Assignment Operator was called"<< std::endl;

        if (this == &copyVegetables){
            return *this; 
             }
        }
    };

  double TotalSum(Items * grocery_items[], size_t const j = 4){
    double TotalSum = 0;
    for(size_t i = 0; i < j; i++){
        TotalSum += grocery_items[i]->getQuantityPrice();
    }
    return TotalSum;
  }

int main(){
    const size_t j= 4;
   
    std::cout<<"Jenna's Grocery List"<<std::endl;
    std::cout<<std::endl;
    
    
    Items* groceryList[j] = {};
    std::string namesList[j] = {"Apple", "Banana", "Broccoli", "Lettuce"};
    double priceList[j] = {10, 10, 60, 60};
    int quantityList[j] = {7, 8, 12, 10};


    for(size_t i = 0; i < j; i++){
        // vvv fixed namesList, so I just made a condition where if either of these names are on the list, it goes to the second loop
        
        if (namesList[i] == "Apple" || namesList[i] == "Banana") {
        groceryList[i] = new Fruits(namesList[i], priceList[i], quantityList[i]);
    } else {
        groceryList[i] = new Vegetables(namesList[i], priceList[i], quantityList[i]);
        }
    std::cout<<std::endl; 
    // ^^^ made it so I can seperate the texts of constructors being used instead of being sticked together
    }

    for(size_t i = 0; i < j; i++){
        groceryList[i]->QuantityPrice();
        std::cout << namesList[i] << " Total: P" <<groceryList[i]->getQuantityPrice()<< std::endl;
    }

    std::cout << "All Prices Combined: " << TotalSum(groceryList, j) << std::endl;

    std::cout<<std::endl; 

    //delete lettuce which is index number 3 from grocerylist array
    delete groceryList[3];
    groceryList[3] = nullptr;
}

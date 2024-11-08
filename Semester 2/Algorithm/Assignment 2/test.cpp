#include <iostream>
#include <vector>
#include <string> // For cleaner output formatting

using namespace std;

int total = 0;

class Menu
{
public:
    virtual void showMenu() = 0; // Pure virtual function to force subclasses to implement showMenu
};

class Appetizer : public Menu
{
public:
    void showMenu()
    {
        cout << "APPETIZERS:\n";
        cout << "1. Fried Momo (vegetable & chicken, 10 pieces) - 130 TK\n";
        cout << "2. Steam Momo (vegetable & chicken, 10 pieces) - 150 TK\n";
        cout << "3. Restaurant Special Momo (vegetable, beef keema, 12 pieces) - 200 TK\n\n";
        cout << "4. Go back";
        calculateTotal();
    }
    void calculateTotal()
    {
        while(true)
        {
            int choice;
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "You Have Choise FRIED MOMOS\n";
                total += 130;
                cout << "Your total cost is: " << total << " TK\n";
                break;
            case 2:
                cout << "You Have Choise STEAM MOMOS\n";
                total += 150;
                cout << "Your total cost is: " << total << " TK\n";
                break;

            case 3:
                cout << "You Have Choise Restaurant Special Momo\n";
                total += 200;
                cout << "Your total cost is: " << total << " TK\n";
                break;
            case 4:
                cout << "Go Back\n"; 
                showMenu();
                break;
            }
        }
    }

};

class Sushi : public Menu
{
public:
    void showMenu() override
    {
        cout << "SUSHI:\n";
        cout << "4. Hot Date Roll (spicy tuna, cucumber, sake, avocado) - 230 TK (6 pieces)\n";
        cout << "5. Rainbow Roll (tuna, eel, avocado, cucumber) - 350 TK (6 pieces)\n";
        cout << "6. Godzilla Roll (spicy tuna, shrimp tempura, cucumber) - 400 TK (10 pieces)\n\n";
    }
};

class Soup : public Menu
{
public:
    void showMenu() override
    {
        cout << "SOUP:\n";
        cout << "7. Chinese Chicken Mushroom Soup (1:1 - 250 TK)\n";
        cout << "    Ingredients: shiitake mushroom, chicken, Chinese date, goji berries\n";
        cout << "8. Taiwanese Sesame Oil Chicken Soup (1:1 - 300 TK)\n";
        cout << "    Ingredients: rice wine, chicken, ginger\n";
        cout << "9. Fish and Tofu Soup (1:1 - 350 TK)\n";
        cout << "    Ingredients: shrimp, tofu, bean sprouts\n\n";
    }
};

class Snacks : public Menu
{
public:
    void showMenu() override
    {
        cout << "SNACKS:\n";
        cout << "10. Dim Sums (4 pieces) - 150 TK\n";
        cout << "11. Quick Noodles - 300 TK\n";
        cout << "12. Chicken Wings (4 pieces) - 200 TK\n";
        cout << "13. Spring Rolls (4 pieces) - 150 TK\n";
        cout << "14. Peri-Peri Chicken Satay - 300 TK\n";
        cout << "15. Veg Hakka Noodles (1:1) - 250 TK\n";
        cout << "16. Kung Pao Chicken - 350 TK\n";
        cout << "17. Honey Sesame Chicken - 250 TK\n\n";
    }
};

class TraditionalDishes : public Menu
{
public:
    void showMenu() override
    {
        cout << "TRADITIONAL PLATTER:\n";
        cout << "18. SET-1: Sweet Chicken With Candied Fruits (1:1) - 500 TK\n";
        cout << "19. SET-2: Buttered Lamb (1:1) - 550 TK\n";
        cout << "20. SET-3: Peking Duck - 500 TK\n";
        cout << "21. SET-4: Chinese Hot-Pot (spicy and non-spicy) - 600 TK\n";
        cout << "22. SET-5: Kung Pao Chicken - 500 TK\n\n";
    }
};

class Platter : public Menu
{
public:
    void showMenu() override
    {
        cout << "SEA FOOD PLATTER:\n";
        cout << "23. Shrimp Sezchuan (1:1) - 350 TK\n";
        cout << "24. Drunken Prawn (Made With Prawns, Wine and Spices) - 550 TK\n";
        cout << "25. Salt And Pepper Squid - 400 TK\n";
        cout << "26. Chili Fish - 500 TK\n";
        cout << "27. Stir-Fry Shrimp (1:1) - 350 TK\n\n";
    }

    void showSweetDishes()
    {
        cout << "SWEET DISHES:\n";
        cout << "28. Pineapple Cake (per piece) - 250 TK\n";
        cout << "29. Mango Pomelo Sago - 350 TK\n";
        cout << "30. Nian Gao - 250 TK\n";
        cout << "31. Mango Pudding - 250 TK\n";
        cout << "32. Baked Tapioka Pudding - 350 TK\n";
        cout << "33. Tanghulu (4 pieces) - 250 TK\n\n";
    }
};

class Drinks : public Menu
{
public:
    void showMenu() override
    {
        cout << "DRINKS:\n";
        cout << "34. Pearl Milk Tea - 450 TK\n";
        cout << "35. Yunnan Coffee - 350 TK\n";
        cout << "36. Coconut Milk - 200 TK\n";
        cout << "37. Matcha Tea - 250 TK\n";
        cout << "38. Soy Milk - 250 TK\n";
        cout << "39. Jiuniang - 350 TK\n";
        cout << "40. Winter Melon Tea - 250 TK\n\n";
    }
};

// double calculateTotal(const vector<int>& choices)
// {
//     double total = 0;
//     for (int choice : choices)
//     {
//         switch (choice)
//         {
//         case 1:
//             cout << "You Have Choise FRIED MOMOS\n";
//             total += 130;
//             break;
//         case 2:
//             cout << "You Have Choise STEAM MOMOS\n";
//             total += 150;
//             break;

//         case 3:
//             cout << "You Have Choise Restaurant Special Momo\n";
//             total += 200;
//             break;
//         case 4:
//             cout << "You Have Choise Hot Date Roll\n";
//             total += 230;
//             break;
//         case 5:
//             cout << "You Have Choise Rainbow Roll\n";
//             total += 350;
//             break;
//         case 6:
//             cout << "You Have Choise Godzilla Roll\n";
//             total += 400;
//             break;
//         case 7:
//             cout << "You Have Choise Chinese Chicken Mushroom Soup \n";
//             total += 250;
//             break;
//         case 8:
//             cout << "You Have Choise Taiwanese Sesame Oil Chicken Soup\n";
//             total += 300;
//             break;
//         case 9:
//             cout << "You Have Choise Fish and Tofu Soup\n";
//             total += 350;
//             break;
//         case 10:
//             cout << "You Have Choise Dim Sums\n";
//             total += 150;
//             break;
//         case 11:
//             cout << "You Have Choise Quick Noodles\n";
//             total += 300;
//             break;
//         case 12:
//             cout << "You Have Choise Chicken Wings\n";
//             total += 200;
//             break;
//         case 13:
//             cout << "You Have Choise Spring Rolls \n";
//             total += 150;
//             break;
//         case 14:
//             cout << "You Have Choise Peri-Peri Chicken Satay\n";
//             total += 300;
//             break;
//         case 15:
//             cout << "You Have Choise Veg Hakka Noodles \n";
//             total += 250;
//             break;
//         case 16:
//             cout << "You Have Choise Kung Pao Chicken \n";
//             total += 350;
//             break;
//         case 17:
//             cout << "You Have Choise Honey Sesame Chicken\n";
//             total += 250;
//             break;
//         case 18:
//             cout << "You Have Choise SET-1: Sweet Chicken With Candied Fruits\n";
//             total += 500;
//             break;
//         case 19:
//             cout << "You Have Choise  SET-2: Buttered Lamb\n";
//             total += 550;
//             break;
//         case 20:
//             cout << "You Have Choise SET-3: Peking Duck\n";
//             total += 500;
//             break;
//         case 21:
//             cout << "You Have Choise SET-4: Chinese Hot-Pot\n";
//             total += 600;
//             break;
//         case 22:
//             cout << "You Have Choise SET-5: Kung Pao Chicken \n";
//             total += 500;
//             break;
//         case 23:
//             cout << "You Have Choise Shrimp Sezchuan\n";
//             total += 350;
//             break;
//         case 24:
//             cout << "You Have Choise Drunken Prawn\n";
//             total += 550;
//             break;
//         case 25:
//             cout << "You Have Choise Salt And Pepper Squid\n";
//             total += 400;
//             break;
//         case 26:
//             cout << "You Have Choise Chili Fish\n";
//             total += 500;
//             break;
//         case 27:
//             cout << "You Have Choise Stir-Fry Shrimp\n";
//             total += 350;
//             break;
//         case 28:
//             cout << "You Have Choise Pineapple Cake\n";
//             total += 250;
//             break;
//         case 29:
//             cout << "You Have Choise  Mango Pomelo Sago\n";
//             total += 350;
//             break;
//         case 30:
//             cout << "You Have Choise Nian Gao\n";
//             total += 250;
//             break;
//         case 31:
//             cout << "You Have Choise Mango Pudding\n";
//             total += 250;
//             break;
//         case 32:
//             cout << "You Have Choise Baked Tapioka Pudding\n";
//             total += 350;
//             break;
//         case 33:
//             cout << "You Have Choise  Tanghulu \n";
//             total += 250;
//             break;
//         case 34:
//             cout << "You Have Choise Pearl Milk Tea\n";
//             total += 450;
//             break;
//         case 35:
//             cout << "You Have Choise Yunnan Coffee\n";
//             total += 350;
//             break;
//         case 36:
//             cout << "You Have Choise Coconut Milk\n";
//             total += 200;
//             break;
//         case 37:
//             cout << "You Have Choise  Matcha Tea\n";
//             total += 250;
//             break;
//         case 38:
//             cout << "You Have Choise Soy Milk\n";
//             total += 250;
//             break;
//         case 39:
//             cout << "You Have Choise Jiuniang\n";
//             total += 350;
//             break;

//         case 40:
//             cout << "You Have Choise Winter Melon Tea\n";
//             total += 250;
//             break;



//         default:
//             cout << "Invalid choice: " << choice << endl; // Handle invalid choices
//         }
//     }
//     return total;
// }

int main()
{
    Appetizer appetizer;
    Sushi sushi;
    Soup soup;
    Snacks snacks;
    TraditionalDishes traditionalDishes;
    Platter platter;
    Drinks drinks;
    vector<int> chosenItems;

    int choice;

    cout << "Choose a category:\n";
    cout << "1. Appetizer\n";
    cout << "2. Sushi\n";
    cout << "3. Soup\n";
    cout << "4. Snacks\n";
    cout << "5. Traditional Dishes\n";
    cout << "6. Platter\n";
    cout << "7. Drinks\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        appetizer.showMenu();
    }
    else if (choice == 2)
    {
        sushi.showMenu();
    }
    else if (choice == 3)
    {
        soup.showMenu();
    }
    else if (choice == 4)
    {
        snacks.showMenu();
    }
    else if (choice == 5)
    {
        traditionalDishes.showMenu();
    }
    else if (choice == 6)
    {
        platter.showMenu();
    }
    else if (choice == 7)
    {
        drinks.showMenu();
    }
    else
    {
        cout << "Invalid choice.\n";
        return 1;
    }

    cout << "Enter your choice: ";
    cin >> choice;
    chosenItems.push_back(choice);

    // Repeat for other categories as needed

    // double total = calculateTotal(chosenItems);
    cout << "Your total cost is: " << total << " TK\n";

    return 0;
}
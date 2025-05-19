#include<iostream>

using namespace std;

const int MAX_CAR = 10;

typedef struct carDetails
{
    int car_model_number;
    string car_brand;
}DET;

typedef struct carSpecification
{
    int car_model_number;
    int car_quantity;
    string car_category;
}SPEC;

typedef struct carPrice
{
    int car_model_number;
    int off_cost;
    int resell_old_car;
    int on_cost;
    int addon_part;
    int addon_cost;
    int old_car_cost;
}PRC;

void display(DET&, SPEC&, PRC&);
void getCarDetails(DET&, SPEC&, PRC&);
int carAdd(DET&, PRC&);
int carRe(DET&, PRC&);
int carTotalCost(PRC&);
void displayInventory(DET[], SPEC[], PRC[], int);
void updateStock(DET[], SPEC[], int);

int main()
{
    DET d[MAX_CAR];
    SPEC s[MAX_CAR];
    PRC p[MAX_CAR];
    int choice;
    int count = 0;

    do {
        cout << "= ============================== =" << endl;
        cout << "Car Inventory System" << endl;
        cout << "= ============================== =" << endl;
        cout << "1. Add a Car" << endl;
        cout << "2. Display Inventory" << endl;
        cout << "3.Update Stock" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: {
            if (count < MAX_CAR)
            {
                getCarDetails(d[count], s[count], p[count]);
                carAdd(d[count], p[count]);
                carRe(d[count], p[count]);
                carTotalCost(p[count]);
                display(d[count], s[count], p[count]);
                count++;
            }
            else
                cout << "Stock is Full" << endl;
            break;
        }
        case 2:
        {
            displayInventory(d, s, p, count);
            break;
        }
        case 3:
        {
            updateStock(d, s, count);
            break;
        }
        case 4:
        {
            cout << "Exiting...\n";
            break;
        }
        default:
        {
            cout << "Invalid choice! Try again.\n";
        }
        }
    } while (choice != 4);
}

void displayInventory(DET d[], SPEC s[], PRC p[], int count)
{
    if (count == 0) {
        cout << "No cars in inventory!\n";
        return;
    }

    cout << "\nCar Inventory:\n";
    for (int i = 0; i < count; i++)
    {
        display(d[i], s[i], p[i]);
    }
}

void updateStock(DET d[], SPEC s[], int count)
{
    int model, found = 0;
    cout << "Enter car model number to update stock: ";
    cin >> model;

    for (int i = 0; i < count; i++)
    {
        if (d[i].car_model_number == model)
        {
            cout << "Enter new stock quantity for model " << model << ": ";
            cin >> s[i].car_quantity;
            cout << "Stock updated successfully!\n";
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Car model not found!\n";
}

void getCarDetails(DET& d, SPEC& s, PRC& p)
{
    cout << "Enter car model number" << endl;
    cin >> d.car_model_number;
    cout << "Enter car brand" << endl;
    cin >> d.car_brand;
    cout << "Enter car category" << endl;
    cin >> s.car_category;
    cout << "Car Stock left" << endl;
    cin >> s.car_quantity;
    cout << "Off road cost of car" << endl;
    cin >> p.off_cost;
    s.car_model_number = d.car_model_number;
    p.car_model_number = d.car_model_number;
    return;
}

int carAdd(DET& d, PRC& p)
{
    cout << "Enter Number of Parts to be added" << endl;
    cin >> p.addon_part;
    if (p.addon_part == 0)
        p.addon_cost = 0;
    else {
        cout << "Enter Add-on Cost" << endl;
        cin >> p.addon_cost;
    }
    return p.addon_cost;
}

int carRe(DET& d, PRC& p)
{
    cout << "Enter if you're selling an old car" << endl;
    cout << "Press '0' for NO \t '1' for Yes" << endl;
    cin >> p.resell_old_car;
    do
    {
        if (p.resell_old_car == 0)
            p.old_car_cost = 0;
        else if (p.resell_old_car == 1)
        {
            cout << "Enter the value of old car" << endl;
            cin >> p.old_car_cost;
        }
        else
        {
            cout << "Invalid Input. Enter '0' or '1' only" << endl;
        }
    } while (p.resell_old_car != 0 && p.resell_old_car != 1);
    return p.old_car_cost;
}

int carTotalCost(PRC& p)
{
    p.on_cost = p.off_cost + p.addon_cost - p.old_car_cost;
    return p.on_cost;
}

void display(DET& d, SPEC& s, PRC& p)
{
    cout << " = ============================================ = " << endl;
    cout << "THE LIVING MACHINES" << endl;
    cout << "= ============================================ =" << endl;
    cout << "Car Model" << "\t : \t" << d.car_model_number << endl;
    cout << "Car Brand" << "\t : \t" << d.car_brand << endl;
    cout << "Car category" << "\t : \t" << s.car_category << endl;
    cout << "Cars Left" << "\t : \t" << s.car_quantity << endl;
    cout << "On Road Cost" << "\t : \t" << p.on_cost << endl;
    cout << "Off road Cost" << "\t : \t" << p.off_cost << endl;
    cout << "Add-on Parts" << "\t : \t" << p.addon_part << endl;
    cout << "Add-on Cost" << "\t : \t" << p.addon_cost << endl;
    cout << "Cost of old car" << "\t : \t" << p.old_car_cost << endl;
    cout << "= ============================================= =" << endl;
    return;
}

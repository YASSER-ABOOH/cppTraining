#include<iostream>
#include<vector>
#include<thread>
#include<mutex>
#include<queue>
#include<fstream>
#include<chrono>
#include<condition_variable>

class Auction
{
	int item_id;
	std::string item_name;
	int item_min_price;
	int item_max_price;
	std::string high_bidder;
public:
	Auction(int item_id, std::string item_name, int item_min_price, int item_max_price, std::string high_bidder) :
		item_id(item_id), item_name(item_name), item_min_price(item_min_price), item_max_price(item_max_price), high_bidder(high_bidder) {}
	int getId()const { return item_id; }
	std::string getname()const { return item_name; }
	int getminpr()const { return item_min_price; }
	int getmaxpr()const { return item_max_price; }
	std::string gethb()const { return high_bidder; }
	void displayAuction()
	{
		std::cout << "Item Id: " << item_id << std::endl;
		std::cout << "Item Name: " << item_name << std::endl;
		std::cout << "Item Minimum Price: " << item_min_price << std::endl;
		std::cout << "Item Maximum Price: " << item_max_price << std::endl;
		std::cout << "Highest Bidder: " << high_bidder << std::endl;
	}
};
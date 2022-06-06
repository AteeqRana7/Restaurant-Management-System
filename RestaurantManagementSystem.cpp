#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class admin
{
private:
	string const username = "admin717";
	string const password = "project";
public:
	admin()
	{

	}
	string getUsername() const
	{
		return username;
	}
	string getPassword() const
	{
		return password;
	}
};
class item
{
private:
	string name;
	string description;

public:
	item(string n = "", string d = "")
	{
		name = n;
		description = d;
	}
	void setItemName(string type)
	{
		cout << " Enter "<< type <<" Name: ";
		cin >> name;
	}
	void setItemDescription(string type)
	{
		cout << " Enter " << type << " Desctiption : ";
		cin >> description;
	}
	string getItemName() const
	{
		return name;
	}
	string getItemDescription() const
	{
		return description;
	}
	void removeItem()
	{
		name = "";
		description = "";
	}
};
class deal: public item
{
private:
	string dealName;
	int dealItems;
	string coldDrink;
	string fries;
	double dealPrice;

public:
	deal(string dn = " ", int di = 0, string in = " ", string id = " ", string cd = " ", string f = " ", double dp = 0.00):item(in, id)
	{
		dealName = dn;
		dealItems = di;
    	coldDrink = cd;
		fries = f;
		dealPrice = dp;
	}
	void removeDeal()
	{
		dealName = " ";
		dealItems = 0;
		coldDrink = " ";
		fries = " ";
		dealPrice = 0.00;
		removeItem();
	}
	void showDeal() const
	{
		cout << "--------" << dealName << "--------" << endl;
		cout << " Items: " << dealItems << endl;
		cout << " Main Item: " << item::getItemName() << endl;
		cout << " Main Item Description: " << endl << " " << item::getItemDescription() << endl;
		cout << " Cold Drink: " << coldDrink << endl;
		cout << " Fries: " << fries << endl;
		cout << " Deal Price: " << dealPrice << endl;
	}
	void setDealName()
	{
		cout << " Enter Deal Name: ";
		cin >> dealName;
	}
	void setDealItems()
	{
		cout << " Enter Deal Items: ";
		cin >> dealItems;
	}
	void setColdDrink()
	{
		cout << " Enter Cold Drink: ";
		cin >> coldDrink;
	}
	void setFries()
	{
		cout << " Enter Fries: ";
		cin >> fries;
	}
	void setDealPrice()
	{
		cout << " Enter Deal Price: ";
		cin >> dealPrice;
	}
	string getDealName() const
	{
		return dealName;
	}
	int getDealItems() const
	{
		return dealItems;
	}
	string getColdDrink() const
	{
		return coldDrink;
	}
	string getFries() const
	{
		return fries;
	}
	double getDealPrice() const
	{
		return dealPrice;
	}
};

class address
{
private:
	string societyName;
	int streetNumber;
	int houseNumber;

public:
	address(string sn = "", int strn = 0, int hn = 0)
	{
		societyName = sn;
		streetNumber = strn;
		houseNumber = hn;
	}
	void setSocietyName()
	{
		cout << " Enter society name" << endl;
		cin >> societyName;
	}
	void setStreetNumber()
	{
		cout << " Enter street number" << endl;
		cin >> streetNumber;
	}
	void setHouseNumber()
	{
		cout << " Enter house number" << endl;
		cin >> houseNumber;
	}
	string getScocietyName() const
	{
		return societyName;
	}
	int getStreetNumber() const
	{
		return streetNumber;
	}
	int getHouseNumber() const
	{
		return houseNumber;
	}
};

class userDetails
{
private:
	string name;
	address addressOfCustomer;
	long phoneNumber;

public:
	userDetails(string n = "", string society = " ",int streetNum = 0,int houseNum = 0, long pn = 0):addressOfCustomer(society,streetNum,houseNum)
	{
		name = n;
		phoneNumber = pn;
	}
	void setName()
	{
		cout << " Enter your full name" << endl;
		cin >> name;
	}
	void setAddress()
	{
		addressOfCustomer.setSocietyName();
		addressOfCustomer.setStreetNumber();
		addressOfCustomer.setHouseNumber();
	}
	void setPhoneNumber()
	{
		cout << " Enter phone number" << endl;
		cin >> phoneNumber;
	}
	string getName() const
	{
		return name;
	}
	string getSocietyName() const
	{
		return addressOfCustomer.getScocietyName();
	}
	int getStreetNumber() const
	{
		return addressOfCustomer.getStreetNumber();
	}
	int getHouseNumber() const
	{
		return addressOfCustomer.getHouseNumber();
	}
	long getPhoneNumber() const
	{
		return phoneNumber;
	}
};

class date
{
private:
	int day;
	int month;
	int year;

public:
	date(int d = 0, int m = 0, int y = 0)
	{
		day = d;
		month = m;
		year = y;
	}
	void setDay(int d)
	{
		day = d;
	}
	void setMonth(int m)
	{
		month = m;
	}
	void setYear(int y)
	{
		year = y;
	}
	int getDay() const
	{
		return day;
	}
	int getMonth() const
	{
		return month;
	}
	int getYear() const
	{
		return year;
	}
};

class orderDetails
{
private:
	int orderID;
	string dealName;
	userDetails customerDetails;
	date orderDate;
	string orderStatus;

public:
	orderDetails(int oID = 0, string dealN = "", double oP = 0.00, string oS = "")
	{
		orderID = oID;
		dealName = dealN;
		orderStatus = oS;
	}
	void display() const
	{
		cout << " -------- Order#" << orderID << " --------" << endl;
		cout << " Deal Name: " << dealName << endl;
		cout << " Order Status: " << orderStatus << endl;
		cout << " Customer Name: " << customerDetails.getName() << endl;
		cout << " Customer Contact Number: " << customerDetails.getPhoneNumber() << endl;
		cout << " Date ordered: " << orderDate.getDay() << "/" << orderDate.getMonth() << "/" << orderDate.getYear() << " " << endl;
	}
	void setOrderID()
	{
		orderID++;
	}
	void setDealNumber(string dn)
	{
		dealName = dn;
	}
	void setOrderStatus(string oS)
	{
		orderStatus = oS;
	}
	void setCustomerDetails()
	{
		customerDetails.setName();
		customerDetails.setPhoneNumber();
		customerDetails.setAddress();
	}
	void setOrderDate(int d,int m,int y)
	{
		orderDate.setDay(d);
		orderDate.setMonth(m);
		orderDate.setYear(y);
	}
	int getOrderID() const
	{
		return orderID;	
	}
	string getDealName() const
	{
		return dealName;
	}
	string getOrderStatus() const
	{
		return orderStatus;
	}
};

class fastFoodRestaurant
{
private:
	string restaurantName;
	admin administrator;
	deal deals[5];
	int dealSlot = 0;
	orderDetails orders[20];
	int activeOrders;
	date currentDate;

public:
	fastFoodRestaurant(string rn ="",int ao = 0)
	{
		restaurantName = rn;
		activeOrders = ao;
	}
	void setRestaurantName(string rn)
	{
		restaurantName = rn;
	}
	void setActiveOrders()
	{
		activeOrders++;
	}
	string getRestaurantName() const
	{
		return restaurantName;
	}
	int getActiveOrders() const
	{
		return activeOrders;
	}
	string getAdminUsername() const
	{
		return administrator.getUsername();
	}
	string getAdminPassword() const
	{
		return administrator.getPassword();
	}
	void setDeal()
	{
		int flag = 1;

		while (flag == 1)
		{
			int i = dealSlot;
			string itemType;

			for (i; i < 5; i++)
			{
				deals[i].setDealName();
				deals[i].setDealItems();

				cout << " Enter main item type(burger/pizza)" << endl;
				cin >> itemType;

				deals[i].setItemName(itemType);
				deals[i].setItemDescription(itemType);
				deals[i].setColdDrink();
				deals[i].setFries();
				deals[i].setDealPrice();

				system("cls");
				cout << "- Deal Added -" << endl;
				cout << " Kindly press 1 to add another deal or 0 to exit to menu" << endl;
				cin >> flag;

				if (flag == 0)
				{
					dealSlot = i+1;
					break;
				}
			}
		}
	}
	void removeDeal()
	{
		string removeDealName;
		int flag = 0;

		cout << " Enter deal name to be removed" << endl;
		cin >> removeDealName;

		for (int i = 0; i < 5; i++)
		{
			if (removeDealName == deals[i].getDealName())
			{
				deals[i].removeDeal();
				flag = 1;
				cout << " Deal Removed Successfully" << endl;
				cout << " Press any key to go to menu" << endl;
				_getch();
			}
		}

		if (flag == 0)
		{
			cout << " Deal of this name not found" << endl;
			cout << " Press any key to go to menu" << endl;
			_getch();
		}
		
	}
	void viewOrders() const
	{
		for (int i = 0; i < 20; i++)
		{
			if (orders[i].getOrderID() != 0)
			{
				orders[i].display();
			}
		}
		cout << " All orders displayed, press any key to go back to menu" << endl;
		_getch();
	}
	void changeOrderStatus()
	{
		for (int i = 0; i < 20; i++)
		{
			if (orders[i].getOrderID() != 0)
			{
				string orderStatus;
				cout << " Order# " << orders[i].getOrderID() << endl;
				cout << " Order Status(In Process/Dispatched/Delivered): ", cin >> orderStatus;
				orders[i].setOrderStatus(orderStatus);
			}
		}
		cout << " All orders displayed, press any key to go back to menu" << endl;
		_getch();
	}
	void displayMenu() const
	{
		for (int i = 0; i < 5; i++)
		{
			if (deals[i].getDealName() != " ")
			{
				deals[i].showDeal();
			}
		}
		cout << " Menu displayed, press any key to go back to menu" << endl;
		_getch();
	}
	void setOrder(int &orderSlot)
	{
		string dealName;

		orders[orderSlot].setCustomerDetails();
		cout << " Enter deal name to order " << endl;
		cin >> dealName;
		orders[orderSlot].setDealNumber(dealName);
		orders[orderSlot].setOrderDate(currentDate.getDay(), currentDate.getMonth(), currentDate.getYear());
		orders[orderSlot].setOrderID();

		cout << " Order Placed, press any key to go back to menu" << endl;
		_getch();
	}
	void setDate()
	{
		int day, month, year;
		cout << " Enter day" << endl;
		cin >> day;
		currentDate.setDay(day);

		cout << " Enter month" << endl;
		cin >> month;
		currentDate.setMonth(month);

		cout << " Enter year" << endl;
		cin >> year;
		currentDate.setYear(year);
	}
	void viewOrderForCurrentCustomer(int orderSlot) const
	{
		orders[orderSlot].display();

		cout << " Order displayed, press any key to go back to menu" << endl;
		_getch();
	}
	void viewOrderStatusForCurrentCustomer(int orderSlot) const
	{
		cout << " Order Status: " << orders[orderSlot].getOrderStatus() << endl;

		cout << " Order Status displayed, press any key to go back to menu" << endl;
		_getch();
	}
};

void mainMenu(fastFoodRestaurant ls, int os);
void adminLogin(fastFoodRestaurant ls, int os);
void adminMenu(fastFoodRestaurant ls, int os);
void userMenu(fastFoodRestaurant ls, int os);

int main()
{	
	fastFoodRestaurant landOfSpices;
	int orderSlot = 0;
	int userOption = 0;
	int loginOption = 0;


	cout << " Before proceding kindly enter today's date " << endl;
	landOfSpices.setDate();

	system("cls");

	cout << " ===============================" << endl;
	cout << " |                             |" << endl;
	cout << " |                             |" << endl;
	cout << " |         Welcome to          |" << endl;
	cout << " |       Land of Spices        |" << endl;
	cout << " |                             |" << endl;
	cout << " |                             |" << endl;
	cout << " ===============================" << endl;
	cout << " Press any key to continue..." << endl;
	_getch();
	system("cls");

	cout << " ===============================" << endl;
	cout << " |                             |" << endl;
	cout << " |         Login as            |" << endl;
	cout << " |         1) Admin            |" << endl;
	cout << " |         2) User             |" << endl;
	cout << " |         3) Exit             |" << endl;
	cout << " |                             |" << endl;
	cout << " ===============================" << endl;
	cin >> loginOption;
	system("cls");

	string username, password;

	switch (loginOption)
	{
	case 1:
		
		cout << " ===============================" << endl;
		cout << "                              " << endl;
		cout << "         - Login -             " << endl;
		cout << "        Username: ", cin >> username;
		cout << "        Password: ", cin >> password;
		cout << "                              " << endl;
		cout << "                              " << endl;
		cout << " ===============================" << endl;
		if ((landOfSpices.getAdminPassword() == password) && (landOfSpices.getAdminUsername() == username))
		{
			system("cls");
			int adminOption = 0;
			cout << " ===============================" << endl;
			cout << " |                             |" << endl;
			cout << " |  Choose from the following  |" << endl;
			cout << " |      1) Add Deal            |" << endl;
			cout << " |      2) Remove Deal         |" << endl;
			cout << " |      3) View Order          |" << endl;
			cout << " |      4) Change Order Status |" << endl;
			cout << " |      5) View Menu           |" << endl;
			cout << " |      6) Log out             |" << endl;
			cout << " |                             |" << endl;
			cout << " ===============================" << endl;
			cin >> adminOption;
			system("cls");
			switch (adminOption)
			{
			case 1:
				landOfSpices.setDeal();
				system("cls");
				adminMenu(landOfSpices, orderSlot);
				break;
			case 2:
				landOfSpices.removeDeal();
				system("cls");
				adminMenu(landOfSpices, orderSlot);
				break;
			case 3:
				landOfSpices.viewOrders();
				system("cls");
				adminMenu(landOfSpices, orderSlot);
				break;
			case 4:
				landOfSpices.changeOrderStatus();
				system("cls");
				adminMenu(landOfSpices, orderSlot);
				break;
			case 5:
				landOfSpices.displayMenu();
				system("cls");
				adminMenu(landOfSpices, orderSlot);
				break;
			case 6:
				mainMenu(landOfSpices,orderSlot);
				break;
			default:
				cout << " Wrong option entered, enter option again!" << endl;
				adminMenu(landOfSpices, orderSlot);
				break;
			}
		}
		else
		{
			cout << " Wrong credentials, press any key and try again!" << endl;
			_getch();
			system("cls");
			adminLogin(landOfSpices, orderSlot);
		}
	case 2:
		cout << " ===============================" << endl;
		cout << " |                             |" << endl;
		cout << " |  Choose from the following  |" << endl;
		cout << " |      1) View Menu           |" << endl;
		cout << " |      2) Order               |" << endl;
		cout << " |      3) View Order          |" << endl;
		cout << " |      4) View Order Status   |" << endl;
		cout << " |      5) Exit                |" << endl;
		cout << " |                             |" << endl;
		cout << " ===============================" << endl;
		cin >> userOption;
		system("cls");

		switch (userOption)
		{
		case 1:
			landOfSpices.displayMenu();
			system("cls");
			break;
		case 2:
			if (orderSlot < 20)
			{
				landOfSpices.setOrder(orderSlot);
			}
			else if (orderSlot >= 20)
			{
				cout << " All order slots are currently being entertained, kindly try again later, sorry for inconvenience" << endl;
			}
			system("cls");
			userMenu(landOfSpices, orderSlot);
			break;
		case 3:
			landOfSpices.viewOrderForCurrentCustomer(orderSlot);
			system("cls");
			userMenu(landOfSpices, orderSlot);
			break;
		case 4:
			landOfSpices.viewOrderStatusForCurrentCustomer(orderSlot);
			system("cls");
			userMenu(landOfSpices, orderSlot);
			break;
		case 5:
			mainMenu(landOfSpices, orderSlot);
			break;
		default:
			cout << " Wrong option entered, press any key and try again!" << endl;
			_getch();
			system("cls");
			userMenu(landOfSpices, orderSlot);
		}
	case 3:
		cout << " ===============================" << endl;
		cout << " |                             |" << endl;
		cout << " |                             |" << endl;
		cout << " |      Thanks for using       |" << endl;
		cout << " |       Land of Spices        |" << endl;
		cout << " |                             |" << endl;
		cout << " |                             |" << endl;
		cout << " ===============================" << endl;
		break;
	default:
		cout << " Wrong option entered, try again!"<<endl;
		mainMenu(landOfSpices, orderSlot);
		break;
	}
	

	system("Pause");
	return 0;
}

void mainMenu(fastFoodRestaurant lS, int oS)
{
	int loginOption = 0;
	int userOption = 0;
	int orderSlot = oS;

	cout << " ===============================" << endl;
	cout << " |                             |" << endl;
	cout << " |         Login as            |" << endl;
	cout << " |         1) Admin            |" << endl;
	cout << " |         2) User             |" << endl;
	cout << " |         3) Exit             |" << endl;
	cout << " |                             |" << endl;
	cout << " ===============================" << endl;
	cin >> loginOption;
	system("cls");

	string username, password;

	switch (loginOption)
	{
	case 1:

		cout << " ===============================" << endl;
		cout << "                              " << endl;
		cout << "         - Login -             " << endl;
		cout << "        Username: ", cin >> username;
		cout << "        Password: ", cin >> password;
		cout << "                              " << endl;
		cout << "                              " << endl;
		cout << " ===============================" << endl;
		if ((lS.getAdminPassword() == password) && (lS.getAdminUsername() == username))
		{
			system("cls");
			int adminOption = 0;
			cout << " ===============================" << endl;
			cout << " |                             |" << endl;
			cout << " |  Choose from the following  |" << endl;
			cout << " |      1) Add Deal            |" << endl;
			cout << " |      2) Remove Deal         |" << endl;
			cout << " |      3) View Order          |" << endl;
			cout << " |      4) Change Order Status |" << endl;
			cout << " |      5) View Menu           |" << endl;
			cout << " |      6) Log out             |" << endl;
			cout << " |                             |" << endl;
			cout << " ===============================" << endl;
			cin >> adminOption;
			system("cls");
			switch (adminOption)
			{
			case 1:
				lS.setDeal();
				system("cls");
				adminMenu(lS, oS);
				break;
			case 2:
				lS.removeDeal();
				system("cls");
				adminMenu(lS, oS);
				break;
			case 3:
				lS.viewOrders();
				system("cls");
				adminMenu(lS, oS);
				break;
			case 4:
				lS.changeOrderStatus();
				system("cls");
				adminMenu(lS, oS);
				break;
			case 5:
				lS.displayMenu();
				system("cls");
				adminMenu(lS, oS);
				break;
			case 6:
				mainMenu(lS, orderSlot);
				break;
			default:
				cout << " Wrong option entered, enter option again!" << endl;
				adminMenu(lS, oS);
				break;
			}
		}
		else
		{
			cout << " Wrong credentials, press any key and try again!" << endl;
			_getch();
			system("cls");
			adminLogin(lS, oS);
		}
	case 2:
		cout << " ===============================" << endl;
		cout << " |                             |" << endl;
		cout << " |  Choose from the following  |" << endl;
		cout << " |      1) View Menu           |" << endl;
		cout << " |      2) Order               |" << endl;
		cout << " |      3) View Order          |" << endl;
		cout << " |      4) View Order Status   |" << endl;
		cout << " |      5) Exit                |" << endl;
		cout << " |                             |" << endl;
		cout << " ===============================" << endl;
		cin >> userOption;
		system("cls");

		switch (userOption)
		{
		case 1:
			lS.displayMenu();
			system("cls");
			userMenu(lS, oS);
			break;
		case 2:
			if (orderSlot < 20)
			{
				lS.setOrder(orderSlot);
			}
			else if (orderSlot >= 20)
			{
				cout << " All order slots are currently being entertained, kindly try again later, sorry for inconvenience" << endl;
			}
			system("cls");
			userMenu(lS, oS);
			break;
		case 3:
			lS.viewOrderForCurrentCustomer(orderSlot);
			system("cls");
			userMenu(lS, oS);
			break;
		case 4:
			lS.viewOrderStatusForCurrentCustomer(orderSlot);
			system("cls");
			userMenu(lS, oS);
			break;
		case 5:
			mainMenu(lS,orderSlot);
			break;
		default:
			cout << " Wrong option entered, press any key and try again!" << endl;
			_getch();
			system("cls");
			userMenu(lS, oS);
		}
		break;
	case 3:
		cout << " ===============================" << endl;
		cout << " |                             |" << endl;
		cout << " |                             |" << endl;
		cout << " |      Thanks for using       |" << endl;
		cout << " |       Land of Spices        |" << endl;
		cout << " |                             |" << endl;
		cout << " |                             |" << endl;
		cout << " ===============================" << endl;
		break;
	default:
		cout << " Wrong option entered, press any key try again!" << endl;
		_getch();
		mainMenu(lS,orderSlot);
		break;
	}
}

void adminLogin(fastFoodRestaurant ls, int os)
{
	string username, password;

	cout << " ===============================" << endl;
	cout << "                              " << endl;
	cout << "         - Login -             " << endl;
	cout << "        Username: ", cin >> username;
	cout << "        Password: ", cin >> password;
	cout << "                              " << endl;
	cout << "                              " << endl;
	cout << " ===============================" << endl;
	if ((ls.getAdminPassword() == password) && (ls.getAdminUsername() == username))
	{
		system("cls");
		int adminOption = 0;
		cout << " ===============================" << endl;
		cout << " |                             |" << endl;
		cout << " |  Choose from the following  |" << endl;
		cout << " |      1) Add Deal            |" << endl;
		cout << " |      2) Remove Deal         |" << endl;
		cout << " |      3) View Order          |" << endl;
		cout << " |      4) Change Order Status |" << endl;
		cout << " |      5) View Menu           |" << endl;
		cout << " |      6) Log out             |" << endl;
		cout << " |                             |" << endl;
		cout << " ===============================" << endl;
		cin >> adminOption;
		system("cls");
		switch (adminOption)
		{
		case 1:
			ls.setDeal();
			system("cls");
			adminMenu(ls, os);
			break;
		case 2:
			ls.removeDeal();
			system("cls");
			adminMenu(ls, os);
			break;
		case 3:
			ls.viewOrders();
			system("cls");
			adminMenu(ls, os);
			break;
		case 4:
			ls.changeOrderStatus();
			system("cls");
			adminMenu(ls, os);
			break;
		case 5:
			ls.displayMenu();
			system("cls");
			adminMenu(ls, os);
			break;
		case 6:
			mainMenu(ls, os);
			break;
		default:
			cout << " Wrong option entered, enter option again!" << endl;
			adminMenu(ls, os);
			break;
		}
	}
	else
	{
		cout << " Wrong credentials, press any key and try again!" << endl;
		_getch();
		system("cls");
		adminLogin(ls, os);
	}

}

void adminMenu(fastFoodRestaurant ls, int os)
{
	int adminOption = 0;

	cout << " ===============================" << endl;
	cout << " |                             |" << endl;
	cout << " |  Choose from the following  |" << endl;
	cout << " |      1) Add Deal            |" << endl;
	cout << " |      2) Remove Deal         |" << endl;
	cout << " |      3) View Order          |" << endl;
	cout << " |      4) Change Order Status |" << endl;
	cout << " |      5) View Menu           |" << endl;
	cout << " |      6) Log out             |" << endl;
	cout << " |                             |" << endl;
	cout << " ===============================" << endl;
	cin >> adminOption;
	system("cls");
	switch (adminOption)
	{
	case 1:
		ls.setDeal();
		system("cls");
		adminMenu(ls, os);
		break;
	case 2:
		ls.removeDeal();
		system("cls");
		adminMenu(ls, os);
		break;
	case 3:
		ls.viewOrders();
		system("cls");
		adminMenu(ls, os);
		break;
	case 4:
		ls.changeOrderStatus();
		system("cls");
		adminMenu(ls, os);
		break;
	case 5:
		ls.displayMenu();
		system("cls");
		adminMenu(ls, os);
		break;
	case 6:
		mainMenu(ls, os);
		break;
	default:
		cout << " Wrong option entered, enter option again!" << endl;
		adminMenu(ls, os);
		break;
	}
}

void userMenu(fastFoodRestaurant ls, int os)
{
	int userOption = 0;

	cout << " ===============================" << endl;
	cout << " |                             |" << endl;
	cout << " |  Choose from the following  |" << endl;
	cout << " |      1) View Menu           |" << endl;
	cout << " |      2) Order               |" << endl;
	cout << " |      3) View Order          |" << endl;
	cout << " |      4) View Order Status   |" << endl;
	cout << " |      5) Exit                |" << endl;
	cout << " |                             |" << endl;
	cout << " ===============================" << endl;
	cin >> userOption;
	system("cls");

	switch (userOption)
	{
	case 1:
		ls.displayMenu();
		system("cls");
		userMenu(ls, os);
		break;
	case 2:
		if (os < 20)
		{
			ls.setOrder(os);
		}
		else if (os >= 20)
		{
			cout << " All order slots are currently being entertained, kindly try again later, sorry for inconvenience" << endl;
		}
		system("cls");
		userMenu(ls, os);
		break;
	case 3:
		ls.viewOrderForCurrentCustomer(os);
		system("cls");
		userMenu(ls, os);
		break;
	case 4:
		ls.viewOrderStatusForCurrentCustomer(os);
		system("cls");
		userMenu(ls, os);
		break;
	case 5:
		mainMenu(ls, os);
		break;
	default:
		system("cls");
		userMenu(ls, os);
	}
}
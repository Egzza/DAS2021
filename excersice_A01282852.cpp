// Eugenio González A01282852

// Classes were written in the same file to avoid problems with the delivery

#include <stdio.h>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

class User{
public:
    User();
    bool verifyLogin();

private:
    string userid, password, loginStatus;
};
// ----------------------------------------------------------------------------------


class Administrator: public User{
public:
    Administrator();
    bool updatecatalog();

private:
    string adminName, email;
};


// ----------------------------------------------------------------------------------


class Customer: public User{
public:
    Customer();
    // Register is reserved word
    bool register_();
    bool login();
    void updateProfile(Customer);

private:
 string name, address, email, shippingInfo;
 vector <ShoppingCart> shoppingCarts;
 vector <Orders> orders;
};

// ----------------------------------------------------------------------------------


class ShoppingCart{
public:
    ShoppingCart();
    void addCartItem(Item);
    string viewCartDetails();
    bool chechout();

protected:
    void updateQuantity(int);

private:
    int cartid, productID, quantity;
    time_t dateAdded;
};


// ----------------------------------------------------------------------------------


class Orders{
public:
    Orders();
    void placeOrder(time_t);

private:
    int orderid;
    string dateCreated, dateShipped, status;
    ShippingInfo shippingInfo;
};


// ----------------------------------------------------------------------------------


class ShippingInfo{
public:
    ShippingInfo();
    void updateShippingInfo();

private:
    int shippingid, shippingCost, shippingRegionid;
    string shippingType;
};


// ----------------------------------------------------------------------------------


// Item Class is not included in the diagram, just in addCartItem() method
class Item{

};
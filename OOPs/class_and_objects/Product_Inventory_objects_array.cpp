#include<iostream>
using namespace std;

class product{
    public:
        string name;
        int productID;
        double price;
        int quantity;
        int sold = 0;
        int restocked = 0;
        

        double totalValue(){
            return price*quantity;
        }
        void sellProduct(int amount){
            if(amount>quantity){
                cout << "Not enough stock" << endl;
            }else{
                 quantity = quantity - amount;
                 sold+=amount;
            }
        }
        void restock(int amount){
            quantity = quantity + amount;
            restocked+=amount;
        }
        void display(){
            cout<<"name = "<<name<<endl;
            cout<<"product ID = "<<productID<<endl;
            cout<<"price = "<<price<<endl;
            cout<<"quantity = "<<quantity<<endl;
            cout << "sold = " << sold << endl;
            cout << "restocked = " << restocked << endl;
        }

};
int main(){
    product p[3];
    p[0].name="sugar";
    p[0].productID=345;
    p[0].price=150;
    p[0].quantity=5000;

    p[1].name="rice";
    p[1].productID=112;
    p[1].price=300;
    p[1].quantity=2000;

    p[2].name="oil";
    p[2].productID=568;
    p[2].price=500;
    p[2].quantity=1000;

    for(int i=0; i<3; i++){
        cout<<"product = "<<i+1<<endl; 
        cout<<"total value = "<<p[i].totalValue()<<endl;
        p[i].sellProduct(300);
        p[i].restock(5000);
        p[i].display();
    }

return 0;
    
}
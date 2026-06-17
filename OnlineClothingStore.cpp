#include <iostream>
#include <iomanip>
#include <string>
using namespace std ;

int main ()
{
	int quantity, numproducts;
	char category, option, place; 
	double price;
	string product, username, contact, address, size, code, productname;
	
	cout<<"Name	      : ";
	getline(cin, username);
	cout<<"Phone Number  : ";
	getline(cin, contact);
	cout<<"Address	      : ";
	getline(cin, address);
	cout<<"East/West(W/E): ";
	cin>>place;
	
	cout<<"\nWelcome to El Dani Store "<<username<<"!"<<endl;
	cout<<"Here are our latest products."<<endl;
	
	cout<<setfill(' ')<<setw(80)<<"ELDANI STORE"<<endl ;
	cout<<"Men's Clothing"<<endl ;
	cout<<setfill('-')<<setw(130)<<""<<endl ;
	cout<<setfill(' ') ;
    cout<<'|'<<"      Product's name "<<setw(7)<<('|')<<"             Colour"<<setw(13)<<('|')<<"      Size"<<setw(7)<<('|')<<"           Material"<<setw(12)<<('|')<<"        Price"<<setw(8)<<('|')<<endl ;
	cout<<setfill('-')<<setw(130)<<""<<endl ;
	cout<<setfill(' ') ;
	cout<<'|'<<"         T-Shirt"<<setw(12)<<('|')<<"     Black(S1B),White(S1W)"<<setw(6)<<('|')<<"    S,M,L,XL"<<setw(5)<<('|')<<"            Cotton"<<setw(13)<<('|')<<"        RM 38"<<setw(8)<<('|')<<endl ;
	cout<<'|'<<"          Jeans"<<setw(13)<<('|')<<"     Denim(P1D),Black(P1B)"<<setw(6)<<('|')<<"    S,M,L,XL"<<setw(5)<<('|')<<"            Denim"<<setw(14)<<('|')<<"        RM 45"<<setw(8)<<('|')<<endl ;
	cout<<'|'<<"         Jacket"<<setw(13)<<('|')<<"     Black(S2B),Green(S2G)"<<setw(6)<<('|')<<"    S,M,L,XL"<<setw(5)<<('|')<<"           Leather"<<setw(13)<<('|')<<"        RM 62"<<setw(8)<<('|')<<endl ;
    cout<<setfill('-')<<setw(130)<<"" ;
	cout<<setfill(' ') ;
	cout<<setfill(' ')<<setw(156)<<""<<endl ;
	
	cout<<"Women's Clothing"<<endl ;
	cout<<setfill('-')<<setw(130)<<""<<endl ;
	cout<<setfill(' ') ;
    cout<<'|'<<"      Product's name "<<setw(7)<<('|')<<"             Colour"<<setw(13)<<('|')<<"      Size"<<setw(7)<<('|')<<"           Material"<<setw(12)<<('|')<<"        Price"<<setw(8)<<('|')<<endl ;
	cout<<setfill('-')<<setw(130)<<""<<endl ;
	cout<<setfill(' ') ;
	cout<<'|'<<"          Blouse"<<setw(12)<<('|')<<"     Black(S3B),White(S3W)"<<setw(6)<<('|')<<"    XS,S,M,L"<<setw(5)<<('|')<<"             Silk"<<setw(14)<<('|')<<"        RM 30"<<setw(8)<<('|')<<endl ;
	cout<<'|'<<"          Dress"<<setw(13)<<('|')<<"     Navy(S4N),Black(S4B)"<<setw(7)<<('|')<<"    S,M,L,XL"<<setw(5)<<('|')<<"           Polyester"<<setw(11)<<('|')<<"        RM 65"<<setw(8)<<('|')<<endl ;
	cout<<'|'<<"          Skirt"<<setw(13)<<('|')<<"     Black(S5B),White(S5W)"<<setw(6)<<('|')<<"    XS,S,M,L"<<setw(5)<<('|')<<"            Cotton"<<setw(13)<<('|')<<"        RM 55"<<setw(8)<<('|')<<endl ;
    cout<<setfill('-')<<setw(130)<<"" ; 
	cout<<setfill(' ')<<endl ;
	cout<<setfill(' ')<<setw(120)<<"" ;
	
	cout<<"Kid's Clothing"<<endl ;
	cout<<setfill('-')<<setw(130)<<""<<endl ;
	cout<<setfill(' ') ;
    cout<<'|'<<"      Product's name "<<setw(7)<<('|')<<"             Colour"<<setw(13)<<('|')<<"      Size"<<setw(7)<<('|')<<"           Material"<<setw(12)<<('|')<<"        Price"<<setw(8)<<('|')<<endl ;
	cout<<setfill('-')<<setw(130)<<""<<endl ;
	cout<<setfill(' ') ;
	cout<<'|'<<"          Hoodie"<<setw(12)<<('|')<<"     Pink(S6P),Blue(S6B)"<<setw(8)<<('|')<<"  2-3,4-5,6-7"<<setw(4)<<('|')<<"            Cotton"<<setw(13)<<('|')<<"        RM 25"<<setw(8)<<('|')<<endl ;
	cout<<'|'<<"          T-Shirt"<<setw(11)<<('|')<<"     Red(S7R),Blue(S7B)"<<setw(9)<<('|')<<"  2-3,4-5,6-7"<<setw(4)<<('|')<<"            Cotton"<<setw(13)<<('|')<<"        RM 20"<<setw(8)<<('|')<<endl ;
	cout<<'|'<<"           Jeans"<<setw(12)<<('|')<<"     Black(P2B),White(P2W)"<<setw(6)<<('|')<<"  2-3,4-5,6-7"<<setw(4)<<('|')<<"             Denim"<<setw(13)<<('|')<<"        RM 40"<<setw(8)<<('|')<<endl ;
    cout<<setfill('-')<<setw(130)<<"" ;
	cout<<setfill(' ') ;
	cout<<setfill(' ')<<setw(156)<<""<<endl ;
	
	cout<<"Size Chart"<<endl ;
	cout<<setfill('-')<<setw(72)<<""<<endl ;
	cout<<setfill(' ') ;
    cout<<'|'<<"  Category"<<setw(3)<<('|')<<" Size"<<setw(2)<<('|')<<"  Chest(Inches)"<<setw(3)<<('|')<<"  Waist(Inches)"<<setw(3)<<('|')<<"    Height"<<setw(5)<<('|')<<endl ;
	cout<<setfill('-')<<setw(72)<<""<<endl ;
	cout<<setfill(' ') ;
	cout<<'|'<<"   Men's'"<<setw(4)<<('|')<<"  S"<<setw(4)<<('|')<<"      34-36"<<setw(7)<<('|')<<"     28 - 30"<<setw(6)<<('|')<<"  5'5 - 5'9'"<<setw(3)<<('|')<<endl ;
	cout<<'|'<<setfill(' ')<<setw(13)<<('|')<<"  M"<<setw(4)<<('|')<<"      38-40"<<setw(7)<<('|')<<"     32 - 34"<<setw(6)<<('|')<<"  5'7 - 5'11'"<<setw(2)<<('|')<<endl ;
	cout<<'|'<<setfill(' ')<<setw(13)<<('|')<<"  L"<<setw(4)<<('|')<<"      42-44"<<setw(7)<<('|')<<"     36 - 38"<<setw(6)<<('|')<<"  5'9 - 6'1'"<<setw(3)<<('|')<<endl ;
	cout<<'|'<<setfill(' ')<<setw(13)<<('|')<<"  XL"<<setw(3)<<('|')<<"      46-48"<<setw(7)<<('|')<<"     40 - 42"<<setw(6)<<('|')<<"  6'0 - 6'3'"<<setw(3)<<('|')<<endl ;
	
	cout<<setfill('-')<<setw(72)<<""<<endl ;
	cout<<setfill(' ') ;
	cout<<'|'<<"  Women's'"<<setw(3)<<('|')<<"  XS"<<setw(3)<<('|')<<"      30-32"<<setw(7)<<('|')<<"     22 - 24"<<setw(6)<<('|')<<"  5'0 - 5'4'"<<setw(3)<<('|')<<endl ;
	cout<<'|'<<setfill(' ')<<setw(13)<<('|')<<"  S"<<setw(4)<<('|')<<"      34-36"<<setw(7)<<('|')<<"     26 - 28"<<setw(6)<<('|')<<"  5'3 - 5'7'"<<setw(3)<<('|')<<endl ;
	cout<<'|'<<setfill(' ')<<setw(13)<<('|')<<"  M"<<setw(4)<<('|')<<"      38-40"<<setw(7)<<('|')<<"     30 - 32"<<setw(6)<<('|')<<"  5'4 - 5'8'"<<setw(3)<<('|')<<endl ;
	cout<<'|'<<setfill(' ')<<setw(13)<<('|')<<"  L"<<setw(4)<<('|')<<"      42-44"<<setw(7)<<('|')<<"     34 - 36"<<setw(6)<<('|')<<"  5'5 - 5'9'"<<setw(3)<<('|')<<endl ;
	cout<<'|'<<setfill(' ')<<setw(13)<<('|')<<"  XL"<<setw(3)<<('|')<<"      46-48"<<setw(7)<<('|')<<"     38 - 40"<<setw(6)<<('|')<<"  5'6 - 6'0'"<<setw(3)<<('|')<<endl ;
	cout<<setfill('-')<<setw(72)<<""<<endl ;
	cout<<setfill(' ') ;
	cout<<'|'<<"   Kid's'"<<setw(4)<<('|')<<"  2-3"<<setw(2)<<('|')<<"      20-21"<<setw(7)<<('|')<<"     20 - 21"<<setw(6)<<('|')<<"   33' - 37'"<<setw(3)<<('|')<<endl ;
	cout<<'|'<<setfill(' ')<<setw(13)<<('|')<<"  4-5"<<setw(2)<<('|')<<"      22-23"<<setw(7)<<('|')<<"     21 - 22"<<setw(6)<<('|')<<"   38' - 42'"<<setw(3)<<('|')<<endl ;
	cout<<'|'<<setfill(' ')<<setw(13)<<('|')<<"  6-7"<<setw(2)<<('|')<<"      24-25"<<setw(7)<<('|')<<"     22 - 23"<<setw(6)<<('|')<<"   43' - 47'"<<setw(3)<<('|')<<endl ;
	cout<<setfill('-')<<setw(72)<<""<<endl ;
	cout<<setfill(' ') ;
	
	cout<<"\nAdd item to cart. Please enter product code exactly as the table. Thank you!"<<endl;
	

	do{
		cout<<"\nEnter product code: ";
		cin>>code;
		cout<<endl;
		cout<<"Enter size: ";
		cin>>size;
		
		const int numproducts = 6;
string productname[numproducts] = {"T-Shirt", "Jeans", "Jacket", "Blouse", "Dress", "Skirt"};
double price[numproducts] = {38.0, 45.0, 62.0, 30.0, 65.0, 55.0};
string code[numproducts] = {"S1B", "P1D", "S2B", "S3B", "S4N", "S5B"};
		
	
		
		
	
		cout<<"\nDo you want to add more item in your cart? (Y-Yes/N-No): ";
		cin>>option;
	}while(option=='Y');
	
	
}


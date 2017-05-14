#include <iostream>
using namespace std;

class Kare
{
public:
	int kare;
	Kare(int s){kare=s;}
	
	int getir() 
	{
		return kare;
	}
	void Yaz() const
	{
		cout<<kare*kare<<endl;
	}
};



int main()
{
	const Kare a1(3); // normalde sabit ifade oluşturduğunda hiçbir şekilde fonksiyonlara erişemeyiz ve değiştireceyiz
					  // donus_tipi fonksiyon() const   yazdığımızda sabit olan fonksyonlara bir şekilde erişebiliriz ama gine değiştiremeyiz.
	Kare a2(4);
	
	cout<<a1.getir()<<endl; // HATA!!  engellemek için hatayı "const" ifadesini getirin "getir()" fonksiyonunun sonuna
	a1.Yaz();
	
	
	cout<<a2.getir()<<endl;
	a2.Yaz();
	return 0;
}

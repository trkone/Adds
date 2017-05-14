#include <iostream>
using std::cout;
using std::endl;

#define PI 3.14  //	"const double PI=3.14" şeklindede yazılabilir sabit bir ifadedir.

#define PI2() 3.14 // "inline double PI2(){return 3.14;}" şeklindede yazılabilir ınline bir fonksiyondur.

#define Kare(A) A*A // template ilede yazılabilir onun orneğini daha sonra gostericem


int main()
{
	cout<<"Sabit:"<<PI<<endl;
	cout<<"Inline:"<<PI2()<<endl<<endl
	
	<<"Kare(double):"<<Kare(2.1)<<endl<<"Kare(int):"<<Kare(3)<<endl;
	
	return 0;
}

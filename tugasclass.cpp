#include <iostream>
#include <string>
using namespace std;

class motor{
	public:
		int jumlahMotor;
		string merkMotor;
		void berkendara(string kecepatan);
		
		void motor::berkendara(string kecepatan){
	cout << "kecepatan Motor : "<< kecepatan <<endl;
	
	int main(){
 // membuat objek dari class
 motor motorBalap, motorMatic, motorBebek;
 // memberi nilai dari objek yang telah kita buat..
 motorMatic.jumlahMotor = 50;
 motorMatic.merkMotor = "enak";
 
 motorBalap.jumlahMotor = 100;
 motorBalap.merkMotor = "yamaha";
 
 string pilihan;
 cout << "ikam menukar kah atau kada : "; cin >> pilihan;
 
 if(pilihan=="motorBalap"){
 cout << " Motor Balap :"<<endl;
 cout << " - jumlahMotor = "<<motorBalap.jumlahMotor<<endl;
 cout << " - Merk Motor = "<<motorBalap.merkMotor<<endl;
 motorBalap.berkendara("200Km/jam");
 
 }else if(pilihan=="motorMatic"){
 cout << " Motor Balap :"<<endl;
 cout << " - jumlah Motor = "<<motorBalap.jumlahMotor<<endl;
 cout << " - Merk Motor = "<<motorBalap.merkMotor<<endl;
 motorBalap.berkendara("120Km/jam");
 
 }else if(pilihan=="motorBebek"){
 cout << " Motor Bebek :"<<endl;
 cout << " - jumlah Motor = "<<motorBalap.jumlahMotor<<endl;
 cout << " - Merk Motor = "<<motorBalap.merkMotor<<endl;
 motorBebek.berkendara("1200Km/jam");
}
}
 

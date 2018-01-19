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

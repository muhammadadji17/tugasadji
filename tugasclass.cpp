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

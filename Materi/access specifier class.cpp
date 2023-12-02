/*
Kita dapat menonaktifkan akses ke member fieled 
tapi mengizinannya ke member function

ada tiga jenis access specifier : public, prtected, dan private
*/

class Myclass {
	public:
		// semua kode dalam sini bersifat public access
	protected:
		// semua kode dalam sini bersifat protected access
	private:
		// semua kode dalam sini bersifat private access
}

// Secara default access specifier sebuah class bersifat private
class Myclass {
	// semua kode dalam sini
	//secara default bersifat private access specifier
}

// Jika ditulis dengan struct maka secara default bersifat public access specifier
// struct setara dengan class namun bersifat public secara default
struct MyStruct {
	//Semua kode dalam sini
	//secara default bersifat public access specifier
};
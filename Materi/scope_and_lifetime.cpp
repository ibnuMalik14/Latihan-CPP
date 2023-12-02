/*
Saat kita mendeklarasikan suatu variabel,
namanya hanya valid di dalam beberapa bagian kode. 
Dan bagian (bagian, porsi, wilayah) dari kode sumber itu disebut scope. 
Ini adalah wilayah kode di mana nama tersebut dapat diakses.
*/

/*
LOCAL SCOPE
Saat kita mendeklarasikan nama di dalam suatu fungsi, nama tersebut memiliki cakupan lokal. 
Cakupannya dimulai dari titik deklarasi hingga akhir blok fungsi yang ditandai dengan }.

Saat kita mendeklarasikan nama di dalam suatu fungsi, nama tersebut memiliki cakupan lokal.
Cakupannya dimulai dari titik deklarasi hingga akhir blok fungsi yang ditandai dengan }.
*/

int main()
{
	int x = 123; // first x' scope begins here
	{
		int x = 456; // redefinition of x, second x' scope begins here
	} // block ends, second x' scope ends here
	// the first x resumes here
} // block ends, scope of first x's ends here
/* Penghitungan Gaji Karyawan */
/* Nadia Nazila Ramadina */
/* 20051397028 */
/* 2020B */

#include <iostream>

using namespace std;

int main ()
{
	char Nama[10],Golongan;
	int jamkerja,jamlibur,jamlembur,gajimingguan,gajilembur,totalgaji,gajijam;
	cout << "Menghitung Gaji Karyawan";
	cout << "===============================";
	cout << "Oleh Nadia Nazila Ramadina";
	cout << "================================";
	cout << "Masukkan Nama Karyawan";
	cin >> Nama;
	cout << "Masukkan Golongan (A B C D) : ";
	cin >> Golongan;
	cout << "Masukkan Jumlah Jam Kerja : ";
	cin >> jamkerja;
	
	switch (Golongan) 
	{
	
	case 'A' :
		{
			gajijam = 5000;
			break;
		}
	case 'B' :
		{
			gajijam = 7000;
			break; 
		}
	case 'C' :
		{
			gajijam = 8000;
			break; 
		}
	case 'D' :
		{
			gajijam = 10000;
			break; 
		}
	default:
		{
			gajijam = 0;
			break;
		}
	}
	
	
	if  (jamkerja > 48 )
	{
		jamlembur = jamkerja - 48;
		cout << "Terdapat Jam Lembur : "<< jamlembur << "Jam" << endl;
		gajimingguan = gajijam * 48;
		gajilembur = jamlembur * 4000;
		totalgaji = gajimingguan + gajilembur;
	}
	
	
	else if (jamkerja <= 48)
	{
		cout << "Tidak Terdapat Jam Lembur : " << endl;
		gajimingguan = gajijam * jamkerja;
		totalgaji = gajimingguan;
	}
	
	
	
	cout << "============================";
	cout << "Masukkan Nama Karyawan";
	cout << Nama;
	cout << endl;
	cout << "Gaji Mingguan Anda Adalah Rp. ";
	cout << totalgaji << endl;
	return 0;
}

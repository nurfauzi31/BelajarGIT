#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
	
struct pasien{//int struct yang berisi data di bawah
	int nomerpasien[10];
	string NIK[10];
	string nama[10];
	string goldar[10];
	string keluhan[10];
	int banyak[10];
};

void menu(){//ini void untuk menampilkan menu
	cout << "\n Data Pasien Rumah Sakit Amelia\n";
	cout << "\n 1. Membuat Data Baru Untuk Pasien Baru\n";
	cout << "\n 2. Mencari Data Pasien\n";
	cout << "\n 3. Menampilkan Seluruh Data Pasien\n";
	cout << "\n 4. Keluar\n";
	cout << "Masukkan Pilihan = ";
}

main(){//main untuk memulai program
	pasien psi;//pengenalan struct pasien menjadi psi
	string cari;//variable string dengan nama cari
	bool hasil = false;//variable bool dengan nama hasil
	int pil,posisi,a=0;//variable int dengan nama pil,posisi,a
	do{//perulangan agar menu bisa di jalankan terus
		menu();//untuk menampilkan menu
		cin>>pil;
		switch (pil){//switch untuk pilihan
		case 1:
			psi.nomerpasien[a] = a+1;cin.ignore();
			cout << "Masukkan NIK Pasien = ";
			getline(cin, psi.NIK[a]);   
			
			cout << "Masukkan Nama Pasien = ";
			getline(cin, psi.nama[a]);
			cout << "Masukkan Golongan Darah Pasien = ";
			getline(cin, psi.goldar[a]);
			cout << "Masukkan Keluhan Pasien = ";
			getline(cin, psi.keluhan[a]);
			
			psi.banyak[a] = 1;
			a++;
			break;
		case 2:
			cout << "Masukkan NIK Pasien =";
				cin>>cari;//id karyawan disini dideklarasikan dengan variable cariData agar bisa dimasukkan kondisi untuk mencari letak index array
				for(int i=0; i<a; i++)
					{//perulangan
					if(cari == psi.NIK[i])//jika cari sama dengan NIK dari pasien maka
					{
						posisi = i;//jika benar nilai posisi akan diisi oleh i
						hasil = true;//dan boolean bertemu menjadi true
					}
					}
		if(hasil){//jika hasil sama dengan true maka akan menjalankan syntaks di bawah
			cout << "\n\n Nomer Pasien = "<<psi.nomerpasien[posisi]<<"\n";
			cout << "NIK Pasien = "<<psi.NIK[posisi]<<"\n";
			cout << "Nama Pasien = "<<psi.nama[posisi]<<"\n";
			cout << "Golongan Darah Pasien = "<<psi.goldar[posisi]<<"\n";
			cout << "Keluhan Pasien = "<<psi.keluhan[posisi]<<"\n";
			cout << "Pasien Pernah Berobat Sebanyak = "<<psi.banyak[posisi]<<" Kali\n";
			psi.banyak[posisi] = psi.banyak[posisi] + 1;cin.ignore();
			getline(cin, psi.keluhan[a]);
			
		}
		else {//jika ketemu = false maka akan menjalankan program ini
			cout<<"Data yang anda berikan"<<endl;
			cout<<"Tidak tertera pada data pasien"<<endl;
			
		}
	break;
	case 3:
		for (int b=0;b<a;b++){//perulangan untuk
			cout << "\n\nData Ke" <<b+1<<"\n";
			cout << "Nomer Pasien = " <<psi.nomerpasien[b]<<"\n";
			cout << "NIK Pasien = " <<psi.NIK[b]<<"\n";
			cout << "Nama Pasien = " <<psi.nama[b]<<"\n";
			cout << "Golongan Darah Pasien = " <<psi.goldar[b]<<"\n";
			cout << "Keluhan Pasien = " <<psi.keluhan[b]<<"\n";
			cout << "Pasien Pernah Berobat Sebanyak = " <<psi.banyak[b]<<" Kali\n";
		}
	break;
	default://jika pil selain 1-4 maka akan menjalankan syntaks di bawah
	cout << "pilihan tidak tersedia";
	
	}
	}while(pil!=4);//jika memilih angka 4 maka program akan berakhir dan mengucapkan terimakasih
	 system ("CLS");//untuk membersihkan layar
	 cout<< "Terimakasih sudah menggunakan layanan Rumah Sakit Amelia";
}
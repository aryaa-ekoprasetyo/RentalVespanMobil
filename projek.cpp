#include <iostream>
#include <fstream>
using namespace std;

class admin {
	public:
		void loginAdmin() {
			system("cls");
			cout << "==== LOGIN ADMIN =====\n";
			cout << "Username Admin : ";
			cin >> username;
			cout << "Password : ";
			cin >> pass;
			
			if(username == "admin" && pass == "admin1418"){
				
				
				cout << "=== MENU ADMIN ===\n\n";
	            cout << "1. Menambah/mengurangi mobil\n";
	            cout << "2. Melihat Daftar Mobil\n";
	            cout << "3. Cetak Data Pelanggan/Struk\n";
	            cout << "4. Lihat estimasi waktu rental\n";
	            cout << "0. Kembali\n";
	            cout << "Pilih: ";
	            cin >> pilih;
	            
	            switch (pilih) {
            	case 1:
                	cout << "Menu Data Barang" << endl;
                	cin.ignore();
                	cin.get();
                	break;
           		case 2:
                	cout << "Menu Data Pelanggan" << endl;
                	cin.ignore();
                	cin.get();
                	break;
            	case 3:
                	cout << "Menu Laporan" << endl;
                	break;
            	case 4:
                	cout << "Logout Berhasil" << endl;
                	break;
            	default:
                	cout << "Pilihan Tidak Valid" << endl;
        		} 
				}else {
        			cout << "\nUsername atau Password Salah!" << endl;
    			}
    			
			
		}
	      		
	    
	private:
		string username, pass;
		int pilih;
};


class pelanggan {
	friend ostream& operator<<(ostream&, const pelanggan&);
	friend istream& operator>>(istream&, pelanggan&);
	
	public:
		void hitung() {
			biaya = harga * hari;
		}
		void proses() {
			
  		 	cout << "\nMulai menyewa?\n";
  		 	cout << "1. Ya\n";
  		 	cout << "2. Tidak";
  		 	cout << "\n= ";
			cin >> jawab;	
				if (jawab == 1){
					menuSewa();		
				} else if (jawab == 2) {
					return;
				} else {
				}		
		}
		
		
		void trx() {
		    int pilihPaket;
		
		    cout << "\nMobil yang dipilih : " << mobil;
		
		    cout << "\n\nPilih paket";
		    cout << "\n1. Per Jam";
		    cout << "\n2. Per Hari";
		    cout << "\n3. Per Minggu";
		    cout << "\n4. Per Bulan";
		    cout << "\nPilih : ";
		    cin >> pilihPaket;
		
		    switch(pilihPaket) {
		        case 1:
		            paket = "Per Jam";
		            cout << "Berapa jam : ";
		            cin >> lamaSewa;
		            totalBayar = lamaSewa * hargaJam;
		            break;
		
		        case 2:
		            paket = "Per Hari";
		            cout << "Berapa hari : ";
		            cin >> lamaSewa;
		            totalBayar = lamaSewa * hargaHari;
		            break;
		
		        case 3:
		            paket = "Per Minggu";
		            cout << "Berapa minggu : ";
		            cin >> lamaSewa;
		            totalBayar = lamaSewa * hargaMinggu;
		            break;
		
		        case 4:
		            paket = "Per Bulan";
		            cout << "Berapa bulan : ";
		            cin >> lamaSewa;
		            totalBayar = lamaSewa * hargaBulan;
		            break;
		
		        default:
		            cout << "Paket tidak ada";
		            return;
		    }
		    
		    cout << "Total bayar = " << totalBayar;
		    cout << "\n\nCetak Struk (klik ENTER untuk cetak)";
		    cin.ignore();
			cin.get();
		
			Struk();
		    cetakStruk();
		}
		
		
		void Struk() {
			system("cls");
		    cout << "\n\n";
		    cout << (char)201;
		    for(int i=0;i<38;i++) cout << (char)205;
		    cout << (char)187 << endl;
		
		    cout << (char)186 << "          STRUK RENTAL MOBIL          " << (char)186 << endl;
		
		    cout << (char)204;
		    for(int i=0;i<38;i++) cout << (char)205;
		    cout << (char)185 << endl;
		
		    cout << " Mobil       : " << mobil << endl;
		    cout << " Paket       : " << paket << endl;
		    cout << " Durasi      : " << lamaSewa << endl;
		    cout << " Total Bayar : Rp" << totalBayar << endl;
		
		    cout << (char)200;
		    for(int i=0;i<38;i++) cout << (char)205;
		    cout << (char)188 << endl;
		
		    cout << "Terima kasih telah menyewa di RENT.4.FUN\n";
		}
		
		
		void cetakStruk() {
		    ofstream file("struk_sewa.txt");
		
		    file << "====================================\n";
		    file << "         STRUK RENTAL MOBIL\n";
		    file << "====================================\n";
		    file << "Mobil       : " << mobil << endl;
		    file << "Paket       : " << paket << endl;
		    file << "Durasi      : " << lamaSewa << endl;
		    file << "Total Bayar : Rp" << totalBayar << endl;
		    file << "====================================\n";
		    file << "Terima kasih telah menyewa di RENT.4.FUN\n";
		
		    file.close();
		
		    cout << "\nStruk berhasil disimpan ke struk_sewa.txt\n";
		}
		
		
		void menuSewa() {
			int pilihMobil;
			system("cls");
			cout << (char)201;
  	  		for(int i=0;i<19;i++) cout << (char)205;
				cout << (char)187 << endl;
	
    			cout << (char)186 <<  "    PILIH MOBIL    " << (char)186 <<  endl;
    
				cout << (char)200;
   			for(int i=0;i<19;i++) cout << (char)205;
    			cout << (char)188 << endl;
    			
    			
    					cout << (char)218;
			  		  for(int i=0;i<82;i++) cout << (char)196;
			   		cout << (char)191 << endl;
	
			   		
					cout << (char)179 << " No | Mobil              | Per Jam   | Harian      | Mingguan     | Bulanan       " << (char)179 << endl;
					
					cout << (char)195;
			    	  for(int i=0;i<82;i++) cout << (char)196;
			    	cout << (char)180 << endl;
					
					cout << (char)179 << " 1  | Toyota Avanza      | Rp50.000  | Rp350.000   | Rp2.100.000  | Rp7.500.000   " << (char)179 << endl;
					cout << (char)179 << " 2  | Toyota Innova      | Rp75.000  | Rp500.000   | Rp3.200.000  | Rp10.500.000  " << (char)179 << endl;
					cout << (char)179 << " 3  | Toyota Yaris       | Rp40.000  | Rp250.000   | Rp1.450.000  | Rp4.500.000   " << (char)179 << endl;
					cout << (char)179 << " 4  | Toyota Alphard     | Rp200.000 | Rp1.500.000 | Rp9.500.000  | Rp30.000.000  " << (char)179 << endl;
					cout << (char)179 << " 5  | Toyota Hiace       |     -     | Rp1.100.000 | Rp4.250.000  | Rp29.500.000  " << (char)179 << endl;
					cout << (char)179 << " 6  | Daihatsu Xenia     | Rp45.000  | Rp320.000   | Rp1.950.000  | Rp7.000.000   " << (char)179 << endl;
					cout << (char)179 << " 7  | Mitsubishi Pajero  | Rp120.000 | Rp850.000   | Rp5.500.000  | Rp18.000.000  " << (char)179 << endl;
					cout << (char)179 << " 8  | Honda Brio         | Rp50.000  | Rp250.000   | Rp1.450.000  | Rp4.500.000   " << (char)179 << endl;
					cout << (char)179 << " 9  | Izuzu ELF Short    |     -     | Rp800.000   | Rp5.250.000  | Rp20.500.000  " << (char)179 << endl;
					cout << (char)179 << " 10 | Izuzu ELF Long     |     -     | Rp1.200.000 | Rp4.900.000  | Rp32.500.000  " << (char)179 << endl;
					
					cout << (char)192;
			  		  for(int i=0;i<82;i++) cout << (char)196;
			   		cout << (char)217 << endl;
			   		
			   		cout << "Pilih: ";
			   		cin >> pilihMobil;
			   		
			
			   		
			   		switch(pilihMobil) {
			   			case 1:
						    mobil = "Toyota Avanza";
						    hargaJam = 50000;
						    hargaHari = 350000;
						    hargaMinggu = 2100000;
						    hargaBulan = 7500000;
						    trx();
						    break;
						
						case 2:
						    mobil = "Toyota Innova";
						    hargaJam = 75000;
						    hargaHari = 500000;
						    hargaMinggu = 3200000;
						    hargaBulan = 10500000;
						    trx();
						    break;
						
						case 3:
						    mobil = "Toyota Yaris";
						    hargaJam = 40000;
						    hargaHari = 250000;
						    hargaMinggu = 1450000;
						    hargaBulan = 4500000;
						    trx();
						    break;
			   			
			   			case 4:
						    mobil = "Toyota Alphard";
						    hargaJam = 200000;
						    hargaHari = 1500000;
						    hargaMinggu = 9500000;
						    hargaBulan = 30000000;
						    trx();
						    break;
						    
						case 5:
						    mobil = "Toyota Hiace";
						    hargaJam = 0;
						    hargaHari = 1100000;
						    hargaMinggu = 4250000;
						    hargaBulan = 29500000;
						    trx();
						    break; 
							
						case 6:
						    mobil = "Daihatsu Xenia";
						    hargaJam = 45000;
						    hargaHari = 320000;
						    hargaMinggu = 1950000;
						    hargaBulan = 7000000;
						    trx();
						    break; 
							
						case 7:
						    mobil = "Mitsubishi Pajero";
						    hargaJam = 120000;
						    hargaHari = 850000;
						    hargaMinggu = 5500000;
						    hargaBulan = 18000000;
						    trx();
						    break; 
						    
						case 8:
						    mobil = "Honda Brio";
						    hargaJam = 50000;
						    hargaHari = 250000;
						    hargaMinggu = 1450000;
						    hargaBulan = 4500000;
						    trx();
						    break;
						    
						case 9:
						    mobil = "Izuzu ELF Short";
						    hargaJam = 0;
						    hargaHari = 800000;
						    hargaMinggu = 5250000;
						    hargaBulan = 20500000;
						    trx();
						    break;
						    
						case 10:
						    mobil = "Izuzu ELF Long";
						    hargaJam = 0;
						    hargaHari = 1200000;
						    hargaMinggu = 4900000;
						    hargaBulan = 32500000;
						    trx();
						    break;
						    
			   			default:
			   				cout << "Pilihan tidak ada";
					   }

    			cin.ignore();
    			cin.get();
		}
		
		void menu() {
			do {
	system("cls");
	
	//menu pelanggan
	cout << " SELAMAT DATANG DI RENT.4.FUN\n";
	cout << "\n> Silahkan Pilih Menu <\n";
	cout << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 <<(char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << endl;
	cout << "| 1. Info Rental\n";
	cout << "| 2. Status Mobil\n";
	cout << "| 3. Aturan Rental\n";
	cout << "| 4. Bantuan FAQ\n";
	cout << "| 0. Keluar\n";
	cout << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << endl;
	cout << "";
	cout << "\nPilih: ";
	cin >> pilih;
	
	switch(pilih) {
				case 1:
					system("cls");
					
					cout << (char)201;
			  		  for(int i=0;i<81;i++) cout << (char)205;
			   		cout << (char)187 << endl;
			   		
			   		cout <<  (char)186 << "                                                                                 " << (char)186 << endl;
					cout <<  (char)186 << "                     DAFTAR JENIS MOBIL & PAKET RENTAL MOBIL                     " << (char)186 << endl;
					cout <<  (char)186 << "                                                                                 " << (char)186 << endl;
					
					
					cout << (char)200;
			  		  for(int i=0;i<81;i++) cout << (char)205;
			   		cout << (char)188 << endl;
					
					cout << endl;
					
					
					cout << (char)218;
			  		  for(int i=0;i<82;i++) cout << (char)196;
			   		cout << (char)191 << endl;
	
			   		
					cout << (char)179 << " No | Mobil              | Per Jam   | Harian      | Mingguan     | Bulanan       " << (char)179 << endl;
					
					cout << (char)195;
			    	  for(int i=0;i<82;i++) cout << (char)196;
			    	cout << (char)180 << endl;
					
					cout << (char)179 << " 1  | Toyota Avanza      | Rp50.000  | Rp350.000   | Rp2.100.000  | Rp7.500.000   " << (char)179 << endl;
					cout << (char)179 << " 2  | Toyota Innova      | Rp75.000  | Rp500.000   | Rp3.200.000  | Rp10.500.000  " << (char)179 << endl;
					cout << (char)179 << " 3  | Toyota Yaris       | Rp40.000  | Rp250.000   | Rp1.450.000  | Rp4.500.000   " << (char)179 << endl;
					cout << (char)179 << " 4  | Toyota Alphard     | Rp200.000 | Rp1.500.000 | Rp9.500.000  | Rp30.000.000  " << (char)179 << endl;
					cout << (char)179 << " 5  | Toyota Hiace       |     -     | Rp1.100.000 | Rp4.250.000  | Rp29.500.000  " << (char)179 << endl;
					cout << (char)179 << " 6  | Daihatsu Xenia     | Rp45.000  | Rp320.000   | Rp1.950.000  | Rp7.000.000   " << (char)179 << endl;
					cout << (char)179 << " 7  | Mitsubishi Pajero  | Rp120.000 | Rp850.000   | Rp5.500.000  | Rp18.000.000  " << (char)179 << endl;
					cout << (char)179 << " 8  | Honda Brio         | Rp50.000  | Rp250.000   | Rp1.450.000  | Rp4.500.000   " << (char)179 << endl;
					cout << (char)179 << " 9  | Izuzu ELF Short    |     -     | Rp800.000   | Rp5.250.000  | Rp20.500.000  " << (char)179 << endl;
					cout << (char)179 << " 10 | Izuzu ELF Long     |     -     | Rp1.200.000 | Rp4.900.000  | Rp32.500.000  " << (char)179 << endl;
					
					cout << (char)195;
			    	  for(int i=0;i<82;i++) cout << (char)196;
			    	cout << (char)180 << endl;
								    	
					cout << (char)179 << "* Tambahan sopir : bisa dicek di status mobil                                     " << (char)179 << endl;
					cout << (char)179 << "* Paket lepas kunci tersedia (syarat berlaku)                                     " << (char)179 << endl;
					
					
					cout << (char)192;
			  		  for(int i=0;i<82;i++) cout << (char)196;
			   		cout << (char)217 << endl;
					proses();
					break;
					
				case 2:
					system("cls");
					
					cout << endl;
					cout << "======================================================\n";
					cout << endl;
					cout << "              STATUS KETERSEDIAAN MOBIL\n";
					cout << endl;
					cout << "======================================================\n";
					
					cout << "\n Toyota Avanza\n";
					cout << "Total unit     : 5 mobil\n";
					cout << "Tersedia       : " << stokAvanza << " mobil\n";
					cout << "Tambah Sopir   : +100.000/paket\n";
					cout << "7 Kursi (1 Sopir 6 Penumpang)\n";
					cout << "\n--------------------------------------------\n";
					
					cout << "\n Toyota Innova\n";
					cout << "Total unit     : 4 mobil\n";
					cout << "Tersedia       : " << stokInnova << " mobil\n";
					cout << "Tambah Sopir   : +150.000/paket\n";
					cout << "7 Kursi (1 Sopir 6 Penumpang)\n";
					cout << "\n--------------------------------------------\n";
					
					cout << "\n Toyota Yaris\n";
					cout << "Total unit       : 3 mobil\n";
					cout << "Tersedia         : " << stokYaris << " mobil\n";
					cout << "Tambah Sopir     : +Rp100.000/paket\n";
					cout << "4 Kursi (1 Sopir 3 Penumpang)\n";
					cout << "\n--------------------------------------------\n";
					
					cout << "\n Toyota Alphard\n";
					cout << "Total unit       : 2 mobil\n";
					cout << "Tersedia         : " << stokAlphard << " mobil\n";
					cout << "Tambah Sopir     : +Rp150.000/paket\n";
					cout << "7 Kursi (1 Sopir 6 Penumpang)\n";
					cout << "\n--------------------------------------------\n";
					
					cout << "\n Toyota Hiace\n";
					cout << "Total unit       : 2 mobil\n";
					cout << "Tersedia         : " << stokHiace << " mobil\n";
					cout << "Tambah Sopir     : +Rp200.000/paket\n";
					cout << "16 Kursi (1 Sopir 15 Penumpang)\n";
					cout << "\n--------------------------------------------\n";
					
					cout << "\n Daihatsu Xenia\n";
					cout << "Total unit       : 4 mobil\n";
					cout << "Tersedia         : " << stokXenia << " mobil\n";
					cout << "Tambah Sopir     : +Rp100.000/paket\n";
					cout << "7 Kursi (1 Sopir 6 Penumpang)\n";
					cout << "\n--------------------------------------------\n";
					
					cout << "\n Mitsubishi Pajero\n";
					cout << "Total unit       : 2 mobil\n";
					cout << "Tersedia         : " << stokPajero << " mobil\n";
					cout << "Tambah Sopir     : +Rp150.000/paket\n";
					cout << "7 Kursi (1 Sopir 6 Penumpang)\n";
					cout << "\n--------------------------------------------\n";
					
					cout << "\n Honda Brio\n";
					cout << "Total unit       : 3 mobil\n";
					cout << "Tersedia         : " << stokBrio << " mobil\n";
					cout << "Tambah Sopir     : +Rp100.000/paket\n";
					cout << "5 Kursi (1 Sopir 4 Penumpang)\n";
					cout << "\n--------------------------------------------\n";
					
					cout << "\n Isuzu ELF Short\n";
					cout << "Total unit       : 2 mobil\n";
					cout << "Tersedia         : " << stokElfShort << " mobil\n";
					cout << "Tambah Sopir     : +Rp200.000/paket\n";
					cout << "13 Kursi (1 Sopir 12 Penumpang)\n";
					cout << "\n--------------------------------------------\n";
					
					cout << "\n Isuzu ELF Long\n";
					cout << "Total unit       : 2 mobil\n";
					cout << "Tersedia         : " << stokElfLong << " mobil\n";
					cout << "Tambah Sopir     : +Rp200.000/paket\n";
					cout << "20 Kursi (1 Sopir 19 Penumpang)\n";
					cout << "\n--------------------------------------------\n";
					
					cout << "(Tampilan jenis mobil akan muncul di sini)\n";
					proses();
					break;
					
				case 3:
					system("cls"); 
					cout << "========================================\n";
					cout << "         ATURAN RENTAL MOBIL\n";
					cout << "========================================\n";
					cout << "\n1. Penyewa wajib membawa KTP yang masih berlaku.\n";
					cout << "2. Penyewa harus memiliki SIM A aktif.\n";
					cout << "3. Usia minimal penyewa adalah 18 tahun.\n";
					cout << "4. Mobil harus digunakan sesuai peruntukannya.\n";
					cout << "5. Dilarang memindahtangankan mobil kepada pihak lain.\n";
					cout << "6. Kerusakan selama masa sewa menjadi tanggung jawab penyewa.\n";
					cout << "7. Keterlambatan pengembalian dikenakan denda per jam.\n";
					cout << "8. Bahan bakar harus dikembalikan sesuai kondisi awal.\n";
					cout << "9. Dilarang menggunakan mobil untuk tindakan melanggar hukum.\n";
					cout << "10. Pembatalan sewa wajib dilakukan minimal 1 hari sebelumnya.\n";
					proses();
					break;
					
				case 4:
					system("cls");
					cout << "\n=========================================================\n\n";
					cout << "                  CHAT BANTUAN / FAQ\n";
					cout << "\n=========================================================\n";
					
					cout << "Halo! Selamat datang di layanan bantuan Rental Mobil.\n";
					cout << "Berikut beberapa pertanyaan yang sering ditanyakan.\n";
					cout << "=========================================================\n";
					
					cout << "\n[1] CARA BOOKING MOBIL\n";
					cout << "---------------------------------------------------------\n";
					cout << "1. Pilih menu Rental Mobil pada halaman utama.\n";
					cout << "2. Lihat daftar mobil yang tersedia.\n";
					cout << "3. Pilih jenis mobil sesuai kebutuhan Anda.\n";
					cout << "4. Pilih paket rental (jam, harian, mingguan, bulanan).\n";
					cout << "5. Tentukan apakah ingin lepas kunci atau dengan sopir.\n";
					cout << "6. Masukkan data diri dengan lengkap.\n";
					cout << "7. Periksa kembali detail pemesanan.\n";
					cout << "8. Konfirmasi booking untuk melanjutkan pembayaran.\n";
					
					cout << "\n[2] CARA PEMBAYARAN\n";
					cout << "---------------------------------------------------------\n";
					cout << "1. Pembayaran dapat dilakukan via transfer bank.\n";
					cout << "2. Pembayaran juga bisa tunai saat pengambilan mobil.\n";
					cout << "3. Pastikan nominal transfer sesuai tagihan.\n";
					cout << "4. Simpan bukti pembayaran Anda.\n";
					cout << "5. Upload/kirim bukti pembayaran ke admin.\n";
					cout << "6. Tunggu verifikasi pembayaran dari pihak rental.\n";
					cout << "7. Setelah terverifikasi, booking dinyatakan aktif.\n";
					
					cout << "\n[3] CARA PENGAMBILAN MOBIL\n";
					cout << "---------------------------------------------------------\n";
					cout << "1. Datang ke lokasi rental sesuai jadwal booking.\n";
					cout << "2. Tunjukkan KTP dan SIM asli kepada petugas.\n";
					cout << "3. Lakukan pengecekan kondisi kendaraan.\n";
					cout << "4. Pastikan BBM dan kelengkapan sesuai.\n";
					cout << "5. Tanda tangani surat serah terima kendaraan.\n";
					cout << "6. Ambil kunci mobil dan perjalanan siap dimulai.\n";
					
					cout << "\n[4] CARA PENGEMBALIAN MOBIL\n";
					cout << "---------------------------------------------------------\n";
					cout << "1. Kembalikan mobil sesuai waktu yang disepakati.\n";
					cout << "2. Pastikan kondisi mobil seperti saat diterima.\n";
					cout << "3. BBM harus sesuai kondisi awal.\n";
					cout << "4. Serahkan kunci dan dokumen kendaraan.\n";
					cout << "5. Petugas akan melakukan pengecekan kendaraan.\n";
					cout << "6. Jika ada keterlambatan, akan dikenakan denda.\n";
					cout << "7. Deposit akan dikembalikan jika tidak ada masalah.\n";
					
					cout << "\n[5] PERTANYAAN UMUM\n";
					cout << "---------------------------------------------------------\n";
					cout << "Q: Apakah bisa booking mendadak?\n";
					cout << "A: Bisa, selama stok mobil masih tersedia.\n";
					cout << "Q: Apakah bisa memperpanjang masa sewa?\n";
					cout << "A: Bisa, hubungi admin sebelum masa sewa habis.\n";
					cout << "Q: Apakah tersedia sopir?\n";
					cout << "A: Ya, tersedia dengan biaya tambahan.\n";
					cout << "Q: Bagaimana jika mobil rusak saat dipakai?\n";
					cout << "A: Segera hubungi pihak rental untuk bantuan.\n";
					
					cout << "=========================================================\n";
					cout << "Terima kasih telah menggunakan layanan rental kami.\n";
					cout << "Hubungi admin jika membutuhkan bantuan lebih lanjut.\n";
					cout << "=========================================================\n";
					proses();
					break;
					
				case 0:
  					cout << "\nTerima Kasih sudah berkunjung di RENT.4.FUN\n";
  					cout << "\nKlik ENTER untuk lanjut . . .";
  					cin.ignore();
  					cin.get();
  					system("cls");
    				return;
					break; 
					
				default:
					cout << "\nMenu tidak ada!\n";
			} 
			
	
	} while (true);
		}
			
	private:
		int totalBayar;
		int lamaSewa;
		string paket;
		string mobil;
	    int hargaJam;
	    int hargaHari;
	    int hargaMinggu;
	    int hargaBulan;
		string username, password;
	    string nama;
    	int harga, hari, pilihMobil, biaya, pilih, pilihMenu, jawab;
    	//stok mobil
    	int long long nik;
    	int stokAvanza = 5;
		int stokInnova = 4;
		int stokYaris = 3;
		int stokAlphard = 2;
		int stokHiace = 2;
		int stokXenia = 4;
		int stokPajero = 2;
		int stokBrio = 3;
		int stokElfShort = 2;
		int stokElfLong = 2;
    	bool tersedia;
};


istream& operator>>(istream& in, pelanggan& input) {
	
	
	return in;
}

ostream& operator<<(ostream& out, const pelanggan& output) {
	out << "";
	
	return out;
}




class akun {
private:
    string username, password, namalengkap, alamat, jk2;
    int jk;
    int long long wa;

public:
    // fungsi register
    void registerUser() {
        ofstream file("akun_pelanggan.txt", ios::app);


		system("cls");
		cout << (char)201;
  		  for(int i=0;i<17;i++) cout << (char)205;
   		cout << (char)187 << endl;
   		
        cout << (char)186 << "  MENU REGISTER  " << (char)186 << endl;
        
        cout << (char)200;
   			for(int i=0;i<17;i++) cout << (char)205;
    	cout << (char)188 << endl;
        
        cin.ignore();
        cout << "Isi data diri di bawah\n";
        cout << "Nama lengkap: ";
        getline(cin, namalengkap);
        cout << "Alamat: ";
        getline(cin, alamat);
        cout << "Nomor WA: ";
        cin >> wa;
        cout << "Jenis kelamin\n";
		cout << "1. Laki-laki\n2. Perempuan\n: ";
		cin >> jk;
		if (jk == 1) {
			jk2 = "Laki-laki";
		} else if (jk == 2) {
			jk2 = "Perempuan";
		} else {
		}
        cout <<  "Buat Username: ";
        cin >> username;
        cout << "Buat Password: ";
        cin >> password;
        
		file << endl;
		file << "- Informasi Akun -\n";
		file << "Nama lengkap  : " << namalengkap << endl;
		file << "Alamat        : " << alamat << endl;
		file << "Nomor WA      : " << wa << endl;
		file << "Jenis Kelamin : " << jk2 << endl;
		file << "Username      : " << username << endl;
        file << "Password      : " << password << endl;
        file << endl;
        file.close();

        cout << "\nAkun berhasil dibuat!\n" << endl;
        cout << "Klik ENTER untuk lanjut . . .";
        cin.ignore();
        cin.get();
        system("cls");
    }

    // fungsi login
    bool loginUser() {
    ifstream file("akun_pelanggan.txt");
    string user, pass;
    string line;
    string fileUser, filePass;
    bool login = false;

	system("cls");
	cout << (char)201;
  	  for(int i=0;i<18;i++) cout << (char)205;
	cout << (char)187 << endl;
	
    cout << (char)186 <<  "    MENU LOGIN    " << (char)186 <<  endl;
    
	cout << (char)200;
   		for(int i=0;i<18;i++) cout << (char)205;
    cout << (char)188 << endl;
    
    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if (!file.is_open()) {
        cout << "\nLogin gagal, akun belum terdaftar.\n";
        cout << "\nKlik ENTER untuk lanjut . . .";
        cin.ignore();
        cin.get();
        system("cls");
        return false;
    }

    while (getline(file, line)) {
        if (line.find("Username") != string::npos) {
            fileUser = line.substr(line.find(":") + 1);
            fileUser.erase(0, fileUser.find_first_not_of(" \n"));
        }

        if (line.find("Password") != string::npos) {
            filePass = line.substr(line.find(":") + 1);
            filePass.erase(0, filePass.find_first_not_of(" \n"));
        }
    }

    file.close();
    
    if (username == fileUser && password == filePass) {
        login = true;
    }

    if (login) {
        cout << "Login berhasil! Selamat datang " << username << endl;
    } else {
        cout << "\nLogin gagal, username/password tidak ditemukan\n";
        cout << "\nKlik ENTER untuk lanjut . . .";
        cin.ignore();
        cin.get();
        system("cls");
    }

    return login;

}

    // menu utama
    void utama() {
    int pilihan;
    pelanggan s; // ?? buat objek sewa

    do {
    	
    	system("cls");
    	cout << (char)201;
  		  for(int i=0;i<31;i++) cout << (char)205;
   		cout << (char)187 << endl;
   		
		cout << (char)186 << "   HALAMAN PELANGGAN           " << (char)186 << endl;
		
		cout << (char)204;
    		for(int i=0;i<31;i++) cout << (char)205;
    	cout << (char)185 << endl;
		
        cout << (char)186 << "  SILAHKAN PILIH" << "               " << (char)186 << endl;
        cout << (char)186 << "  1. Register" << "                  " << (char)186 << endl;
        cout << (char)186 << "  2. Login" << "                     " << (char)186 << endl;
        cout << (char)186 << "  0. Keluar" << "                    " << (char)186 << endl;
        
        cout << (char)200;
   			for(int i=0;i<31;i++) cout << (char)205;
    	cout << (char)188 << endl;
        
        cout << "Pilih: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1:
                registerUser();
                break;

            case 2:
                if (loginUser()) { // ?? cek berhasil
                    s.menu();      // ?? masuk ke menu utama sewa
                }
                break;

            case 0:
                cout << "Terima kasih sudah berkunjung" << endl;
                break;

            default:
                cout << "Pilihan tidak ada!" << endl;
        }

    } while (pilihan != 0);
}
};


class welcome {
public:
	admin b;
	akun a;
    void menuAwal() {
    int pilih;

    while (true) {
        system("cls");
        cout << "===========================================\n";
        cout << "      SELAMAT DATANG DI RENTAL MOBIL\n";
        cout << "===========================================\n";
        cout << "1. Login Admin (masih proses)\n";
        cout << "2. Login Pelanggan\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch(pilih) {
            case 1:
            	b.loginAdmin();
                break;

            case 2:
                a.utama();
                break;

            case 0:
                cout << "Terima kasih sudah berkunjung" << endl;
                return;   // ? langsung keluar fungsi
        }
    }
}

    
};



int main () {
    welcome w;
    w.menuAwal();
    return 0;
}

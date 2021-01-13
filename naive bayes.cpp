#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;
int databaru,pilih, pilih2,pilih3,klasifikasi;
string msap,sp,kp,SanksiP,kwp,hasil,nama,n;

double x=0.00;

double a,b,c,d,e,A,B,C,D,E;
double P_lancar_baru,P_tlancar_baru, baru_lancar, baru_tlancar;

char kembali;
int kembali2,kembali3;
double msap_lancar_ss,msap_lancar_s,msap_lancar_ks,msap_lancar_ts;
double msap_tlancar_ss,msap_tlancar_s,msap_tlancar_ks,msap_tlancar_ts;
double sp_lancar_ss,sp_lancar_s,sp_lancar_ks,sp_lancar_ts;
double sp_tlancar_ss,sp_tlancar_s,sp_tlancar_ks,sp_tlancar_ts;
double kp_lancar_ss,kp_lancar_s,kp_lancar_ks,kp_lancar_ts;
double kp_tlancar_ss,kp_tlancar_s,kp_tlancar_ks,kp_tlancar_ts;
double SanksiP_lancar_ss,SanksiP_lancar_s,SanksiP_lancar_ks,SanksiP_lancar_ts;
double SanksiP_tlancar_ss,SanksiP_tlancar_s,SanksiP_tlancar_ks,SanksiP_tlancar_ts;
double kwp_lancar_ss,kwp_lancar_s,kwp_lancar_ks,kwp_lancar_ts;
double kwp_tlancar_ss,kwp_tlancar_s,kwp_tlancar_ks,kwp_tlancar_ts;

double probabilitas_lancar, probabilitas_tlancar;

double A1_lancar,A1_tlancar,P_lancar_A1,P_tlancar_A1;
double A2_lancar,A2_tlancar,P_lancar_A2,P_tlancar_A2;
double A3_lancar,A3_tlancar,P_lancar_A3,P_tlancar_A3;
double A4_lancar,A4_tlancar,P_lancar_A4,P_tlancar_A4;
double A5_lancar,A5_tlancar,P_lancar_A5,P_tlancar_A5;
double A6_lancar,A6_tlancar,P_lancar_A6,P_tlancar_A6;
double A7_lancar,A7_tlancar,P_lancar_A7,P_tlancar_A7;
double A8_lancar,A8_tlancar,P_lancar_A8,P_tlancar_A8;
double A9_lancar,A9_tlancar,P_lancar_A9,P_tlancar_A9;
double A10_lancar,A10_tlancar,P_lancar_A10,P_tlancar_A10;
double A11_lancar,A11_tlancar,P_lancar_A11,P_tlancar_A11;
double A12_lancar,A12_tlancar,P_lancar_A12,P_tlancar_A12;
double A13_lancar,A13_tlancar,P_lancar_A13,P_tlancar_A13;
double A14_lancar,A14_tlancar,P_lancar_A14,P_tlancar_A14;
double A15_lancar,A15_tlancar,P_lancar_A15,P_tlancar_A15;
double A16_lancar,A16_tlancar,P_lancar_A16,P_tlancar_A16;
double A17_lancar,A17_tlancar,P_lancar_A17,P_tlancar_A17;
double A18_lancar,A18_tlancar,P_lancar_A18,P_tlancar_A18;
double A19_lancar,A19_tlancar,P_lancar_A19,P_tlancar_A19;
double A20_lancar,A20_tlancar,P_lancar_A20,P_tlancar_A20;

int main() 
{
	msap_lancar_ss=0.23; msap_lancar_s=0.38; msap_lancar_ks=0.38; msap_lancar_ts=0.00;
	msap_tlancar_ss=0.00; msap_tlancar_s=0,14; msap_tlancar_ks=0,71; msap_tlancar_ts=0.14;
	sp_lancar_ss=0.08; sp_lancar_s=0,62; sp_lancar_ks=0.31; sp_lancar_ts=0.00;
	sp_tlancar_ss=0.00; sp_tlancar_s=0.00; sp_tlancar_ks=0.86; sp_tlancar_ts=0.14;
	kp_lancar_ss=0.38; kp_lancar_s=0.46; kp_lancar_ks=0.15; kp_lancar_ts=0.00;
	kp_tlancar_ss=0.29; kp_tlancar_s=0.14; kp_tlancar_ks=0.57; kp_tlancar_ts=0.00;
	SanksiP_lancar_ss=0.08; SanksiP_lancar_s=0.46; SanksiP_lancar_ks=0.38; SanksiP_lancar_ts=0.08;
	SanksiP_tlancar_ss=0.00; SanksiP_tlancar_s=0.14; SanksiP_tlancar_ks=0.86; SanksiP_tlancar_ts=0.00;
	kwp_lancar_ss=0.08; kwp_lancar_s=0.77; kwp_lancar_ks=0.15; kwp_lancar_ts=0.00;
	kwp_tlancar_ss=0.00; kwp_tlancar_s=0.29; kwp_tlancar_ks=0.71; kwp_tlancar_ts=0.00;
	
	probabilitas_lancar=0.65;
	probabilitas_tlancar=0.35;
	
	cout<<"***Selamat Datang di Menu Klasifikasi Masyarakat Wajib Pajak Di Kabupaten Simalungun Menggunakan Metode Naive Bayes***"<<endl;
	cout<<"======================================================================================================================"<<endl;
	Menu:
	cout<<endl;
	cout<<"Daftar Menu:"<<endl;
	cout<<"1. Lihat Data yang sudah ada"<<endl;
	cout<<"2. Mengklasifikasikan Data dengan Algoritma Naive Bayes"<<endl;
	cout<<"3. Kembali"<<endl;
	cout<<"Saya memilih: ";
	cin>>pilih;
	
	if (pilih==1)
	{
		ifstream myfile;
        char sv_text;

        myfile.open("Data FP.txt");
        cout<<endl;
		cout<<"Data yang telah dimasukkan adalah :"<<endl;
		cout<<"_____________________________________________________________________"<<endl;
		cout<<"|NO.	 | RESPONDEN  | MSAP  |  SP  |  KP  | SanksiP | KWP | 	HASIL	    |"<<endl;
		cout<<"_____________________________________________________________________"<<endl;
		
        cout<<"";
        //ulang selama program belum mencapai akhir konten dari file
        while (!myfile.eof())
            {
                myfile.get(sv_text);
                cout<<sv_text;
            }
        myfile.close(); //menutup file
        
        cout<<endl;
        cout<<"Kembali ke Menu? [y/n] ";
        cin>>kembali;
        if(kembali=='y' || kembali=='Y'){
        	goto Menu;
		}
		else if(kembali=='n' || kembali=='N'){
			cout<<"Semoga Harimu Menyenangkan"<<endl;
	}
	}
	else if (pilih == 2)
	{
		Menu2:
		cout<<endl;
		cout<<"1. Memakai data yang sudah ada"<<endl;
		cout<<"2. Memakai data baru"<<endl;
		cout<<"3. Kembali"<<endl;
		cout<<"Saya memilih: ";
		cin>> pilih2;
		
		if (pilih2==1)
		{
			Data:
			ifstream myfile;
        char sv_text;

        myfile.open("Data FP.txt");
       
		cout<<"Data yang telah dimasukkan adalah :"<<endl;
		cout<<"_____________________________________________________________________"<<endl;
		cout<<"|NO.	 | RESPONDEN  | MSAP  |  SP  |  KP  | SanksiP | KWP | 	HASIL	    |"<<endl;
		cout<<"_____________________________________________________________________"<<endl;
		
        cout<<"";
        //ulang selama program belum mencapai akhir konten dari file
        while (!myfile.eof())
            {
                myfile.get(sv_text);
                cout<<sv_text;
            }
        myfile.close(); //menutup file
        
        cout<<"\n\nNo. berapa yang anda ingin klasifikasikan? ";
        cin>>klasifikasi;
        switch (klasifikasi)
        {
        	case 1:
        		A1_lancar=msap_lancar_ks*sp_lancar_ks*kp_lancar_ks*SanksiP_lancar_ks*kwp_lancar_ks;
        		A1_tlancar=msap_tlancar_ks*sp_tlancar_ks*kp_tlancar_ks*SanksiP_tlancar_ks*kwp_tlancar_ks;
        		P_lancar_A1=A1_lancar*probabilitas_lancar;
        		P_tlancar_A1=A1_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A1>P_tlancar_A1){
        			cout<<"Responden A1 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A1<P_tlancar_A1){
					cout<<"Responden A1 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 2:
        		A2_lancar=msap_lancar_ss*sp_lancar_ss*kp_lancar_ss*SanksiP_lancar_ss*kwp_lancar_ss;
        		A2_tlancar=msap_tlancar_ss*sp_tlancar_ss*kp_tlancar_ss*SanksiP_tlancar_ss*kwp_tlancar_ss;
        		P_lancar_A2=A2_lancar*probabilitas_lancar;
        		P_tlancar_A2=A2_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A2>P_tlancar_A2){
        			cout<<"Responden A2 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A2<P_tlancar_A2){
					cout<<"Responden A2 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 3:
        		A3_lancar=msap_lancar_ss*sp_lancar_ks*kp_lancar_ks*SanksiP_lancar_s*kwp_lancar_ks;
        		A3_tlancar=msap_tlancar_ss*sp_tlancar_ks*kp_tlancar_ks*SanksiP_tlancar_s*kwp_tlancar_ks;
        		P_lancar_A3=A3_lancar*probabilitas_lancar;
        		P_tlancar_A3=A3_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A3>P_tlancar_A3){
        			cout<<"Responden A3 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A3<P_tlancar_A3){
					cout<<"Responden A3 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 4:
        		A4_lancar=msap_lancar_ts*sp_lancar_ks*kp_lancar_s*SanksiP_lancar_ks*kwp_lancar_ks;
        		A4_tlancar=msap_tlancar_ts*sp_tlancar_ks*kp_tlancar_s*SanksiP_tlancar_ks*kwp_tlancar_ks;
        		P_lancar_A4=A4_lancar*probabilitas_lancar;
        		P_tlancar_A4=A4_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A4>P_tlancar_A4){
        			cout<<"Responden A4 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A4<P_tlancar_A4){
					cout<<"Responden A4 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 5:
        		A5_lancar=msap_lancar_ks*sp_lancar_s*kp_lancar_ss*SanksiP_lancar_s*kwp_lancar_s;
        		A5_tlancar=msap_tlancar_ks*sp_tlancar_s*kp_tlancar_ss*SanksiP_tlancar_s*kwp_tlancar_s;
        		P_lancar_A5=A5_lancar*probabilitas_lancar;
        		P_tlancar_A5=A5_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A5>P_tlancar_A5){
        			cout<<"Responden A5 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A5<P_tlancar_A5){
					cout<<"Responden A5 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 6:
        		A6_lancar=msap_lancar_ss*sp_lancar_s*kp_lancar_s*SanksiP_lancar_ks*kwp_lancar_s;
        		A6_tlancar=msap_tlancar_ss*sp_tlancar_s*kp_tlancar_s*SanksiP_tlancar_ks*kwp_tlancar_s;
        		P_lancar_A6=A6_lancar*probabilitas_lancar;
        		P_tlancar_A6=A6_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A6>P_tlancar_A6){
        			cout<<"Responden A6 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A6<P_tlancar_A6){
					cout<<"Responden A6 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 7:
        		A7_lancar=msap_lancar_ks*sp_lancar_s*kp_lancar_s*SanksiP_lancar_s*kwp_lancar_s;
        		A7_tlancar=msap_tlancar_ks*sp_tlancar_s*kp_tlancar_s*SanksiP_tlancar_s*kwp_tlancar_s;
        		P_lancar_A7=A7_lancar*probabilitas_lancar;
        		P_tlancar_A7=A7_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A7>P_tlancar_A7){
        			cout<<"Responden A7 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A7<P_tlancar_A7){
					cout<<"Responden A7 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 8:
        		A8_lancar=msap_lancar_ks*sp_lancar_s*kp_lancar_ks*SanksiP_lancar_s*kwp_lancar_s;
        		A8_tlancar=msap_tlancar_ks*sp_tlancar_s*kp_tlancar_ks*SanksiP_tlancar_s*kwp_tlancar_s;
        		P_lancar_A8=A8_lancar*probabilitas_lancar;
        		P_tlancar_A8=A8_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A8>P_tlancar_A8){
        			cout<<"Responden A8 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A8<P_tlancar_A8){
					cout<<"Responden A8 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 9:
        		A9_lancar=msap_lancar_ks*sp_lancar_ks*kp_lancar_ks*SanksiP_lancar_ks*kwp_lancar_s;
        		A9_tlancar=msap_tlancar_ks*sp_tlancar_ks*kp_tlancar_ks*SanksiP_tlancar_ks*kwp_tlancar_s;
        		P_lancar_A9=A9_lancar*probabilitas_lancar;
        		P_tlancar_A9=A9_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A9>P_tlancar_A9){
        			cout<<"Responden A9 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A9<P_tlancar_A9){
					cout<<"Responden A9 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 10:
        		A10_lancar=msap_lancar_s*sp_lancar_ks*kp_lancar_s*SanksiP_lancar_ks*kwp_lancar_s;
        		A10_tlancar=msap_tlancar_s*sp_tlancar_ks*kp_tlancar_s*SanksiP_tlancar_ks*kwp_tlancar_s;
        		P_lancar_A10=A10_lancar*probabilitas_lancar;
        		P_tlancar_A10=A10_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A10>P_tlancar_A10){
        			cout<<"Responden no. 1 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A10<P_tlancar_A10){
					cout<<"Responden no. 1 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 11:
        		A11_lancar=msap_lancar_ks*sp_lancar_s*kp_lancar_s*SanksiP_lancar_s*kwp_lancar_s;
        		A11_tlancar=msap_tlancar_ks*sp_tlancar_s*kp_tlancar_s*SanksiP_tlancar_s*kwp_tlancar_s;
        		P_lancar_A11=A11_lancar*probabilitas_lancar;
        		P_tlancar_A11=A11_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A11>P_tlancar_A11){
        			cout<<"Responden A11 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A11<P_tlancar_A11){
					cout<<"Responden A11 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 12:
        		A12_lancar=msap_lancar_s*sp_lancar_s*kp_lancar_s*SanksiP_lancar_ks*kwp_lancar_s;
        		A12_tlancar=msap_tlancar_s*sp_tlancar_s*kp_tlancar_s*SanksiP_tlancar_ks*kwp_tlancar_s;
        		P_lancar_A12=A12_lancar*probabilitas_lancar;
        		P_tlancar_A12=A12_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A12>P_tlancar_A12){
        			cout<<"Responden A12 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A12<P_tlancar_A12){
					cout<<"Responden A12 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 13:
        		A13_lancar=msap_lancar_ks*sp_lancar_ks*kp_lancar_ks*SanksiP_lancar_ks*kwp_lancar_ks;
        		A13_tlancar=msap_tlancar_ks*sp_tlancar_ks*kp_tlancar_ks*SanksiP_tlancar_ks*kwp_tlancar_ks;
        		P_lancar_A13=A13_lancar*probabilitas_lancar;
        		P_tlancar_A13=A13_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A13>P_tlancar_A13){
        			cout<<"Responden A13 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A13<P_tlancar_A13){
					cout<<"Responden A13 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 14:
        		A14_lancar=msap_lancar_s*sp_lancar_s*kp_lancar_s*SanksiP_lancar_s*kwp_lancar_s;
        		A14_tlancar=msap_tlancar_s*sp_tlancar_s*kp_tlancar_s*SanksiP_tlancar_s*kwp_tlancar_s;
        		P_lancar_A14=A14_lancar*probabilitas_lancar;
        		P_tlancar_A14=A14_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A14>P_tlancar_A14){
        			cout<<"Responden A14 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A14<P_tlancar_A14){
					cout<<"Responden A14 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 15:
        		A15_lancar=msap_lancar_ks*sp_lancar_ks*kp_lancar_ss*SanksiP_lancar_ks*kwp_lancar_ks;
        		A15_tlancar=msap_tlancar_ks*sp_tlancar_ks*kp_tlancar_ss*SanksiP_tlancar_ks*kwp_tlancar_ks;
        		P_lancar_A15=A15_lancar*probabilitas_lancar;
        		P_tlancar_A15=A15_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A15>P_tlancar_A15){
        			cout<<"Responden A15 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A15<P_tlancar_A15){
					cout<<"Responden A15 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 16:
        		A16_lancar=msap_lancar_ss*sp_lancar_ks*kp_lancar_ss*SanksiP_lancar_s*kwp_lancar_ks;
        		A16_tlancar=msap_tlancar_ss*sp_tlancar_ks*kp_tlancar_ss*SanksiP_tlancar_s*kwp_tlancar_ks;
        		P_lancar_A16=A16_lancar*probabilitas_lancar;
        		P_tlancar_A16=A16_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A16>P_tlancar_A16){
        			cout<<"Responden A16 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A16<P_tlancar_A16){
					cout<<"Responden A16 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 17:
        		A17_lancar=msap_lancar_ss*sp_lancar_ss*kp_lancar_ks*SanksiP_lancar_ks*kwp_lancar_s;
        		A17_tlancar=msap_tlancar_ss*sp_tlancar_ss*kp_tlancar_ks*SanksiP_tlancar_ks*kwp_tlancar_s;
        		P_lancar_A17=A17_lancar*probabilitas_lancar;
        		P_tlancar_A17=A17_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A17>P_tlancar_A17){
        			cout<<"Responden A17 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A17<P_tlancar_A17){
					cout<<"Responden A17 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 18:
        		A18_lancar=msap_lancar_ks*sp_lancar_ks*kp_lancar_ss*SanksiP_lancar_ks*kwp_lancar_ks;
        		A18_tlancar=msap_tlancar_ks*sp_tlancar_ks*kp_tlancar_ss*SanksiP_tlancar_ks*kwp_tlancar_ks;
        		P_lancar_A18=A18_lancar*probabilitas_lancar;
        		P_tlancar_A18=A18_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A18>P_tlancar_A18){
        			cout<<"Responden A18 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A18<P_tlancar_A18){
					cout<<"Responden A18 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 19:
        		A19_lancar=msap_lancar_s*sp_lancar_ks*kp_lancar_ss*SanksiP_lancar_ts*kwp_lancar_s;
        		A19_tlancar=msap_tlancar_s*sp_tlancar_ks*kp_tlancar_ss*SanksiP_tlancar_ts*kwp_tlancar_s;
        		P_lancar_A19=A19_lancar*probabilitas_lancar;
        		P_tlancar_A19=A19_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A19>P_tlancar_A19){
        			cout<<"Responden A19 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A19<P_tlancar_A19){
					cout<<"Responden A19 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
        	case 20:
        		A20_lancar=msap_lancar_ks*sp_lancar_ks*kp_lancar_ks*SanksiP_lancar_ks*kwp_lancar_ks;
        		A20_tlancar=msap_tlancar_ks*sp_tlancar_ks*kp_tlancar_ks*SanksiP_tlancar_ks*kwp_tlancar_ks;
        		P_lancar_A20=A20_lancar*probabilitas_lancar;
        		P_tlancar_A20=A20_tlancar*probabilitas_tlancar;
        		
        		if(P_lancar_A20>P_tlancar_A20){
        			cout<<"Responden A20 Lancar dalam membayar Wajib Pajak"<<endl;
				}
				else if(P_lancar_A20<P_tlancar_A20){
					cout<<"Responden A20 Tidak Lancar dalam membayar Wajib Pajak"<<endl;
				}
        		break;
		}
		cout<<"\n\n1. Masukan Data Lagi"<<endl;
			cout<<"2. Kembali"<<endl;
			cout<<"pilih: ";
			cin>>kembali2;
			if(kembali2==1){
				goto Data;
			}
			else{
				goto Menu2;
			}
		
		}

		else if (pilih2==2)
		{
			Data2:
			cout<<"***Masukan Data terlebih dahulu***"<<endl;
			cout<<"";
			getline(cin,n);
			cout<<"Nama Responden: ";
			getline(cin,nama);
			
			cout<<"Modernisasi Sistem Administrasi Perpajakan [TS/KS/S/SS]: ";
			getline(cin,msap);
			if(msap=="TS" ||msap=="ts")
			{
				A=x+msap_lancar_ts;
				a=x+msap_tlancar_ts;
			}
			else if(msap=="KS" ||msap=="ks")
			{
				A=x+msap_lancar_ks;
				a=x+msap_tlancar_ks;
			}
			else if(msap=="S" ||msap=="s")
			{
				A=x+msap_lancar_s;
				a=x+msap_tlancar_s;
			}
			else if(msap=="SS" ||msap=="ss")
			{
				A=x+msap_lancar_ss;
				a=x+msap_tlancar_ss;
			}
			
			cout<<"Sosialisasi Perpajakan [TS/KS/S/SS]: ";
			getline(cin,sp);
			if(msap=="TS" ||msap=="ts")
			{
				B=x+msap_lancar_ts;
				b=x+msap_tlancar_ts;
			}
			else if(msap=="KS" ||msap=="ks")
			{
				B=x+msap_lancar_ks;
				b=x+msap_tlancar_ks;
			}
			else if(msap=="S" ||msap=="s")
			{
				B=x+msap_lancar_s;
				b=x+msap_tlancar_s;
			}
			else if(msap=="SS" ||msap=="ss")
			{
				B=x+msap_lancar_ss;
				b=x+msap_tlancar_ss;
			}
			
			cout<<"Kesadaran Perpajakan [TS/KS/S/SS]: ";
			getline(cin,kp);
			if(msap=="TS" ||msap=="ts")
			{
				C=x+msap_lancar_ts;
				c=x+msap_tlancar_ts;
			}
			else if(msap=="KS" ||msap=="ks")
			{
				C=x+msap_lancar_ks;
				c=x+msap_tlancar_ks;
			}
			else if(msap=="S" ||msap=="s")
			{
				C=x+msap_lancar_s;
				c=x+msap_tlancar_s;
			}
			else if(msap=="SS" ||msap=="ss")
			{
				C=x+msap_lancar_ss;
				c=x+msap_tlancar_ss;
			}
			
			cout<<"Sanksi Perpajakan [TS/KS/S/SS]: ";
			getline(cin,SanksiP);
			if(msap=="TS" ||msap=="ts")
			{
				C=x+msap_lancar_ts;
				c=x+msap_tlancar_ts;
			}
			else if(msap=="KS" ||msap=="ks")
			{
				D=x+msap_lancar_ks;
				d=x+msap_tlancar_ks;
			}
			else if(msap=="S" ||msap=="s")
			{
				D=x+msap_lancar_s;
				d=x+msap_tlancar_s;
			}
			else if(msap=="SS" ||msap=="ss")
			{
				D=x+msap_lancar_ss;
				d=x+msap_tlancar_ss;
			}
			
			cout<<"Kepatuhan Wajib Pajak [TS/KS/S/SS]: ";
			getline(cin,kwp);
			if(msap=="TS" ||msap=="ts")
			{
				E=x+msap_lancar_ts;
				e=x+msap_tlancar_ts;
			}
			else if(msap=="KS" ||msap=="ks")
			{
				E=x+msap_lancar_ks;
				e=x+msap_tlancar_ks;
			}
			else if(msap=="S" ||msap=="s")
			{
				E=x+msap_lancar_s;
				e=x+msap_tlancar_s;
			}
			else if(msap=="SS" ||msap=="ss")
			{
				E=x+msap_lancar_ss;
				e=x+msap_tlancar_ss;
			}
			
			cout<<"Hasil [TL/L]: ";
			getline(cin,hasil);
			
			
			baru_lancar=A*B*C*D*E;
			baru_tlancar=a*b*c*d*e;
			P_lancar_baru=baru_lancar*probabilitas_lancar;
        	P_tlancar_baru=baru_tlancar*probabilitas_tlancar;
			if(P_lancar_baru>P_tlancar_baru){
        		cout<<"Responden "<<nama<<" Lancar dalam membayar Wajib Pajak"<<endl;
			}
			else if(P_lancar_baru<P_tlancar_baru){
				cout<<"Responden "<<nama<<" Tdak lancar dalam membayar Wajib Pajak"<<endl;
			}
			
			cout<<"\n\n1. Masukan Data Lagi"<<endl;
			cout<<"2. Kembali"<<endl;
			cout<<"pilih: ";
			cin>>kembali3;
			if(kembali3==1){
				goto Data2;
			}
			else{
				goto Menu2;
			}
		
		}
		
		else{
			goto Menu;
		}
	}
	else {
		cout<<"Semoga Harimu Menyenangkan!"<<endl;
	}
	return 0;
}

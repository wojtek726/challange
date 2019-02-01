#pragma once
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include "highscore.h"



using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#define DLUGOSC_CIALA 100  // maksymalna dlugosc ciala

namespace snake { 

	/// <summary>
	/// Summary for gra
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class gra : public System::Windows::Forms::Form
	{
	public:
		gra(int trud, String^ im)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			srand((unsigned)time(NULL));
			this->BackColor = Color::White;
			this->timer1->Enabled = true;
			this->timer2->Enabled = true;
			this->timer3->Enabled = false;
			
			imie = im;

			//
			// cialo
			//
			for(int i = 0; i < DLUGOSC_CIALA; i++)
			{
				this->cialo[i] = (gcnew System::Windows::Forms::PictureBox());
			}
			this->jablko = gcnew PictureBox();
			this->gruszka = gcnew PictureBox();
			this->l_punkty->Text = punkty.ToString();

			losuj_jablko();
			przerwa = false;
			ilosc_gruszek = 0;


			trudnosc = trud;
			if(trudnosc == 0) this->timer1->Interval = 100;
			if(trudnosc == 1) this->timer1->Interval = 75;
			if(trudnosc == 2) this->timer1->Interval = 50;
			this->label1->Text = imie;
		}
	

	private: System::Windows::Forms::Label^  l_punkty;
	private: System::Windows::Forms::PictureBox^  glowa;
	private: System::Windows::Forms::Timer^  timer1;
	private: static array<PictureBox^>^ cialo = gcnew array<PictureBox^>(DLUGOSC_CIALA);
	private: PictureBox ^jablko;
	private: PictureBox ^gruszka;

	public: 
		int liczba;
		int punkty;
		int ilosc_gruszek;
		int kierunek; // 0 - prawo, 1 - lewo, 2 - gora, 3 - dol
		int x_prev, y_prev, x_prev1, y_prev1;
		int x_jablko, y_jablko;
		int x_gruszka, y_gruszka;
		int trudnosc;
		String ^imie;
		bool przerwa;
	private: System::Windows::Forms::Label^  label2;
	public: 
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Label^  label1;
	public: 
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(gra::typeid));
			this->l_punkty = (gcnew System::Windows::Forms::Label());
			this->glowa = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->glowa))->BeginInit();
			this->SuspendLayout();
			// 
			// l_punkty
			// 
			this->l_punkty->AutoSize = true;
			this->l_punkty->Location = System::Drawing::Point(323, 534);
			this->l_punkty->Name = L"l_punkty";
			this->l_punkty->Size = System::Drawing::Size(47, 13);
			this->l_punkty->TabIndex = 0;
			this->l_punkty->Text = L"l_punkty";
			// 
			// glowa
			// 
			this->glowa->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"glowa.Image")));
			this->glowa->Location = System::Drawing::Point(300, 300);
			this->glowa->Name = L"glowa";
			this->glowa->Size = System::Drawing::Size(20, 20);
			this->glowa->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->glowa->TabIndex = 1;
			this->glowa->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &gra::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(323, 521);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Punkty:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(279, 521);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Gracz:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(274, 534);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Punkty:";
			// 
			// timer2
			// 
			this->timer2->Interval = 3000;
			this->timer2->Tick += gcnew System::EventHandler(this, &gra::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 5000;
			this->timer3->Tick += gcnew System::EventHandler(this, &gra::timer3_Tick);
			// 
			// gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 561);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->glowa);
			this->Controls->Add(this->l_punkty);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"gra";
			this->Text = L"Snake";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &gra::gra_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->glowa))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void gra_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
			 {
				 if(e->KeyCode == Keys::Right)
				 {
					kierunek = 0;
				 }
				 if(e->KeyCode == Keys::Left)
				 {
					kierunek = 1;
				 }
				 if(e->KeyCode == Keys::Up)
				 {
					kierunek = 2;
				 }
				 if(e->KeyCode == Keys::Down)
				 {
					kierunek = 3;
				 }
				 if(e->KeyCode == Keys::E)
				 {
					punkty++;
					this->l_punkty->Text = punkty.ToString();

					//this->cialo[punkty-1]->ImageLocation = "C:\\Users\\Wojtek\\Desktop\\snake\\snake\\glowa.jpg";
					this->cialo[punkty-1]->ImageLocation = "glowa.jpg";
					this->cialo[punkty-1]->Location = System::Drawing::Point(300, 300);
					this->cialo[punkty-1]->Name = L"cialo";
					this->cialo[punkty-1]->Size = System::Drawing::Size(20, 20);
					this->cialo[punkty-1]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
					this->Controls->Add(cialo[punkty-1]);					
				 }
				 if(e->KeyCode == Keys::R)
				 {
					 losuj_jablko();
				 }

			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
			 {
				// 
				// rysowanie ramki planszy
				// 
				Graphics^ g1=this->CreateGraphics();
				Pen^ pioro1 = gcnew Pen(System::Drawing::Color::Black);
				g1->DrawRectangle(pioro1,0,0,680,500);

				int x, y;
				if(kierunek == 0)
				{
					
					x = glowa->Location.X;
					y = glowa->Location.Y;
					x_prev = this->glowa->Location.X;
					y_prev = this->glowa->Location.Y;
					if(x < this->Width-40) x += 20;
					else
					{
						wyswietl_kolizje();
					}
					this->glowa->Location = System::Drawing::Point(x,y);
					
					
				}
				if(kierunek == 1)
				{
					x = glowa->Location.X;
					y = glowa->Location.Y;
					x_prev = this->glowa->Location.X;
					y_prev = this->glowa->Location.Y;
					if(x > 0) x -= 20;
					else
					{
						wyswietl_kolizje();
					}
					this->glowa->Location = System::Drawing::Point(x,y);
				}
				if(kierunek == 2)
				{
					x = glowa->Location.X;
					y = glowa->Location.Y;
					x_prev = this->glowa->Location.X;
					y_prev = this->glowa->Location.Y;
					if(y > 0) y -= 20;
					else
					{
						wyswietl_kolizje();
					}
					this->glowa->Location = System::Drawing::Point(x,y);
				}
				if(kierunek == 3)
				{
					x = glowa->Location.X;
					y = glowa->Location.Y;
					x_prev = this->glowa->Location.X;
					y_prev = this->glowa->Location.Y;
					if(y < 480) y += 20;
					else
					{
						wyswietl_kolizje();
					}
					this->glowa->Location = System::Drawing::Point(x,y);
				}

				//
				// KOLIZJA Z JABLKIEM
				//
				if(this->glowa->Location.X == x_jablko && this->glowa->Location.Y == y_jablko)
				{
					punkty++;
					this->l_punkty->Text = (punkty+ilosc_gruszek*2).ToString();
					//this->cialo[punkty-1]->ImageLocation = "C:\\Users\\Wojtek\\Desktop\\snake\\snake\\glowa.jpg";
					this->cialo[punkty-1]->ImageLocation = "glowa.jpg";
					this->cialo[punkty-1]->Location = System::Drawing::Point(300, 300);
					this->cialo[punkty-1]->Name = L"cialo";
					this->cialo[punkty-1]->Size = System::Drawing::Size(20, 20);
					this->cialo[punkty-1]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
					this->Controls->Add(cialo[punkty-1]);
					this->Controls->Remove(jablko);
					losuj_jablko();
				}
				//
				// KOLIZJA Z GRUSZKA
				//
				if(this->glowa->Location.X == x_gruszka && this->glowa->Location.Y == y_gruszka)
				{
					punkty++;
					ilosc_gruszek++;
					this->l_punkty->Text = (punkty+ilosc_gruszek*2).ToString();
					//this->cialo[punkty-1]->ImageLocation = "C:\\Users\\Wojtek\\Desktop\\snake\\snake\\glowa.jpg";
					this->cialo[punkty-1]->ImageLocation = "glowa.jpg";
					this->cialo[punkty-1]->Location = System::Drawing::Point(300, 300);
					this->cialo[punkty-1]->Name = L"cialo";
					this->cialo[punkty-1]->Size = System::Drawing::Size(20, 20);
					this->cialo[punkty-1]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
					this->Controls->Add(cialo[punkty-1]);
					this->Controls->Remove(gruszka);
					losuj_gruszke();
				}

				//
				// KOLIZJA Z CIALEM
				//
				for(int i = 0; i < punkty; i++)
				{
					if(this->Name == "gra")
					{
						if(this->glowa->Location.X == this->cialo[i]->Location.X && this->glowa->Location.Y == this->cialo[i]->Location.Y)
						{
							wyswietl_kolizje();
						}
					}
					
				}

				//
				// ZAWIJANIE SIE WEZA
				//
				if(punkty > 0)
				{	
					for(int i = 0; i < punkty; i++)
					{
						x_prev1 = this->cialo[i]->Location.X;
						y_prev1 = this->cialo[i]->Location.Y;
						this->cialo[i]->Location = Point(x_prev,y_prev);
						x_prev = x_prev1;
						y_prev = y_prev1;
					}
				}

			 }
	private: void losuj_jablko()
			 {
				 //
				 // KOLIZJA Z WEZEM ZAWIESZA PROGRAM!!!!!!!!!!!!!!!!!!!!
				 //
				/*bool kolizja_z_wezem = false;
				do
				{
					x_jablko = (rand()%66)*10;
					if(x_jablko % 20 != 0) x_jablko += 10;
				
					y_jablko = (rand()%48)*10;
					if(y_jablko % 20 != 0) y_jablko += 10;

					for(int i = 0; i < punkty; i++)
					{
						if((x_jablko == this->cialo[i]->Location.X && y_jablko == this->cialo[i]->Location.Y) || (x_jablko == this->glowa->Location.X && y_jablko == this->glowa->Location.Y))
						{
							kolizja_z_wezem = true;
						}
					}
				}while(kolizja_z_wezem);*/

				x_jablko = (rand()%66)*10;
				if(x_jablko % 20 != 0) x_jablko += 10;
				
				y_jablko = (rand()%48)*10;
				if(y_jablko % 20 != 0) y_jablko += 10;
				
				//this->label1->Text = x_jablko.ToString()+" "+y_jablko.ToString();

				//this->jablko->ImageLocation = "C:\\Users\\Wojtek\\Desktop\\snake\\snake\\jablko1.bmp";
				this->jablko->ImageLocation = "jablko1.bmp";
				this->jablko->Location = System::Drawing::Point(300, 300);
				this->jablko->Name = L"jablko";
				this->jablko->Size = System::Drawing::Size(20, 20);
				this->jablko->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
				
				this->jablko->Location = Point(x_jablko,y_jablko);
				this->Controls->Add(jablko);
				
			 }
private: void losuj_gruszke()
			 {
				
				x_gruszka = (rand()%66)*10;
				if(x_gruszka % 20 != 0) x_gruszka += 10;
				
				y_gruszka = (rand()%48)*10;
				if(y_gruszka % 20 != 0) y_gruszka += 10;

				//this->gruszka->ImageLocation = "C:\\Users\\Wojtek\\Desktop\\snake\\snake\\gruszka.jpg";
				this->gruszka->ImageLocation = "gruszka.jpg";
				this->gruszka->Location = System::Drawing::Point(300, 300);
				this->gruszka->Name = L"gruszka";
				this->gruszka->Size = System::Drawing::Size(20, 20);
				this->gruszka->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
				
				this->gruszka->Location = Point(x_gruszka,y_gruszka);
				this->Controls->Add(gruszka);
				
			 }
	private: void wyswietl_kolizje()
			 {
				this->timer1->Enabled = false;
				MessageBox::Show(imie+" osi¹gn¹³eœ: "+(punkty+ilosc_gruszek*2).ToString()+" pkt");
				
				sprawdz_highscore();	
				
				this->Close();
			 }

			 
	private: void sprawdz_highscore()
			 {
				//
				// KONWERSJA String^ na char * zeby dalo sie zapisac do pliku przy pomocy fstream
				//
				array<Byte> ^chars = System::Text::Encoding::ASCII->GetBytes(imie);
				pin_ptr<Byte> charsPointer = &(chars[0]);
				char *imie_std = reinterpret_cast<char *>(static_cast<unsigned char *>(charsPointer));
				std::string native(imie_std, chars->Length);


				string linia[10];
				string nowe_linie[10];

				int stare_wyniki[5];
				string stare_imiona[5];

				int nowe_wyniki[5];
				string nowe_imiona[5];

				int licznik = 0;

				//
				// ODCZYTYWANIE PLIKU
				//
				fstream plik;
				//plik.open("C:\\Users\\Wojtek\\Desktop\\snake\\snake\\highscores.txt",ios::in);
				//plik.open("C:\\Users\\student\\Documents\\Prace\\PrOb\\wt_730_tp\\snake\\snake\\highscores.txt",ios::in);
				plik.open("highscores.txt",ios::in);
				if( plik.good() == true )
				{
					int i = 0;

					string bufor;
					while (getline(plik, bufor))
					{
						linia[i] = bufor;
						i++;
					}

					int j = 1;
					for (int i = 0; i < 5; i++)
					{
						stare_wyniki[i] = std::atoi(linia[j].c_str());
						stare_imiona[i] = linia[j - 1];
						j += 2;
			        }

			        //
			        // STWORZENIE NOWEGO HIGHSCORU
			        //
					//int licznik = 0;
					for (int i = 0; i < 5; i++)
					{
						if ((punkty+ilosc_gruszek*2) < stare_wyniki[i])
						licznik++;
					}

					for (int i = 0; i < licznik; i++)
					{
						nowe_wyniki[i] = stare_wyniki[i];
						nowe_imiona[i] = stare_imiona[i];
					}
					for (int i = licznik + 1; i < 5; i++)
					{
						nowe_wyniki[i] = stare_wyniki[i - 1];
						nowe_imiona[i] = stare_imiona[i - 1];
					}
					nowe_wyniki[licznik] = (punkty+ilosc_gruszek*2);
					nowe_imiona[licznik] = imie_std;
					//plik.flush();
					plik.close();
				}
				else
				{
					MessageBox::Show("Blad podczas otwierania pliku do odczytu highscores.txt, nieprawidlowa sciezka");
				}

				fstream plik1;
				//plik1.open("C:\\Users\\Wojtek\\Desktop\\snake\\snake\\highscores.txt", ios::out);
				plik1.open("highscores.txt", ios::out);
				//plik1.open("C:\\Users\\student\\Documents\\Prace\\PrOb\\wt_730_tp\\snake\\snake\\highscores.txt",ios::out);
				if(plik1.good() == true)
				{
					for (int i = 0; i < 5; i++)
					{
						plik1 << nowe_imiona[i] << endl << nowe_wyniki[i] << endl;
						plik1.flush();
					}
					plik1.close();
				}
				else
				{
					MessageBox::Show("Blad podczas otwierania pliku do zapisu highscores.txt, nieprawidlowa sciezka");
				}

				//
				// WYSWIETLENIE HIGHSCORE
				//
				if(licznik < 5)
				{
					highscore^ naj_wynik = gcnew highscore();
					naj_wynik->Show();
				}
				

			 }


private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->Controls->Remove(gruszka);
			 this->timer3->Enabled = true;
			 this->timer2->Enabled = false;
		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 losuj_gruszke();
			 this->timer2->Enabled = true;
			 this->timer3->Enabled = false;

		 }


};
}

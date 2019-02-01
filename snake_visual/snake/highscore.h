#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace snake {

	/// <summary>
	/// Summary for highscore
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class highscore : public System::Windows::Forms::Form
	{
	public:
		highscore(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			for(int i = 0; i < 10; i++)
			{
				this->lab[i] = (gcnew System::Windows::Forms::Label);
				if(i % 2 == 0)
				{
					this->lab[i]->Location = Point(100,60+i*20);
				}
				else
				{
					this->lab[i]->Location = Point(180,60+(i-1)*20);
				}
				
				this->lab[i]->Size = System::Drawing::Size(80, 13);
				this->lab[i]->Text = "ELO";
				this->Controls->Add(lab[i]);
			}
			for(int i = 0; i < 5; i++)
			{
				this->lab_poz[i] = gcnew System::Windows::Forms::Label;
				this->lab_poz[i]->Location = Point(80,60+i*40);
				this->lab_poz[i]->Size = System::Drawing::Size(20,13);
				this->lab_poz[i]->Text = (i+1).ToString()+".";
				this->Controls->Add(lab_poz[i]);
			}
			odczyt_wynikow();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~highscore()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: static array<Label^>^ lab = gcnew array<Label^>(10);

	private: static array<Label^>^ lab_poz = gcnew array<Label^>(5);

	private: System::Windows::Forms::Button^  b_zamknij;
	private: System::Windows::Forms::Button^  b_wyczysc;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(highscore::typeid));
			this->b_zamknij = (gcnew System::Windows::Forms::Button());
			this->b_wyczysc = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// b_zamknij
			// 
			this->b_zamknij->Location = System::Drawing::Point(217, 281);
			this->b_zamknij->Name = L"b_zamknij";
			this->b_zamknij->Size = System::Drawing::Size(75, 23);
			this->b_zamknij->TabIndex = 1;
			this->b_zamknij->Text = L"Zamknij";
			this->b_zamknij->UseVisualStyleBackColor = true;
			this->b_zamknij->Click += gcnew System::EventHandler(this, &highscore::b_zamknij_Click);
			// 
			// b_wyczysc
			// 
			this->b_wyczysc->Location = System::Drawing::Point(125, 281);
			this->b_wyczysc->Name = L"b_wyczysc";
			this->b_wyczysc->Size = System::Drawing::Size(75, 23);
			this->b_wyczysc->TabIndex = 2;
			this->b_wyczysc->Text = L"Wyczyœæ";
			this->b_wyczysc->UseVisualStyleBackColor = true;
			this->b_wyczysc->Click += gcnew System::EventHandler(this, &highscore::b_wyczysc_Click_1);
			// 
			// highscore
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(304, 316);
			this->Controls->Add(this->b_wyczysc);
			this->Controls->Add(this->b_zamknij);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"highscore";
			this->Text = L"Snake - najlepsze wyniki";
			this->ResumeLayout(false);

		}
#pragma endregion


	private: void odczyt_wynikow()
			 {
				 fstream plik;
				 //plik.open("C:\\Users\\Wojtek\\Desktop\\snake\\snake\\highscores.txt",ios::in);
				 //plik.open("C:\\Users\\student\\Documents\\Prace\\PrOb\\wt_730_tp\\snake\\snake\\highscores.txt",ios::in);
				 plik.open("highscores.txt",ios::in);
				 string bufor;
				 int i = 0;
				 while(getline(plik,bufor))
				 {
					 String^ MyString = gcnew String(bufor.c_str());
					 this->lab[i]->Text = MyString;
					 i++;
				 }
			 }

private: System::Void b_zamknij_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->Close();
		 }
private: System::Void b_wyczysc_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
				fstream plik1;
				//plik1.open("C:\\Users\\Wojtek\\Desktop\\snake\\snake\\highscores.txt", ios::out);
				//plik1.open("C:\\Users\\student\\Documents\\Prace\\PrOb\\wt_730_tp\\snake\\snake\\highscores.txt", ios::out);
				plik1.open("highscores.txt", ios::out);
				if(plik1.good() == true)
				{
					for (int i = 0; i < 5; i++)
					{
						plik1 << "----------" << endl << "0" << endl;
						plik1.flush();
					}
					plik1.close();
				}
				else
				{
					MessageBox::Show("Blad podczas otwierania pliku do zapisu highscores.txt, nieprawidlowa sciezka");
				}
				odczyt_wynikow();
		 }
};
}

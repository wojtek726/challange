#pragma once
#include "gra.h"
#include "highscore.h"
#include "help.h"


namespace snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->combo_trudnosc->SelectedIndex = 2;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  b_nowagra;
	protected: 
	private: System::Windows::Forms::Button^  b_wyjdz;
	private: System::Windows::Forms::ComboBox^  combo_trudnosc;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox_imie;
	private: System::Windows::Forms::Button^  b_highscore;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  b_help;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->b_nowagra = (gcnew System::Windows::Forms::Button());
			this->b_wyjdz = (gcnew System::Windows::Forms::Button());
			this->combo_trudnosc = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_imie = (gcnew System::Windows::Forms::TextBox());
			this->b_highscore = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->b_help = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// b_nowagra
			// 
			this->b_nowagra->Location = System::Drawing::Point(12, 14);
			this->b_nowagra->Name = L"b_nowagra";
			this->b_nowagra->Size = System::Drawing::Size(191, 71);
			this->b_nowagra->TabIndex = 0;
			this->b_nowagra->Text = L"NOWA GRA";
			this->b_nowagra->UseVisualStyleBackColor = true;
			this->b_nowagra->Click += gcnew System::EventHandler(this, &Form1::b_nowagra_Click);
			// 
			// b_wyjdz
			// 
			this->b_wyjdz->Location = System::Drawing::Point(12, 186);
			this->b_wyjdz->Name = L"b_wyjdz";
			this->b_wyjdz->Size = System::Drawing::Size(191, 70);
			this->b_wyjdz->TabIndex = 0;
			this->b_wyjdz->Text = L"WYJD";
			this->b_wyjdz->UseVisualStyleBackColor = true;
			this->b_wyjdz->Click += gcnew System::EventHandler(this, &Form1::b_wyjdz_Click);
			// 
			// combo_trudnosc
			// 
			this->combo_trudnosc->DisplayMember = L"1";
			this->combo_trudnosc->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_trudnosc->FormattingEnabled = true;
			this->combo_trudnosc->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"£atwy", L"Œredni", L"Trudny"});
			this->combo_trudnosc->Location = System::Drawing::Point(220, 30);
			this->combo_trudnosc->Name = L"combo_trudnosc";
			this->combo_trudnosc->Size = System::Drawing::Size(121, 21);
			this->combo_trudnosc->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(217, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Poziom trudnoœci:";
			// 
			// textBox_imie
			// 
			this->textBox_imie->Location = System::Drawing::Point(220, 75);
			this->textBox_imie->Name = L"textBox_imie";
			this->textBox_imie->Size = System::Drawing::Size(121, 20);
			this->textBox_imie->TabIndex = 4;
			// 
			// b_highscore
			// 
			this->b_highscore->Location = System::Drawing::Point(12, 100);
			this->b_highscore->Name = L"b_highscore";
			this->b_highscore->Size = System::Drawing::Size(191, 70);
			this->b_highscore->TabIndex = 5;
			this->b_highscore->Text = L"NAJLEPSZE WYNIKI";
			this->b_highscore->UseVisualStyleBackColor = true;
			this->b_highscore->Click += gcnew System::EventHandler(this, &Form1::b_highscore_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(217, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Imie:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(220, 109);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 147);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// b_help
			// 
			this->b_help->Location = System::Drawing::Point(360, 30);
			this->b_help->Name = L"b_help";
			this->b_help->Size = System::Drawing::Size(120, 65);
			this->b_help->TabIndex = 7;
			this->b_help->Text = L"HELP";
			this->b_help->UseVisualStyleBackColor = true;
			this->b_help->Click += gcnew System::EventHandler(this, &Form1::b_help_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 282);
			this->Controls->Add(this->b_help);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->b_highscore);
			this->Controls->Add(this->textBox_imie);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->combo_trudnosc);
			this->Controls->Add(this->b_wyjdz);
			this->Controls->Add(this->b_nowagra);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Snake";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void b_wyjdz_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
	private: System::Void b_nowagra_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 if(this->textBox_imie->Text == "")
				 {
					 MessageBox::Show("Podaj imie!");
				 }
				 else
				 {
					 gra ^nowagra = gcnew gra(this->combo_trudnosc->SelectedIndex,this->textBox_imie->Text);	 
					 nowagra->Show();
				 }
		 
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void b_highscore_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
					highscore ^najlepsze = gcnew highscore();
					najlepsze->Show();
			 }

private: System::Void b_help_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 help ^noweokno = gcnew help();
			 noweokno->Show();
		 }
};
}


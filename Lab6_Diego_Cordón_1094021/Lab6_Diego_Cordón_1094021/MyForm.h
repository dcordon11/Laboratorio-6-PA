#pragma once

#include "Lista.h"
#include "Orden.h"
#include "Pokémon.h"


namespace Lab6DiegoCordón1094021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label6;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->richTextBox1->Location = System::Drawing::Point(58, 181);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(321, 415);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(348, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(345, 110);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->richTextBox2->Location = System::Drawing::Point(639, 181);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(325, 415);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(118, 154);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(200, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Lista del archivo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(712, 154);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(184, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Lista Ordenada";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(429, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 48);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Seleccionar Archivo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(429, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 48);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Selection Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(425, 312);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ordenamientos";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(429, 444);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 48);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Shell Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(429, 526);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(175, 48);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Quick Sort";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(105, 659);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(175, 48);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Generación";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(332, 659);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(175, 48);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Número Nacional";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(216, 619);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(195, 24);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Ordenar por tipo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(680, 619);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(237, 24);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Tiempo de ejecución";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Orbitron", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(603, 669);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 24);
			this->label6->TabIndex = 14;
			this->label6->Text = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1026, 758);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->richTextBox1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

		Lista^ list = gcnew Lista();
		Orden^ orden = gcnew Orden();
		Stopwatch^ stopwatch = gcnew Stopwatch();

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		


		label2->Visible = true;
		label3->Visible = false;
		richTextBox1->Visible = true;
		richTextBox2->Visible = true;

		try {

			OpenFileDialog lecturaArchivo;
			if (lecturaArchivo.ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				StreamReader^ lector = gcnew StreamReader(lecturaArchivo.FileName);
				while (lector->Peek() >= 0)
				{
					String^ linea = lector->ReadLine();
					for (int i = 0; i < linea->Split(',')->Length; i = i+3)
					{
						String^ NombrePokemon = linea->Split(',')[i];
						NombrePokemon = NombrePokemon->Trim();

						String^ NumeroNacional = linea->Split(',')[i+1];
						NumeroNacional = NumeroNacional->Trim();
						int nnParse = int::Parse(NumeroNacional);

						String^ GeneracionPokemon = linea->Split(',')[i + 2];
						GeneracionPokemon = GeneracionPokemon->Trim();
						int genParse = int::Parse(GeneracionPokemon);
						list->InsertarDatos(NombrePokemon, nnParse, genParse);
						

					}
				}
			}
		}
		catch (...)
		{ }

		MessageBox::Show("Archivo seleccionado");
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	 MessageBox::Show("Ordenar por generación");
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		   MessageBox::Show("Ordenar por número nacional");
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Ordenado por medio de Selection Sort");

	richTextBox1->Text = "Nombre" + "\t" + "NationalN " + "\t" + "Gen" + "\n" + list->Imprimir();
	stopwatch->Start();
	orden->SelectionSort(list);
	stopwatch->Stop();

	String^ lista = list->Imprimir();
	richTextBox2->Text = "Nombre" + "\t" + "NationalN " + "\t" + "Gen" + "\n" + list->Imprimir();

	label2->Visible = true;
	label3->Visible = false;
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;
	stopwatch->Stop();
	label6->Text = "Tiempo: " + stopwatch->Elapsed.ToString();


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Ordenado por medio de Shell Sort");

	richTextBox1->Text = "Nombre " + "\t" + "NationalN " + "\t" + "Gen " + "\n" + list->Imprimir();
	stopwatch->Start();
	orden->ShellSort(list);
	stopwatch->Stop();

	String^ lista = list->Imprimir();
	richTextBox2->Text = "Nombre" + "\t" + "NationalN " + "\t" + "Gen" + "\n" + list->Imprimir();

	label2->Visible = true;
	label3->Visible = false;
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;
	stopwatch->Stop();
	label6->Text = "Tiempo: " + stopwatch->Elapsed.ToString();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Ordenado por medio de Quick Sort");

	richTextBox1->Text = "Nombre" + "\t" + "NationalN " + "\t" + "Gen" + "\n" + list->Imprimir();
	stopwatch->Start();
	orden->QuickSort(list, 0, list->longitud -1);
	stopwatch->Stop();

	String^ lista = list->Imprimir();
	richTextBox2->Text = "Nombre" + "\t" + "NationalN " + "\t" + "Gen" + "\n" + list->Imprimir();

	label2->Visible = true;
	label3->Visible = false;
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;
	stopwatch->Stop();
	label6->Text = "Tiempo: " + stopwatch->Elapsed.ToString();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {


}
};
}

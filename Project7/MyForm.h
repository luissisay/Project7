#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ fd;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblAprendamos;
	private: System::Windows::Forms::Label^ lblLasumaylaresta;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblPrimerNombre;



	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Label^ lblcualquieresaprender;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnSuma;
	private: System::Windows::Forms::Button^ btnResta;





	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->fd = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblAprendamos = (gcnew System::Windows::Forms::Label());
			this->lblLasumaylaresta = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblPrimerNombre = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->lblcualquieresaprender = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnSuma = (gcnew System::Windows::Forms::Button());
			this->btnResta = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// fd
			// 
			this->fd->AutoSize = true;
			this->fd->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->fd->Location = System::Drawing::Point(156, 40);
			this->fd->Name = L"fd";
			this->fd->Size = System::Drawing::Size(0, 63);
			this->fd->TabIndex = 0;
			this->fd->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->fd->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Broadway", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 230);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 31);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// lblAprendamos
			// 
			this->lblAprendamos->AutoSize = true;
			this->lblAprendamos->BackColor = System::Drawing::Color::Transparent;
			this->lblAprendamos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAprendamos->Location = System::Drawing::Point(25, 30);
			this->lblAprendamos->Name = L"lblAprendamos";
			this->lblAprendamos->Size = System::Drawing::Size(333, 63);
			this->lblAprendamos->TabIndex = 2;
			this->lblAprendamos->Text = L"Aprendamos";
			this->lblAprendamos->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// lblLasumaylaresta
			// 
			this->lblLasumaylaresta->AutoSize = true;
			this->lblLasumaylaresta->BackColor = System::Drawing::Color::Transparent;
			this->lblLasumaylaresta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLasumaylaresta->Location = System::Drawing::Point(29, 121);
			this->lblLasumaylaresta->Name = L"lblLasumaylaresta";
			this->lblLasumaylaresta->Size = System::Drawing::Size(302, 39);
			this->lblLasumaylaresta->TabIndex = 3;
			this->lblLasumaylaresta->Text = L"La suma y la resta.";
			this->lblLasumaylaresta->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(253, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(158, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 5;
			// 
			// lblPrimerNombre
			// 
			this->lblPrimerNombre->AutoSize = true;
			this->lblPrimerNombre->BackColor = System::Drawing::Color::Transparent;
			this->lblPrimerNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrimerNombre->Location = System::Drawing::Point(59, 177);
			this->lblPrimerNombre->Name = L"lblPrimerNombre";
			this->lblPrimerNombre->Size = System::Drawing::Size(228, 25);
			this->lblPrimerNombre->TabIndex = 8;
			this->lblPrimerNombre->Text = L"Escribe tu primer nombre";
			this->lblPrimerNombre->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(36, 230);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(288, 20);
			this->txtNombre->TabIndex = 9;
			// 
			// lblcualquieresaprender
			// 
			this->lblcualquieresaprender->AutoSize = true;
			this->lblcualquieresaprender->BackColor = System::Drawing::Color::Transparent;
			this->lblcualquieresaprender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblcualquieresaprender->Location = System::Drawing::Point(69, 323);
			this->lblcualquieresaprender->Name = L"lblcualquieresaprender";
			this->lblcualquieresaprender->Size = System::Drawing::Size(228, 25);
			this->lblcualquieresaprender->TabIndex = 10;
			this->lblcualquieresaprender->Text = L"¿Cuál quieres aprender\?";
			this->lblcualquieresaprender->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(70, 500);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 20);
			this->label8->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(236, 500);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 12;
			// 
			// btnSuma
			// 
			this->btnSuma->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSuma.Image")));
			this->btnSuma->Location = System::Drawing::Point(46, 380);
			this->btnSuma->Name = L"btnSuma";
			this->btnSuma->Size = System::Drawing::Size(110, 81);
			this->btnSuma->TabIndex = 13;
			this->btnSuma->Text = L"Suma";
			this->btnSuma->UseVisualStyleBackColor = true;
			this->btnSuma->Click += gcnew System::EventHandler(this, &MyForm::btnSuma_Click);
			// 
			// btnResta
			// 
			this->btnResta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnResta.Image")));
			this->btnResta->Location = System::Drawing::Point(189, 380);
			this->btnResta->Name = L"btnResta";
			this->btnResta->Size = System::Drawing::Size(121, 81);
			this->btnResta->TabIndex = 14;
			this->btnResta->Text = L"resta";
			this->btnResta->UseVisualStyleBackColor = true;
			this->btnResta->Click += gcnew System::EventHandler(this, &MyForm::btnResta_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(371, 632);
			this->Controls->Add(this->lblAprendamos);
			this->Controls->Add(this->btnResta);
			this->Controls->Add(this->btnSuma);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lblcualquieresaprender);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->lblPrimerNombre);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblLasumaylaresta);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->fd);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSuma_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Project7::MyForm1^ suma = gcnew Project7::MyForm1();
	this->Visible = false;
	suma->ShowDialog();
	this->Visible = true;
	
}

private: System::Void btnResta_Click(System::Object^ sender, System::EventArgs^ e) 

{
	Project7::MyForm2^ resta = gcnew Project7::MyForm2();
	this->Visible = false;
	resta->ShowDialog();
	this->Visible = true;
}
};
}

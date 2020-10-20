#pragma once
#include "MyForm1.h"
#include "Instrucciones.h"


namespace Proyecto1MeganMorales122112001 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btMoFácil;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btIntrucciones;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;









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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btMoFácil = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btIntrucciones = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(91, 23);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¡BIENVENIDO A COLORMANÍA!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 101);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"1. Para iniciar el juego, presione aquí";
			// 
			// btMoFácil
			// 
			this->btMoFácil->BackColor = System::Drawing::Color::White;
			this->btMoFácil->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btMoFácil->Location = System::Drawing::Point(334, 96);
			this->btMoFácil->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btMoFácil->Name = L"btMoFácil";
			this->btMoFácil->Size = System::Drawing::Size(110, 29);
			this->btMoFácil->TabIndex = 3;
			this->btMoFácil->Text = L"INICIAR";
			this->btMoFácil->UseVisualStyleBackColor = false;
			this->btMoFácil->Click += gcnew System::EventHandler(this, &MyForm::btMoFácil_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 160);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(281, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"2. Para ver las instrucciones, presione aquí";
			// 
			// btIntrucciones
			// 
			this->btIntrucciones->BackColor = System::Drawing::Color::White;
			this->btIntrucciones->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btIntrucciones->Location = System::Drawing::Point(334, 155);
			this->btIntrucciones->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btIntrucciones->Name = L"btIntrucciones";
			this->btIntrucciones->Size = System::Drawing::Size(110, 29);
			this->btIntrucciones->TabIndex = 7;
			this->btIntrucciones->Text = L"INSTRUCCIONES";
			this->btIntrucciones->UseVisualStyleBackColor = false;
			this->btIntrucciones->Click += gcnew System::EventHandler(this, &MyForm::btIntrucciones_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 217);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(240, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"3. Para salir del juego, presione aquí";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Location = System::Drawing::Point(334, 217);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 29);
			this->button3->TabIndex = 9;
			this->button3->Text = L"SALIDA";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(503, 332);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btIntrucciones);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btMoFácil);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"COLORMANÍA";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Close();
}
private: System::Void btMoFácil_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1 ^ My_Form1 = gcnew MyForm1();
	this->Hide();
	My_Form1->ShowDialog();
	this->Show();
	

}
private: System::Void btIntrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
	Instrucciones^ BtInstrucciones = gcnew Instrucciones();
	this->Hide();
	BtInstrucciones->ShowDialog();
	this->Show();

}
};




}

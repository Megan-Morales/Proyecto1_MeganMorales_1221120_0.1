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
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::Button^ btMoF�cil;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btIntrucciones;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btMoDificl;

	private: System::Windows::Forms::Button^ btMoMedio;






	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btMoF�cil = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btIntrucciones = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btMoDificl = (gcnew System::Windows::Forms::Button());
			this->btMoMedio = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(121, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�BIENVENIDO A COLORMAN�A!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(284, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"1. Para iniciar el juego, presione aqu�";
			// 
			// btMoF�cil
			// 
			this->btMoF�cil->BackColor = System::Drawing::Color::White;
			this->btMoF�cil->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btMoF�cil->Location = System::Drawing::Point(445, 110);
			this->btMoF�cil->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btMoF�cil->Name = L"btMoF�cil";
			this->btMoF�cil->Size = System::Drawing::Size(147, 36);
			this->btMoF�cil->TabIndex = 3;
			this->btMoF�cil->Text = L"MODO F�CIL";
			this->btMoF�cil->UseVisualStyleBackColor = false;
			this->btMoF�cil->Click += gcnew System::EventHandler(this, &MyForm::btMoF�cil_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 281);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(331, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"2. Para ver las instrucciones, presione aqu�";
			// 
			// btIntrucciones
			// 
			this->btIntrucciones->BackColor = System::Drawing::Color::White;
			this->btIntrucciones->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btIntrucciones->Location = System::Drawing::Point(445, 274);
			this->btIntrucciones->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btIntrucciones->Name = L"btIntrucciones";
			this->btIntrucciones->Size = System::Drawing::Size(147, 36);
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
			this->label4->Location = System::Drawing::Point(15, 351);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(280, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"3. Para salir del juego, presione aqu�";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Location = System::Drawing::Point(445, 351);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 36);
			this->button3->TabIndex = 9;
			this->button3->Text = L"SALIDA";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btMoDificl
			// 
			this->btMoDificl->BackColor = System::Drawing::Color::White;
			this->btMoDificl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btMoDificl->Location = System::Drawing::Point(445, 191);
			this->btMoDificl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btMoDificl->Name = L"btMoDificl";
			this->btMoDificl->Size = System::Drawing::Size(147, 36);
			this->btMoDificl->TabIndex = 10;
			this->btMoDificl->Text = L"MODO DIF�CIL";
			this->btMoDificl->UseVisualStyleBackColor = false;
			// 
			// btMoMedio
			// 
			this->btMoMedio->BackColor = System::Drawing::Color::White;
			this->btMoMedio->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btMoMedio->Location = System::Drawing::Point(445, 150);
			this->btMoMedio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btMoMedio->Name = L"btMoMedio";
			this->btMoMedio->Size = System::Drawing::Size(147, 36);
			this->btMoMedio->TabIndex = 11;
			this->btMoMedio->Text = L"MODO MEDIO";
			this->btMoMedio->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(671, 497);
			this->Controls->Add(this->btMoMedio);
			this->Controls->Add(this->btMoDificl);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btIntrucciones);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btMoF�cil);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"COLORMAN�A";
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
private: System::Void btMoF�cil_Click(System::Object^ sender, System::EventArgs^ e) {
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

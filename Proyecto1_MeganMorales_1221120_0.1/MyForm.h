#pragma once
#include "MyForm1.h"


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
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btMoFácil;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btIntrucciones;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btMoDificl;

	private: System::Windows::Forms::Button^ btMoMedio;


	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			this->btMoDificl = (gcnew System::Windows::Forms::Button());
			this->btMoMedio = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(266, 19);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(336, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¡BIENVENIDO A COLORMANÍA!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(637, 94);
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
			this->btMoFácil->Location = System::Drawing::Point(690, 145);
			this->btMoFácil->Margin = System::Windows::Forms::Padding(2);
			this->btMoFácil->Name = L"btMoFácil";
			this->btMoFácil->Size = System::Drawing::Size(110, 29);
			this->btMoFácil->TabIndex = 3;
			this->btMoFácil->Text = L"MODO FÁCIL";
			this->btMoFácil->UseVisualStyleBackColor = false;
			this->btMoFácil->Click += gcnew System::EventHandler(this, &MyForm::btMoFácil_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(624, 367);
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
			this->btIntrucciones->Location = System::Drawing::Point(690, 403);
			this->btIntrucciones->Margin = System::Windows::Forms::Padding(2);
			this->btIntrucciones->Name = L"btIntrucciones";
			this->btIntrucciones->Size = System::Drawing::Size(110, 29);
			this->btIntrucciones->TabIndex = 7;
			this->btIntrucciones->Text = L"INSTRUCCIONES";
			this->btIntrucciones->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(637, 517);
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
			this->button3->Location = System::Drawing::Point(690, 559);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 29);
			this->button3->TabIndex = 9;
			this->button3->Text = L"SALIDA";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btMoDificl
			// 
			this->btMoDificl->BackColor = System::Drawing::Color::White;
			this->btMoDificl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btMoDificl->Location = System::Drawing::Point(690, 268);
			this->btMoDificl->Margin = System::Windows::Forms::Padding(2);
			this->btMoDificl->Name = L"btMoDificl";
			this->btMoDificl->Size = System::Drawing::Size(110, 29);
			this->btMoDificl->TabIndex = 10;
			this->btMoDificl->Text = L"MODO DIFÍCIL";
			this->btMoDificl->UseVisualStyleBackColor = false;
			// 
			// btMoMedio
			// 
			this->btMoMedio->BackColor = System::Drawing::Color::White;
			this->btMoMedio->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btMoMedio->Location = System::Drawing::Point(690, 209);
			this->btMoMedio->Margin = System::Windows::Forms::Padding(2);
			this->btMoMedio->Name = L"btMoMedio";
			this->btMoMedio->Size = System::Drawing::Size(110, 29);
			this->btMoMedio->TabIndex = 11;
			this->btMoMedio->Text = L"MODO MEDIO";
			this->btMoMedio->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(29, 85);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(512, 623);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(916, 747);
			this->Controls->Add(this->btMoMedio);
			this->Controls->Add(this->btMoDificl);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btIntrucciones);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btMoFácil);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"COLORMANÍA";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	MyForm1 ^ My = gcnew MyForm1();	
	this->Hide();
	My->Show();
	


}
};




}

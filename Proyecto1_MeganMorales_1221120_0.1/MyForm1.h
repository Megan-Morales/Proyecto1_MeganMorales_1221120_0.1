#pragma once
#include "List.h";
#include <cstddef>

namespace Proyecto1MeganMorales122112001 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public: List* miList;

	private: System::Windows::Forms::Button^ readDoc;
		   /*Pilas para mapa inicial*/
	public: List* milist1;
	public: List* milist2;
	public: List* milist3;
	public: List* milist4;
	public: List* milist5;

		  /*Pilas para manejo de colores*/
	public: List* pilaNegra;
	public: List* pilaAzul;
	public: List* pilaBlanco;
	public: List* pilaAmarillo;
	public: List* pilaVerde;
	public: List* pilaRojo;
	public: List* pilaMorado;
	public: List* pilaAzulM;

		  /*Para almacenar el historial de movimientos*/
		  
	public: String^ reporte;


	public:
		MyForm1(void)
		{
			InitializeComponent();
			ReestablecerColor();
			reporte = "";
			/*Se inicializan pilas de mapa inicial*/
			miList = new List();
			miList->count = 0;
			miList->start = nullptr;
			miList->end = nullptr;

			milist1 = new List();
			milist1->count = 0;
			milist1->start = nullptr;
			milist1->end = nullptr;

			milist2 = new List();
			milist2->count = 0;
			milist2->start = nullptr;
			milist2->end = nullptr;

			milist3 = new List();
			milist3->count = 0;
			milist3->start = nullptr;
			milist3->end = nullptr;

			milist4 = new List();
			milist4->count = 0;
			milist4->start = nullptr;
			milist4->end = nullptr;

			milist5 = new List();
			milist5->count = 0;
			milist5->start = nullptr;
			milist5->end = nullptr;
			/*Se inicializan pilas para colores*/

			pilaNegra = new List();
			pilaNegra->count = 0;
			pilaNegra->start = nullptr;
			pilaNegra->end = nullptr;

			pilaAzul = new List();
			pilaAzul->count = 0;
			pilaAzul->start = nullptr;
			pilaAzul->end = nullptr;

			pilaBlanco = new List();
			pilaBlanco->count = 0;
			pilaBlanco->start = nullptr;
			pilaBlanco->end = nullptr;

			pilaAzulM = new List();
			pilaAzulM->count = 0;
			pilaAzulM->start = nullptr;
			pilaAzulM->end = nullptr;

			pilaAmarillo = new List();
			pilaAmarillo->count = 0;
			pilaAmarillo->start = nullptr;
			pilaAmarillo->end = nullptr;

			pilaVerde = new List();
			pilaVerde->count = 0;
			pilaVerde->start = nullptr;
			pilaVerde->end = nullptr;

			pilaRojo = new List();
			pilaRojo->count = 0;
			pilaRojo->start = nullptr;
			pilaRojo->end = nullptr;

			pilaMorado = new List();
			pilaMorado->count = 0;
			pilaMorado->start = nullptr;
			pilaMorado->end = nullptr;
		}

	protected:
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::Windows::Forms::Button^ btnIniciar;
protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnSManual;
private: System::Windows::Forms::Button^ btnSpila;


private: System::Windows::Forms::Button^ btnScola;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::ListBox^ lstLista;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::SaveFileDialog^ sfdExportar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSManual = (gcnew System::Windows::Forms::Button());
			this->btnSpila = (gcnew System::Windows::Forms::Button());
			this->btnScola = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lstLista = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->SuspendLayout();
			// 
			// btnIniciar
			// 
			this->btnIniciar->BackColor = System::Drawing::Color::White;
			this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciar->Location = System::Drawing::Point(380, 11);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(88, 30);
			this->btnIniciar->TabIndex = 0;
			this->btnIniciar->Text = L"Cargar juego";
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &MyForm1::btnIniciar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 13);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(336, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"¡BIENVENIDO A COLORMANÍA!";
			// 
			// btnSManual
			// 
			this->btnSManual->BackColor = System::Drawing::Color::White;
			this->btnSManual->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSManual->Location = System::Drawing::Point(505, 119);
			this->btnSManual->Name = L"btnSManual";
			this->btnSManual->Size = System::Drawing::Size(87, 39);
			this->btnSManual->TabIndex = 2;
			this->btnSManual->Text = L"Solución manual";
			this->btnSManual->UseVisualStyleBackColor = false;
			this->btnSManual->Click += gcnew System::EventHandler(this, &MyForm1::btnSManual_Click);
			// 
			// btnSpila
			// 
			this->btnSpila->BackColor = System::Drawing::Color::White;
			this->btnSpila->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSpila->Location = System::Drawing::Point(488, 423);
			this->btnSpila->Name = L"btnSpila";
			this->btnSpila->Size = System::Drawing::Size(116, 50);
			this->btnSpila->TabIndex = 3;
			this->btnSpila->Text = L"Solución automática por pila";
			this->btnSpila->UseVisualStyleBackColor = false;
			this->btnSpila->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// btnScola
			// 
			this->btnScola->BackColor = System::Drawing::Color::White;
			this->btnScola->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnScola->Location = System::Drawing::Point(488, 369);
			this->btnScola->Name = L"btnScola";
			this->btnScola->Size = System::Drawing::Size(116, 50);
			this->btnScola->TabIndex = 4;
			this->btnScola->Text = L"Solución automática por cola";
			this->btnScola->UseVisualStyleBackColor = false;
			this->btnScola->Click += gcnew System::EventHandler(this, &MyForm1::btnScola_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(38, 177);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(256, 25);
			this->dataGridView1->TabIndex = 5;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(38, 201);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(256, 23);
			this->dataGridView2->TabIndex = 6;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(38, 222);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(256, 19);
			this->dataGridView3->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(113, 140);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"MAPA INICIAL";
			// 
			// dataGridView4
			// 
			this->dataGridView4->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(38, 381);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->Size = System::Drawing::Size(256, 25);
			this->dataGridView4->TabIndex = 9;
			// 
			// dataGridView5
			// 
			this->dataGridView5->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(38, 405);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->Size = System::Drawing::Size(256, 23);
			this->dataGridView5->TabIndex = 10;
			// 
			// dataGridView6
			// 
			this->dataGridView6->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(38, 427);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->Size = System::Drawing::Size(256, 19);
			this->dataGridView6->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 186);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"P0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(8, 202);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"P1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 218);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 16);
			this->label5->TabIndex = 14;
			this->label5->Text = L"P2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(9, 387);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"P0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(9, 403);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"P1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(9, 419);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"P2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(122, 349);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"MAPA FINAL";
			// 
			// lstLista
			// 
			this->lstLista->FormattingEnabled = true;
			this->lstLista->Location = System::Drawing::Point(737, 157);
			this->lstLista->Name = L"lstLista";
			this->lstLista->Size = System::Drawing::Size(128, 316);
			this->lstLista->TabIndex = 19;
			this->lstLista->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(763, 479);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 39);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Guardar reporte";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(760, 129);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 16);
			this->label10->TabIndex = 21;
			this->label10->Text = L"REPORTE";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(602, 174);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(46, 25);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Pila";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(602, 200);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(46, 25);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Cola";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(427, 204);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(19, 20);
			this->textBox1->TabIndex = 24;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(538, 205);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(19, 20);
			this->textBox2->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(444, 177);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 16);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Ej. P0 A P2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(405, 205);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(17, 16);
			this->label12->TabIndex = 27;
			this->label12->Text = L"P";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(472, 206);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 16);
			this->label13->TabIndex = 28;
			this->label13->Text = L"A";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(516, 205);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(17, 16);
			this->label14->TabIndex = 29;
			this->label14->Text = L"P";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::MistyRose;
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(756, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(78, 39);
			this->button7->TabIndex = 30;
			this->button7->Text = L"REGRESAR";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::MistyRose;
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(756, 47);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(78, 39);
			this->button8->TabIndex = 31;
			this->button8->Text = L"SALIR";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(881, 552);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lstLista);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnScola);
			this->Controls->Add(this->btnSpila);
			this->Controls->Add(this->btnSManual);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnIniciar);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		btnSManual->Enabled=false;
		btnScola->Enabled = false;
		btnSpila->Enabled = false;
		button2->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		btnSManual->Enabled = false;
		btnScola->Enabled = false;
		button2->Enabled = true;
		button5->Enabled = false;
		button6->Enabled = false;
		solucionAutomatica(0); // 0 significa que soluciona por pila y 1 por cola
		LlenarListBox();

	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   
	   
	   /* Método mostrar pasos en ListBox
		return void
		*/
void LlenarListBox() {
	Console::WriteLine(reporte);
	array<String^>^ pila = reporte->Split(',');
	for each (String ^ temp in pila) {
	lstLista->Items->Add(temp);
	}

}

	   /* Método para recorrer pilas y llenar pilas de colores
		@param tipoSolucion corresponde a la solucion a relizar (0 = pila, 1 = cola)
		return void
		*/
void solucionAutomatica(int tipoSolucion) {

	if (milist1->count > 0) {
		for (int i = 0; i = milist1->count; i++) {
			Node* temp;
			if (tipoSolucion == 0) {
				temp = milist1->ExtractAtEnd();
			}
			else {
				temp = milist1->ExtractAtStart();
			}

				   // Console::WriteLine("tamaño pila1: " + milist1->count);
				   // Console::WriteLine("data extraido: " + temp->value);
			validarColor(temp->value, "1");

		}
	}

	if (milist2->count > 0) {
		for (int i = 0; i = milist2->count; i++) {
			Node* temp;
			if (tipoSolucion == 0) {
				temp = milist2->ExtractAtEnd();
			}
		else {
				temp = milist2->ExtractAtStart();
		}
		validarColor(temp->value, "2");

		}
	}

	if (milist3->count > 0) {
		for (int i = 0; i = milist3->count; i++) {
			Node* temp;
			if (tipoSolucion == 0) {
			temp = milist3->ExtractAtEnd();
			}
			else {
			temp = milist3->ExtractAtStart();
			}
				   // Console::WriteLine("tamaño pila3: " + milist3->count);
				   // Console::WriteLine("data extraido: " + temp->value);
			validarColor(temp->value, "3");
		}
	}
	if (milist4->count > 0) {
		for (int i = 0; i = milist4->count; i++) {
			Node* temp;
			if (tipoSolucion == 0) {
				temp = milist4->ExtractAtEnd();
			}
			else {
				temp = milist4->ExtractAtStart();
			}
			// Console::WriteLine("tamaño pila3: " + milist3->count);
			// Console::WriteLine("data extraido: " + temp->value);
			validarColor(temp->value, "4");
		}
	}
}

void validarColor(int valor, String^ noPila) {

	if (valor == 1) {
		pilaAmarillo->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PY,";
		Pintardatagrid(1, 1, 4);
		return;

	}
	if (valor == 2) {
		pilaVerde->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PG,";
		return;

	}
	if (valor == 3) {
		pilaMorado->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PP,";
		return;
	}
	if (valor == 4) {
		pilaRojo->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PR,";
		return;
	}
	if (valor == 5) {
		pilaNegra->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PB,";
		Pintardatagrid(1, 5, 5);
		return;
	}
	if (valor == 6) {
		pilaAzul->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PZ,";
		return;
	}
	if (valor == 7) {
		pilaBlanco->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PW,";
		Pintardatagrid(1, 7, 6);
		return;
	}
	if (valor == 8) {
		pilaAzulM->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PN,";
		return;
	}

}

private: void ReestablecerColor() {
	dataGridView4->Rows->Clear();
	dataGridView4->Columns->Clear();
	dataGridView4->ColumnHeadersVisible = false;
	dataGridView4->RowHeadersVisible = false;

	dataGridView5->Rows->Clear();
	dataGridView5->Columns->Clear();
	dataGridView5->ColumnHeadersVisible = false;
	dataGridView5->RowHeadersVisible = false;

	dataGridView6->Rows->Clear();
	dataGridView6->Columns->Clear();
	dataGridView6->ColumnHeadersVisible = false;
	dataGridView6->RowHeadersVisible = false;
};

private: void ReestablecerMatriz() {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->ColumnHeadersVisible = false;
	dataGridView1->RowHeadersVisible = false;

	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	dataGridView2->ColumnHeadersVisible = false;
	dataGridView2->RowHeadersVisible = false;

	dataGridView3->Rows->Clear();
	dataGridView3->Columns->Clear();
	dataGridView3->ColumnHeadersVisible = false;
	dataGridView3->RowHeadersVisible = false;

};

void Pintardatagrid(int pColumnas, int pColor, int pNoGrid){
		int numFilas = 0;
		int numColumnas = pColumnas;

		/*ReestablecerMatriz();*/	//Método que borra el contenido de la matriz
		//Se crean las columnas de la matriz

		if (numColumnas > 0) {
			for (int i = 0; i < numColumnas; i++) {
				//Se crea una columna
				DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				nuevacolumna->Width = 20;
				
				if (pColor == 1) {
					nuevacolumna->DefaultCellStyle->BackColor = Color::Yellow;
				}
				else if (pColor == 2) {
					nuevacolumna->DefaultCellStyle->BackColor = Color::Green;
				}
				else if (pColor == 3) {
					nuevacolumna->DefaultCellStyle->BackColor = Color::Purple;
				}
				else if (pColor == 4) {
					nuevacolumna->DefaultCellStyle->BackColor = Color::Red;
				}
				else if (pColor == 5) {
					nuevacolumna->DefaultCellStyle->BackColor = Color::Black;
				}
				else if (pColor == 6) {
					nuevacolumna->DefaultCellStyle->BackColor = Color::Blue;
				}
				else if (pColor == 7) {
					nuevacolumna->DefaultCellStyle->BackColor = Color::White;
				}
				else if (pColor == 8) {
					nuevacolumna->DefaultCellStyle->BackColor = Color::DarkBlue;
				}
				else if (pColor == 9) {
					nuevacolumna->DefaultCellStyle->BackColor = Color::Empty;
				}

				//Se le agrega el tipo de columna que será
		DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
		nuevacolumna->CellTemplate = cellTemplate;

				//Se agrega la columna al Datagrid
				if (pNoGrid == 1) {
					dataGridView1->Columns->Add(nuevacolumna);
				}
				else if (pNoGrid == 2) {
					dataGridView2->Columns->Add(nuevacolumna);
				}
				else if (pNoGrid == 3) {
					dataGridView3->Columns->Add(nuevacolumna);
				}
				else if (pNoGrid == 4) {
				dataGridView4->Columns->Add(nuevacolumna);
				}
				else if (pNoGrid == 5) {
					dataGridView5->Columns->Add(nuevacolumna);
				}
				else if (pNoGrid == 6) {
					dataGridView6->Columns->Add(nuevacolumna);
				}
				
			}
		}

			   //Se agregan las filas a la matriz
			   if (numFilas > 0) {
				   for (int i = 0; i < numFilas; i++) {
					   dataGridView1->Rows->Add();
				   }
			   }
}


private: System::Void btnScola_Click(System::Object^ sender, System::EventArgs^ e) {
	btnSManual->Enabled = false;
	btnSpila->Enabled = false;
	button2->Enabled = true;
	button5->Enabled = false;
	button6->Enabled = false;
	solucionAutomatica(1); // 0 significa que soluciona por pila y 1 por cola
	LlenarListBox();

	/*Console::WriteLine("tamaño pilaAmarillo: " + pilaAmarillo->count);*/
	/*Console::WriteLine("tamaño pilaVerde: " + pilaVerde->count);
	Console::WriteLine("tamaño pilaRojo: " + pilaRojo->count);
	Console::WriteLine("tamaño pilaMorado: " + pilaMorado->count);
	Console::WriteLine("tamaño pilaNegro: " + pilaNegra->count);
	Console::WriteLine("tamaño pilaBlanco: " + pilaBlanco->count);
	Console::WriteLine("tamaño pilaAzul Marino: " + pilaAzulM->count);
	Console::WriteLine("tamaño pilaAzul: " + pilaAzul->count);*/

}
private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
	btnSManual->Enabled = true;
	btnScola->Enabled = true;
	btnSpila->Enabled = true;
	
	Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{
			Boolean pila1 = true;
			Boolean pila2 = true;
			Boolean pila3 = true;
			Boolean pila4 = true;
			Boolean pila5 = true;
			String^ strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ Readfile = File::ReadAllText(strfilename);
			ReestablecerMatriz();
			int i = 0;
			array<String^>^ pila = Readfile->Split(',');
			// MessageBox::Show(Readfile);
			// array<String^>^ mapInicial;
			for each (String ^ temp in pila) {
				int value = 0;

				if (temp == "Y") {
					value = 1;
				}
				else if (temp == "G") {
					value = 2;
				}
				else if (temp == "P") {
					value = 3;
				}
				else if (temp == "R") {
					value = 4;
				}
				else if (temp == "B") {
					value = 5;
				}
				else if (temp == "Z") {
					value = 6;
				}
				else if (temp == "W") {
					value = 7;
				}
				else if (temp == "N") {
					value = 8;
				}
				miList->InsertAtStart(value);

				if (pila1) {
					milist1->InsertAtStart(value);
					Pintardatagrid(1, value, 1);
				}
				else if (pila2) {
					milist2->InsertAtStart(value);
					Pintardatagrid(1, value, 2);
				}
				else if (pila3) {
					milist3->InsertAtStart(value);
					Pintardatagrid(1, value, 3);
				}

				/*else if (pila4) {
					milist4->InsertAtStart(value);
				}
				else if (pila5) {
					milist5->InsertAtStart(value);

				}*/

				Console::WriteLine(temp);
				if (temp == "X") {
					if (pila1) {
						pila1 = false;
					}

					else if (pila2) {
						pila2 = false;
					}

					else if (pila3) {
						pila3 = false;
					}

					else if (pila4) {
						pila4 = false;

					}

					else if (pila5) {
						pila5 = false;
						break;
					}
					i += 1;
					Console::WriteLine("Recortar fila");
				}
			}

			Console::WriteLine("cantidad de filas: " + i);
			Console::WriteLine("tamaño mapa: " + miList->count);
			Console::WriteLine("tamaño pila1: " + milist1->count);
			Console::WriteLine("tamaño pila2: " + milist2->count);
			Console::WriteLine("tamaño pila3: " + milist3->count);
			Console::WriteLine("tamaño pila4: " + milist4->count);
			Console::WriteLine("tamaño pila5: " + milist5->count);

		}
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*sfdExportar->Filter = "Archivos separados por coma (csv) | *.csv";
	File::WriteAllText(reporte);*/
}
private: System::Void btnSManual_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	btnScola->Enabled = false;
	btnSpila->Enabled = false;
	dataGridView4->Hide();
	dataGridView5->Hide();
	dataGridView6->Hide();
	label6->Hide();
	label7->Hide();
	label8->Hide();
	label9->Hide();
	btnScola->Hide();
	btnSpila->Hide();
}
	   /*void desordenar() {

}*/
	void solucionManual(int pilaExtraer, int pilaAgregar, int formaExtraer) {
		
		if (milist1->count > 0) {
			
			if (pilaExtraer == 0 && pilaAgregar == 0) {
				Node* temp;
				if (formaExtraer == 0) {
					/*temp = milist1->ExtractAtEnd();
					Pintardatagrid(1,temp->value, 1);
					milist1->InsertAtEnd(temp->value);
					Pintardatagrid(1, temp->value, 1);*/
				}
				else {
					
					temp= milist1->ExtractAtEnd();
					dataGridView1->Columns->Clear();
						
					milist1->InsertAtStart(temp->value);
					dataGridView1->Columns->Clear();
					Pintardatagrid(1, temp->value, 1);
				}
				return;
			}
			if (pilaExtraer == 0 && pilaAgregar == 1) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist1->ExtractAtStart();
					milist2->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 2);
				}
				else {
					temp = milist1->ExtractAtEnd();
					/*Pintardatagrid(1, temp->value, 1);*/
					milist2->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 2);
				}
				return;
			}
			if (pilaExtraer == 0 && pilaAgregar == 2) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist1->ExtractAtStart();
					milist3->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 3);
				}
				else {
					temp = milist1->ExtractAtEnd();
					milist3->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 3);
				}
				return;
			}

		}
		if (milist2->count > 0) {

			if (pilaExtraer == 1 && pilaAgregar == 0) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist2->ExtractAtStart();
					milist1->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 1);
				}
				else {
					temp = milist2->ExtractAtEnd();
					milist1->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 1);
				}
				return;
			}
			if (pilaExtraer == 1 && pilaAgregar == 1) {
				Node* temp;
				if (formaExtraer == 0) {
					/*temp = milist2->ExtractAtEnd();
					milist2->InsertAtEnd(temp->value);*/
				}
				else {
					temp = milist2->ExtractAtEnd();
					milist2->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 2);
				}
				return;
			}
			if (pilaExtraer == 1 && pilaAgregar == 2) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist2->ExtractAtStart();
					milist3->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 3);
				}
				else {
					temp = milist2->ExtractAtEnd();
					milist3->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 3);
				}
				return;
			}

		}
		if (milist3->count > 0) {

			if (pilaExtraer == 2 && pilaAgregar == 0) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist3->ExtractAtStart();
					milist1->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 1);
				}
				else {
					temp = milist3->ExtractAtEnd();
					milist1->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 1);
				}
				return;
			}
			if (pilaExtraer == 2 && pilaAgregar == 1) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist3->ExtractAtStart();
					milist2->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value,2);
				}
				else {
					temp = milist3->ExtractAtEnd();
					milist2->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 2);
				}
				return;
			}
			if (pilaExtraer == 2 && pilaAgregar == 2) {
				Node* temp;
				if (formaExtraer == 0) {
					/*temp = milist3->ExtractAtEnd();
					milist3->InsertAtEnd(temp->value);*/
				}
				else {
					temp = milist3->ExtractAtEnd();
					milist3->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 3);
				}
				return;
			}

		}
		
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int p0 = 0;
		int p1 = 0;
	
	try {
		 p0 = Convert::ToInt32(textBox1->Text);
		 p1 = Convert::ToInt32(textBox2->Text);
		 
		 if (p0 == 0) {
			 solucionManual(p0, p1, 1);
		 }
		 else if (p0 == 1) {
			 solucionManual(p0, p1, 1);
		 }
		 else if (p0 == 2) {
			 solucionManual(p0, p1, 1);
		 }
	}
	catch (Exception^ e) {
		MessageBox::Show("Error detectado: " + e->Message, "Valores incorrectos", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int p0 = 0;
	int p1 = 0;

	try {
		p0 = Convert::ToInt32(textBox1->Text);
		p1 = Convert::ToInt32(textBox2->Text);

		if (p0 == 0) {
			solucionManual(p0, p1, 0);
		}
		else if (p0 == 1) {
			solucionManual(p0, p1, 0);
		}
		else if (p0 == 2) {
			solucionManual(p0, p1, 0);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error detectado: " + e->Message, "Valores incorrectos", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}

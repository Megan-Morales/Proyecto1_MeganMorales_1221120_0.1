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
	public: List* milist6;
	public: List* milist7;
	public: List* milist8;
		  /*Pilas para manejo de colores*/
	public: List* pilaNegra;
	public: List* pilaAzul;
	public: List* pilaBlanco;
	public: List* pilaAmarillo;
	public: List* pilaVerde;
	public: List* pilaRojo;
	public: List* pilaMorado;
	public: List* pilaAzulM;
	private: System::Windows::Forms::DataGridView^ dataGridView7;
	public:
	private: System::Windows::Forms::DataGridView^ dataGridView8;
	private: System::Windows::Forms::DataGridView^ dataGridView9;
	private: System::Windows::Forms::DataGridView^ dataGridView10;
	private: System::Windows::Forms::DataGridView^ dataGridView11;
	private: System::Windows::Forms::DataGridView^ dataGridView12;
	private: System::Windows::Forms::DataGridView^ dataGridView13;
	private: System::Windows::Forms::DataGridView^ dataGridView14;
	private: System::Windows::Forms::DataGridView^ dataGridView15;
	private: System::Windows::Forms::DataGridView^ dataGridView16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
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

			milist6 = new List();
			milist6->count = 0;
			milist6->start = nullptr;
			milist6->end = nullptr;

			milist7 = new List();
			milist7->count = 0;
			milist7->start = nullptr;
			milist7->end = nullptr;

			milist8 = new List();
			milist8->count = 0;
			milist8->start = nullptr;
			milist8->end = nullptr;
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
	System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
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
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView9 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView10 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView11 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView12 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView13 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView14 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView15 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView16 = (gcnew System::Windows::Forms::DataGridView());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView16))->BeginInit();
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
			this->btnSManual->Location = System::Drawing::Point(505, 201);
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
			this->btnSpila->Location = System::Drawing::Point(505, 591);
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
			this->btnScola->Location = System::Drawing::Point(505, 537);
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
			this->dataGridView1->Location = System::Drawing::Point(37, 186);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(256, 25);
			this->dataGridView1->TabIndex = 5;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(37, 208);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(256, 23);
			this->dataGridView2->TabIndex = 6;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(37, 230);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(256, 26);
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
			this->dataGridView4->Location = System::Drawing::Point(36, 489);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->Size = System::Drawing::Size(256, 25);
			this->dataGridView4->TabIndex = 9;
			// 
			// dataGridView5
			// 
			this->dataGridView5->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(36, 513);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->Size = System::Drawing::Size(256, 23);
			this->dataGridView5->TabIndex = 10;
			// 
			// dataGridView6
			// 
			this->dataGridView6->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(36, 535);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->Size = System::Drawing::Size(256, 27);
			this->dataGridView6->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 186);
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
			this->label4->Location = System::Drawing::Point(11, 211);
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
			this->label5->Location = System::Drawing::Point(11, 236);
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
			this->label6->Location = System::Drawing::Point(7, 490);
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
			this->label7->Location = System::Drawing::Point(7, 513);
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
			this->label8->Location = System::Drawing::Point(7, 538);
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
			this->label9->Location = System::Drawing::Point(120, 457);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"MAPA FINAL";
			// 
			// lstLista
			// 
			this->lstLista->FormattingEnabled = true;
			this->lstLista->Location = System::Drawing::Point(741, 236);
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
			this->button2->Location = System::Drawing::Point(767, 558);
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
			this->label10->Location = System::Drawing::Point(764, 208);
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
			this->button5->Location = System::Drawing::Point(602, 256);
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
			this->button6->Location = System::Drawing::Point(602, 282);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(46, 25);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Cola";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(427, 286);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(19, 20);
			this->textBox1->TabIndex = 24;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(538, 287);
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
			this->label11->Location = System::Drawing::Point(444, 259);
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
			this->label12->Location = System::Drawing::Point(405, 287);
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
			this->label13->Location = System::Drawing::Point(472, 288);
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
			this->label14->Location = System::Drawing::Point(516, 287);
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
			this->button7->Location = System::Drawing::Point(791, 8);
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
			this->button8->Location = System::Drawing::Point(791, 52);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(78, 39);
			this->button8->TabIndex = 31;
			this->button8->Text = L"SALIR";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// dataGridView7
			// 
			this->dataGridView7->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Location = System::Drawing::Point(37, 255);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->RowHeadersWidth = 51;
			this->dataGridView7->Size = System::Drawing::Size(256, 22);
			this->dataGridView7->TabIndex = 32;
			// 
			// dataGridView8
			// 
			this->dataGridView8->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Location = System::Drawing::Point(37, 274);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->RowHeadersWidth = 51;
			this->dataGridView8->Size = System::Drawing::Size(256, 22);
			this->dataGridView8->TabIndex = 33;
			// 
			// dataGridView9
			// 
			this->dataGridView9->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView9->Location = System::Drawing::Point(37, 293);
			this->dataGridView9->Name = L"dataGridView9";
			this->dataGridView9->RowHeadersWidth = 51;
			this->dataGridView9->Size = System::Drawing::Size(256, 22);
			this->dataGridView9->TabIndex = 34;
			// 
			// dataGridView10
			// 
			this->dataGridView10->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView10->Location = System::Drawing::Point(37, 312);
			this->dataGridView10->Name = L"dataGridView10";
			this->dataGridView10->RowHeadersWidth = 51;
			this->dataGridView10->Size = System::Drawing::Size(256, 22);
			this->dataGridView10->TabIndex = 36;
			// 
			// dataGridView11
			// 
			this->dataGridView11->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView11->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView11->Location = System::Drawing::Point(37, 331);
			this->dataGridView11->Name = L"dataGridView11";
			this->dataGridView11->RowHeadersWidth = 51;
			this->dataGridView11->Size = System::Drawing::Size(256, 22);
			this->dataGridView11->TabIndex = 35;
			// 
			// dataGridView12
			// 
			this->dataGridView12->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView12->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView12->Location = System::Drawing::Point(36, 559);
			this->dataGridView12->Name = L"dataGridView12";
			this->dataGridView12->RowHeadersWidth = 51;
			this->dataGridView12->Size = System::Drawing::Size(256, 25);
			this->dataGridView12->TabIndex = 37;
			// 
			// dataGridView13
			// 
			this->dataGridView13->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView13->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView13->Location = System::Drawing::Point(36, 580);
			this->dataGridView13->Name = L"dataGridView13";
			this->dataGridView13->RowHeadersWidth = 51;
			this->dataGridView13->Size = System::Drawing::Size(256, 25);
			this->dataGridView13->TabIndex = 38;
			// 
			// dataGridView14
			// 
			this->dataGridView14->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView14->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView14->Location = System::Drawing::Point(36, 600);
			this->dataGridView14->Name = L"dataGridView14";
			this->dataGridView14->RowHeadersWidth = 51;
			this->dataGridView14->Size = System::Drawing::Size(256, 25);
			this->dataGridView14->TabIndex = 39;
			// 
			// dataGridView15
			// 
			this->dataGridView15->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView15->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView15->Location = System::Drawing::Point(36, 622);
			this->dataGridView15->Name = L"dataGridView15";
			this->dataGridView15->RowHeadersWidth = 51;
			this->dataGridView15->Size = System::Drawing::Size(256, 25);
			this->dataGridView15->TabIndex = 40;
			// 
			// dataGridView16
			// 
			this->dataGridView16->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView16->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView16->Location = System::Drawing::Point(36, 643);
			this->dataGridView16->Name = L"dataGridView16";
			this->dataGridView16->RowHeadersWidth = 51;
			this->dataGridView16->Size = System::Drawing::Size(256, 25);
			this->dataGridView16->TabIndex = 41;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(11, 293);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(24, 16);
			this->label15->TabIndex = 44;
			this->label15->Text = L"P5";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(11, 277);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 16);
			this->label16->TabIndex = 43;
			this->label16->Text = L"P4";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(11, 255);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(24, 16);
			this->label17->TabIndex = 42;
			this->label17->Text = L"P3";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(7, 568);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 16);
			this->label18->TabIndex = 47;
			this->label18->Text = L"P3";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(11, 337);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(24, 16);
			this->label19->TabIndex = 46;
			this->label19->Text = L"P7";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(11, 318);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(24, 16);
			this->label20->TabIndex = 45;
			this->label20->Text = L"P6";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(7, 652);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(24, 16);
			this->label21->TabIndex = 51;
			this->label21->Text = L"P7";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(7, 631);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(24, 16);
			this->label22->TabIndex = 50;
			this->label22->Text = L"P6";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(7, 608);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(24, 16);
			this->label23->TabIndex = 49;
			this->label23->Text = L"P5";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(7, 589);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(24, 16);
			this->label24->TabIndex = 48;
			this->label24->Text = L"P4";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(881, 722);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->dataGridView16);
			this->Controls->Add(this->dataGridView15);
			this->Controls->Add(this->dataGridView14);
			this->Controls->Add(this->dataGridView13);
			this->Controls->Add(this->dataGridView12);
			this->Controls->Add(this->dataGridView10);
			this->Controls->Add(this->dataGridView11);
			this->Controls->Add(this->dataGridView9);
			this->Controls->Add(this->dataGridView8);
			this->Controls->Add(this->dataGridView7);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView16))->EndInit();
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
		// 0 significa que solucionar por pila y 1 por cola
		solucionAutomatica(0); 
		LlenarListBox(0);

	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnScola_Click(System::Object^ sender, System::EventArgs^ e) {
	btnSManual->Enabled = false;
	btnSpila->Enabled = false;
	button2->Enabled = true;
	button5->Enabled = false;
	button6->Enabled = false;
	solucionAutomatica(1); // 0 significa que soluciona por pila y 1 por cola
	LlenarListBox(0);
}
private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
	btnSManual->Enabled = true;
	btnScola->Enabled = true;
	btnSpila->Enabled = true;
	ReestablecerColor();
	ReestablecerMatriz();
	dataGridView3->Show();
	dataGridView7->Show();
	dataGridView8->Show();
	dataGridView9->Show();
	dataGridView10->Show();
	dataGridView11->Show();
	dataGridView4->Show();
	dataGridView5->Show();
	dataGridView6->Show();
	dataGridView12->Show();
	dataGridView13->Show();
	dataGridView14->Show();
	dataGridView15->Show();
	dataGridView16->Show();
	label6->Show();
	label7->Show();
	label8->Show();
	label9->Show();
	label18->Show();
	label23->Show();
	label24->Show();
	label22->Show();
	label21->Show();
	btnScola->Show();
	btnSpila->Show();
	//Carga el archivo
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
			Boolean pila6 = true;
			Boolean pila7 = true;
			Boolean pila8 = true;
			String^ strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ Readfile = File::ReadAllText(strfilename);
			ReestablecerMatriz();
			int i = 0;
			array<String^>^ pila = Readfile->Split(',');
	
			//Asignar valor al color
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
				//Pintar el mapa inicial en el datagridview
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
				else if (pila4) {
					milist4->InsertAtStart(value);
					Pintardatagrid(1, value, 7);
				}
				else if (pila5) {
					milist5->InsertAtStart(value);
					Pintardatagrid(1, value, 8);
				}
				else if (pila6) {
					milist6->InsertAtStart(value);
					Pintardatagrid(1, value, 9);

				}
				else if (pila7) {
					milist7->InsertAtStart(value);
					Pintardatagrid(1, value, 10);
				}
				else if (pila8) {
					milist8->InsertAtStart(value);
					Pintardatagrid(1, value, 11);
				}
				//Cortar cada vez que llegue una x e ir llenando
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
					}
					else if (pila6) {
						pila6 = false;
					}
					else if (pila7) {
						pila7 = false;
					}
					else if (pila8) {
						pila8 = false;
						break;
					}
					i += 1;
				}
			}
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
		//Boton para guardar el reporte
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
	dataGridView12->Hide();
	dataGridView13->Hide();
	dataGridView14->Hide();
	dataGridView15->Hide();
	dataGridView16->Hide();
	label6->Hide();
	label7->Hide();
	label8->Hide();
	label9->Hide();
	label18->Hide();
	label23->Hide();
	label24->Hide();
	label22->Hide();
	label21->Hide();
	btnScola->Hide();
	btnSpila->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int p0 = 0;
		int p1 = 0;
		//Solución manual
		//Convertir el texto de cada textbox
		//Boton de cola
		//0 es pila y 1 es por cola
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
		 else if (p0 == 3) {
			 solucionManual(p0, p1, 1);
		 }
		 else if (p0 == 4) {
			 solucionManual(p0, p1, 1);
		 }
		 else if (p0 == 5) {
			 solucionManual(p0, p1, 1);
		 }
		 else if (p0 == 6) {
			 solucionManual(p0, p1, 1);
		 }
		 else if (p0 == 7) {
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
		//Solución manual
		//Convertir el texto de cada textbox
		//Boton de pila
		//0 es pila y 1 es por cola

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
		else if (p0 == 3) {
			solucionManual(p0, p1, 0);
		}
		else if (p0 == 4) {
			solucionManual(p0, p1, 0);
		}
		else if (p0 == 5) {
			solucionManual(p0, p1, 0);
		}
		else if (p0 == 6) {
			solucionManual(p0, p1, 0);
		}
		else if (p0 == 7) {
			solucionManual(p0, p1, 0);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error detectado: " + e->Message, "Valores incorrectos", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
void LlenarListBox(int g) {

		/* Método mostrar pasos en ListBox
		*/
	array<String^>^ pila = reporte->Split(',');
	if (g == 0) {
		for each (String ^ temp in pila) {
			lstLista->Items->Add(temp);
		}
	}
}
void solucionManual(int pilaExtraer, int pilaAgregar, int formaExtraer) {
	//Método de la solución manual, recibe tres parametros, uno del trexbox 1 y el siguiente del textbox 2
	//La forma de extraer es 0 por pila y 1 es por cola
	
	if (milist1->count > 0) {
		if (pilaExtraer == 0 && pilaAgregar == 0) {
			Node* temp;
			if (formaExtraer == 0) {
			}
			else {
				temp = milist1->ExtractAtEnd();
				milist1->InsertAtStart(temp->value);
				repintar(1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar +"| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 0 && pilaAgregar == 1) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist1->ExtractAtStart();
				repintar(1);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist1->ExtractAtEnd();
				repintar(1);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (milist3->count > 0) {
			if (pilaExtraer == 0 && pilaAgregar == 2) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist1->ExtractAtStart();
					repintar(1);
					milist3->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 3);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
					LlenarListBox(0);
				}
				else {
					temp = milist1->ExtractAtEnd();
					repintar(1);
					milist3->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 3);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
					LlenarListBox(0);
				}
				return;
			}
		}
		else {
			dataGridView3->Hide();
		}
		if (milist4->count > 0) {
			if (pilaExtraer == 0 && pilaAgregar == 3) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist1->ExtractAtStart();
					repintar(1);
					milist4->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 7);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
					LlenarListBox(0);
				}
				else {
					temp = milist1->ExtractAtEnd();
					repintar(1);
					milist4->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 7);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
					LlenarListBox(0);
				}
				return;
			}
		}
		else {
			dataGridView7->Hide();
		}
		if (milist5->count > 0) {
			if (pilaExtraer == 0 && pilaAgregar == 4) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist1->ExtractAtStart();
					repintar(1);
					milist5->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 8);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
					LlenarListBox(0);
				}
				else {
					temp = milist1->ExtractAtEnd();
					repintar(1);
					milist5->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 8);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
					LlenarListBox(0);
				}
				return;
			}
		}
		else {
			dataGridView8->Hide();
		}
		if (milist6->count > 0) {
			if (pilaExtraer == 0 && pilaAgregar == 5) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist1->ExtractAtStart();
					repintar(1);
					milist6->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 9);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
					LlenarListBox(0);
				}
				else {
					temp = milist1->ExtractAtEnd();
					repintar(1);
					milist6->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 9);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
					LlenarListBox(0);
				}
				return;
			}
		}
		else {
			dataGridView9->Hide();
		}
		if (milist7->count > 0) {
			if (pilaExtraer == 0 && pilaAgregar == 6) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist1->ExtractAtStart();
					repintar(1);
					milist7->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 10);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
					LlenarListBox(0);
				}
				else {
					temp = milist1->ExtractAtEnd();
					repintar(1);
					milist7->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 10);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
					LlenarListBox(0);
				}
				return;
			}
		}
		else {
			dataGridView10->Hide();
		}
		if (milist8->count > 0) {
			if (pilaExtraer == 0 && pilaAgregar == 7) {
				Node* temp;
				if (formaExtraer == 0) {
					temp = milist1->ExtractAtStart();
					repintar(1);
					milist8->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 11);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
					LlenarListBox(0);
				}
				else {
					temp = milist1->ExtractAtEnd();
					repintar(1);
					milist8->InsertAtStart(temp->value);
					Pintardatagrid(1, temp->value, 11);
					reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
					LlenarListBox(0);
				}
				return;
			}
		}
		else {
			dataGridView11->Hide();
		}
	}
	if (milist2->count > 0) {

		if (pilaExtraer == 1 && pilaAgregar == 0) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist2->ExtractAtStart();
				repintar(2);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist2->ExtractAtEnd();
				repintar(2);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 1 && pilaAgregar == 1) {
			Node* temp;
			if (formaExtraer == 0) {
			}
			else {
				temp = milist2->ExtractAtEnd();
				milist2->InsertAtStart(temp->value);
				repintar(2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 1 && pilaAgregar == 2) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist2->ExtractAtStart();
				repintar(2);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist2->ExtractAtEnd();
				repintar(2);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 1 && pilaAgregar == 3) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist2->ExtractAtStart();
				repintar(2);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist2->ExtractAtEnd();
				repintar(2);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 1 && pilaAgregar == 4) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist2->ExtractAtStart();
				repintar(2);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist2->ExtractAtEnd();
				repintar(2);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 1 && pilaAgregar == 5) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist2->ExtractAtStart();
				repintar(2);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist2->ExtractAtEnd();
				repintar(2);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 1 && pilaAgregar == 6) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist2->ExtractAtStart();
				repintar(2);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist2->ExtractAtEnd();
				repintar(2);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 1 && pilaAgregar == 7) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist2->ExtractAtStart();
				repintar(2);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist2->ExtractAtEnd();
				repintar(2);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
	}
	if (milist3->count > 0) {

		if (pilaExtraer == 2 && pilaAgregar == 0) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist3->ExtractAtStart();
				repintar(3);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist3->ExtractAtEnd();
				repintar(3);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 2 && pilaAgregar == 1) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist3->ExtractAtStart();
				repintar(3);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist3->ExtractAtEnd();
				repintar(3);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 2 && pilaAgregar == 2) {
			Node* temp;
			if (formaExtraer == 0) {
			}
			else {
				temp = milist3->ExtractAtEnd();
				milist3->InsertAtStart(temp->value);
				repintar(3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 2 && pilaAgregar == 3) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist3->ExtractAtStart();
				repintar(3);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist3->ExtractAtEnd();
				repintar(3);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 2 && pilaAgregar == 4) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist3->ExtractAtStart();
				repintar(3);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist3->ExtractAtEnd();
				repintar(3);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 2 && pilaAgregar == 5) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist3->ExtractAtStart();
				repintar(3);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist3->ExtractAtEnd();
				repintar(3);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 2 && pilaAgregar == 6) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist3->ExtractAtStart();
				repintar(3);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist3->ExtractAtEnd();
				repintar(3);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 2 && pilaAgregar == 7) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist3->ExtractAtStart();
				repintar(3);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist3->ExtractAtEnd();
				repintar(3);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
	}	
	if (milist4->count > 0) {

		if (pilaExtraer == 3 && pilaAgregar == 0) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist4->ExtractAtStart();
				repintar(4);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist4->ExtractAtEnd();
				repintar(4);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 3 && pilaAgregar == 1) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist4->ExtractAtStart();
				repintar(4);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist4->ExtractAtEnd();
				repintar(4);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 3 && pilaAgregar == 2) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist4->ExtractAtStart();
				repintar(4);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist4->ExtractAtEnd();
				repintar(4);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 3 && pilaAgregar == 3) {
			Node* temp;
			if (formaExtraer == 0) {
			}
			else {
				temp = milist4->ExtractAtEnd();
				milist4->InsertAtStart(temp->value);
				repintar(4);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 3 && pilaAgregar == 4) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist4->ExtractAtStart();
				repintar(4);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist4->ExtractAtEnd();
				repintar(4);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 3 && pilaAgregar == 5) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist4->ExtractAtStart();
				repintar(4);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist4->ExtractAtEnd();
				repintar(4);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 3 && pilaAgregar == 6) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist4->ExtractAtStart();
				repintar(4);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist4->ExtractAtEnd();
				repintar(4);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 3 && pilaAgregar == 7) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist4->ExtractAtStart();
				repintar(4);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist4->ExtractAtEnd();
				repintar(4);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
	}
	if (milist5->count > 0) {

		if (pilaExtraer == 4 && pilaAgregar == 0) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist5->ExtractAtStart();
				repintar(5);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist5->ExtractAtEnd();
				repintar(5);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 4 && pilaAgregar == 1) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist5->ExtractAtStart();
				repintar(5);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist5->ExtractAtEnd();
				repintar(5);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 4 && pilaAgregar == 2) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist5->ExtractAtStart();
				repintar(5);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist5->ExtractAtEnd();
				repintar(5);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 4 && pilaAgregar == 3) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist5->ExtractAtStart();
				repintar(5);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist5->ExtractAtEnd();
				repintar(5);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 4 && pilaAgregar == 4) {
			Node* temp;
			if (formaExtraer == 0) {
			}
			else {
				temp = milist5->ExtractAtEnd();
				milist5->InsertAtStart(temp->value);
				repintar(5);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 4 && pilaAgregar == 5) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist5->ExtractAtStart();
				repintar(5);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist5->ExtractAtEnd();
				repintar(5);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 4 && pilaAgregar == 6) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist5->ExtractAtStart();
				repintar(5);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist5->ExtractAtEnd();
				repintar(5);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 4 && pilaAgregar == 7) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist5->ExtractAtStart();
				repintar(5);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist5->ExtractAtEnd();
				repintar(5);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
	}
	if (milist6->count > 0) {

		if (pilaExtraer == 5 && pilaAgregar == 0) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist6->ExtractAtStart();
				repintar(6);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist6->ExtractAtEnd();
				repintar(6);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 5 && pilaAgregar == 1) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist6->ExtractAtStart();
				repintar(6);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist6->ExtractAtEnd();
				repintar(6);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 5 && pilaAgregar == 2) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist6->ExtractAtStart();
				repintar(6);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist6->ExtractAtEnd();
				repintar(6);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 5 && pilaAgregar == 3) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist6->ExtractAtStart();
				repintar(6);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist6->ExtractAtEnd();
				repintar(6);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 5 && pilaAgregar == 4) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist6->ExtractAtStart();
				repintar(6);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist6->ExtractAtEnd();
				repintar(6);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 5 && pilaAgregar == 5) {
			Node* temp;
			if (formaExtraer == 0) {
			}
			else {
				temp = milist6->ExtractAtEnd();
				milist6->InsertAtStart(temp->value);
				repintar(6);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 5 && pilaAgregar == 6) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist6->ExtractAtStart();
				repintar(6);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist6->ExtractAtEnd();
				repintar(6);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 5 && pilaAgregar == 7) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist6->ExtractAtStart();
				repintar(6);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist6->ExtractAtEnd();
				repintar(6);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
	}
	if (milist7->count > 0) {

		if (pilaExtraer == 6 && pilaAgregar == 0) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist7->ExtractAtStart();
				repintar(7);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist7->ExtractAtEnd();
				repintar(7);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 6 && pilaAgregar == 1) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist7->ExtractAtStart();
				repintar(7);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist7->ExtractAtEnd();
				repintar(7);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 6 && pilaAgregar == 2) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist7->ExtractAtStart();
				repintar(7);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist7->ExtractAtEnd();
				repintar(7);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 6 && pilaAgregar == 3) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist7->ExtractAtStart();
				repintar(7);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist7->ExtractAtEnd();
				repintar(7);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 6 && pilaAgregar == 4) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist7->ExtractAtStart();
				repintar(7);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist7->ExtractAtEnd();
				repintar(7);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 6 && pilaAgregar == 5) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist7->ExtractAtStart();
				repintar(7);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);

			}
			else {
				temp = milist7->ExtractAtEnd();
				repintar(7);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 6 && pilaAgregar == 6) {
			Node* temp;
			if (formaExtraer == 0) {
			}
			else {
				temp = milist7->ExtractAtEnd();
				milist7->InsertAtStart(temp->value);
				repintar(7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 6 && pilaAgregar == 7) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist7->ExtractAtStart();
				repintar(7);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist7->ExtractAtEnd();
				repintar(7);
				milist8->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 11);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
	}
	if (milist8->count > 0) {

		if (pilaExtraer == 7 && pilaAgregar == 0) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist8->ExtractAtStart();
				repintar(8);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist8->ExtractAtEnd();
				repintar(8);
				milist1->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 1);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 7 && pilaAgregar == 1) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist8->ExtractAtStart();
				repintar(8);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist8->ExtractAtEnd();
				repintar(8);
				milist2->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 2);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 7 && pilaAgregar == 2) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist8->ExtractAtStart();
				repintar(8);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist8->ExtractAtEnd();
				repintar(8);
				milist3->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 3);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 7 && pilaAgregar == 3) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist8->ExtractAtEnd();
				repintar(8);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist8->ExtractAtEnd();
				repintar(8);
				milist4->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 7);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 7 && pilaAgregar == 4) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist8->ExtractAtEnd();
				repintar(8);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist8->ExtractAtEnd();
				repintar(8);
				milist5->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 7 && pilaAgregar == 5) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist8->ExtractAtStart();
				repintar(8);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist8->ExtractAtEnd();
				repintar(8);
				milist6->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 9);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 7 && pilaAgregar == 6) {
			Node* temp;
			if (formaExtraer == 0) {
				temp = milist8->ExtractAtStart();
				repintar(8);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo pila";
				LlenarListBox(0);
			}
			else {
				temp = milist8->ExtractAtEnd();
				repintar(8);
				milist7->InsertAtStart(temp->value);
				Pintardatagrid(1, temp->value, 10);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "| Modo cola";
				LlenarListBox(0);
			}
			return;
		}
		if (pilaExtraer == 7 && pilaAgregar == 7) {
			Node* temp;
			if (formaExtraer == 0) {
			}
			else {
				temp = milist8->ExtractAtEnd();
				milist8->InsertAtStart(temp->value);
				repintar(8);
				reporte = "P" + pilaExtraer + "-P" + pilaAgregar + "Modo cola";
				LlenarListBox(0);
			}
			return;
		}
	}
}
void solucionAutomatica(int tipoSolucion) {
	//Método de solución automática
	if (milist1->count > 0) {
		for (int i = 0; i = milist1->count; i++) {
			Node* temp;
			if (tipoSolucion == 0) {
				temp = milist1->ExtractAtEnd();
			}
			else {
				temp = milist1->ExtractAtStart();
			}
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
			validarColor(temp->value, "4");
		}
	}
	if (milist5->count > 0) {
		for (int i = 0; i = milist5->count; i++) {
			Node* temp;
			if (tipoSolucion == 0) {
				temp = milist5->ExtractAtEnd();
			}
			else {
				temp = milist5->ExtractAtStart();
			}
			validarColor(temp->value, "5");
		}
	}
	if (milist6->count > 0) {
		for (int i = 0; i = milist6->count; i++) {
			Node* temp;
			if (tipoSolucion == 0) {
				temp = milist6->ExtractAtEnd();
			}
			else {
				temp = milist6->ExtractAtStart();
			}
			validarColor(temp->value, "6");
		}
	}
	if (milist7->count > 0) {
		for (int i = 0; i = milist7->count; i++) {
			Node* temp;
			if (tipoSolucion == 0) {
				temp = milist7->ExtractAtEnd();
			}
			else {
				temp = milist7->ExtractAtStart();
			}
			validarColor(temp->value, "7");
		}
	}
	if (milist8->count > 0) {
		for (int i = 0; i = milist8->count; i++) {
			Node* temp;
			if (tipoSolucion == 0) {
				temp = milist8->ExtractAtEnd();
			}
			else {
				temp = milist8->ExtractAtStart();
			}
			validarColor(temp->value, "8");
		}
	}
}
void validarColor(int valor, String^ noPila) {
	//Valida el color y pinta en el datagridview
	if (valor == 1) {
		pilaAmarillo->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PY,";
		Pintardatagrid(1, 1, 4);
		return;

	}
	if (valor == 2) {
		pilaVerde->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PG,";
		Pintardatagrid(1, 2, 12);
		return;
	}
	if (valor == 3) {
		pilaMorado->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PP,";
		Pintardatagrid(1, 3, 13);
		return;
	}
	if (valor == 4) {
		pilaRojo->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PR,";
		Pintardatagrid(1, 4, 14);
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
		Pintardatagrid(1, 6, 15);
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
		Pintardatagrid(1, 8, 16);
		return;
	}

}
private: void ReestablecerColor() {
	//Limpia los datadriwview
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

	dataGridView12->Rows->Clear();
	dataGridView12->Columns->Clear();
	dataGridView12->ColumnHeadersVisible = false;
	dataGridView12->RowHeadersVisible = false;

	dataGridView13->Rows->Clear();
	dataGridView13->Columns->Clear();
	dataGridView13->ColumnHeadersVisible = false;
	dataGridView13->RowHeadersVisible = false;

	dataGridView14->Rows->Clear();
	dataGridView14->Columns->Clear();
	dataGridView14->ColumnHeadersVisible = false;
	dataGridView14->RowHeadersVisible = false;

	dataGridView15->Rows->Clear();
	dataGridView15->Columns->Clear();
	dataGridView15->ColumnHeadersVisible = false;
	dataGridView15->RowHeadersVisible = false;

	dataGridView16->Rows->Clear();
	dataGridView16->Columns->Clear();
	dataGridView16->ColumnHeadersVisible = false;
	dataGridView16->RowHeadersVisible = false;
};
private: void ReestablecerMatriz() {
	//Limpia los datadridview
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

	dataGridView7->Rows->Clear();
	dataGridView7->Columns->Clear();
	dataGridView7->ColumnHeadersVisible = false;
	dataGridView7->RowHeadersVisible = false;

	dataGridView8->Rows->Clear();
	dataGridView8->Columns->Clear();
	dataGridView8->ColumnHeadersVisible = false;
	dataGridView8->RowHeadersVisible = false;

	dataGridView9->Rows->Clear();
	dataGridView9->Columns->Clear();
	dataGridView9->ColumnHeadersVisible = false;
	dataGridView9->RowHeadersVisible = false;

	dataGridView10->Rows->Clear();
	dataGridView10->Columns->Clear();
	dataGridView10->ColumnHeadersVisible = false;
	dataGridView10->RowHeadersVisible = false;

	dataGridView11->Rows->Clear();
	dataGridView11->Columns->Clear();
	dataGridView11->ColumnHeadersVisible = false;
	dataGridView11->RowHeadersVisible = false;
};
void Pintardatagrid(int pColumnas, int pColor, int pNoGrid) {
	int numFilas = 0;
	int numColumnas = pColumnas;

		   //Se crean las columnas de la matriz

		   if (numColumnas > 0) {
			   for (int i = 0; i < numColumnas; i++) {
				   //Se crea una columna
				   //Define el color
				   DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				   nuevacolumna->Width = 20;

				   if (pColor == 1) {
					   nuevacolumna->DefaultCellStyle->BackColor = Color::Yellow;
				   }
				   else if (pColor == 2) {
					   nuevacolumna->DefaultCellStyle->BackColor = Color::GreenYellow;
				   }
				   else if (pColor == 3) {
					   nuevacolumna->DefaultCellStyle->BackColor = Color::MediumPurple;
				   }
				   else if (pColor == 4) {
					   nuevacolumna->DefaultCellStyle->BackColor = Color::OrangeRed;
				   }
				   else if (pColor == 5) {
					   nuevacolumna->DefaultCellStyle->BackColor = Color::Black;
				   }
				   else if (pColor == 6) {
					   nuevacolumna->DefaultCellStyle->BackColor = Color::SkyBlue;
				   }
				   else if (pColor == 7) {
					   nuevacolumna->DefaultCellStyle->BackColor = Color::White;
				   }
				   else if (pColor == 8) {
					   nuevacolumna->DefaultCellStyle->BackColor = Color::DarkBlue;
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
				   else if (pNoGrid == 7) {
					   dataGridView7->Columns->Add(nuevacolumna);
				   }
				   else if (pNoGrid == 8) {
					   dataGridView8->Columns->Add(nuevacolumna);
				   }
				   else if (pNoGrid == 9) {
					   dataGridView9->Columns->Add(nuevacolumna);
				   }
				   else if (pNoGrid == 10) {
					   dataGridView10->Columns->Add(nuevacolumna);
				   }
				   else if (pNoGrid == 11) {
					   dataGridView11->Columns->Add(nuevacolumna);
				   }
				   else if (pNoGrid == 12) {
					   dataGridView12->Columns->Add(nuevacolumna);
				   }
				   else if (pNoGrid == 13) {
					   dataGridView13->Columns->Add(nuevacolumna);
				   }
				   else if (pNoGrid == 14) {
					   dataGridView14->Columns->Add(nuevacolumna);
				   }
				   else if (pNoGrid == 15) {
					   dataGridView15->Columns->Add(nuevacolumna);
				   }
				   else if (pNoGrid == 16) {
					   dataGridView16->Columns->Add(nuevacolumna);
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
void repintar(int noPila) {
	switch (noPila) {
		
		//Método para repintar
		//Limpia los data griev view
		//Y envia el valor para pintar
		case 1:
			if (milist1->count > 0) {
				dataGridView1->Rows->Clear();
				dataGridView1->Columns->Clear();
				dataGridView1->ColumnHeadersVisible = false;
				dataGridView1->RowHeadersVisible = false;

				for (int i = 0; i < milist1->count; i++) {
					Node* temp;
					temp = milist1->ExtractAtEnd();
					validarColorSM(temp->value, 1);
				}
			}
			break;
		case 2:
			if (milist2->count > 0) {
				dataGridView2->Rows->Clear();
				dataGridView2->Columns->Clear();
				dataGridView2->ColumnHeadersVisible = false;
				dataGridView2->RowHeadersVisible = false;

				for (int i = 0; i < milist2->count; i++) {
					Node* temp;
					temp = milist2->ExtractAtEnd();
					validarColorSM(temp->value, 2);
				}
			}
			break;
		case 3:
			if (milist3->count > 0) {
				dataGridView3->Rows->Clear();
				dataGridView3->Columns->Clear();
				dataGridView3->ColumnHeadersVisible = false;
				dataGridView3->RowHeadersVisible = false;

				for (int i = 0; i < milist3->count; i++) {
					Node* temp;
					temp = milist3->ExtractAtEnd();
					validarColorSM(temp->value, 3);
				}
			}
			break;
		case 4:
			if (milist4->count > 0) {
				dataGridView7->Rows->Clear();
				dataGridView7->Columns->Clear();
				dataGridView7->ColumnHeadersVisible = false;
				dataGridView7->RowHeadersVisible = false;

				for (int i = 0; i < milist4->count; i++) {
					Node* temp;
					temp = milist4->ExtractAtEnd();
					validarColorSM(temp->value, 4);
				}
			}
			break;
		case 5:
			if (milist5->count > 0) {
				dataGridView8->Rows->Clear();
				dataGridView8->Columns->Clear();
				dataGridView8->ColumnHeadersVisible = false;
				dataGridView8->RowHeadersVisible = false;

				for (int i = 0; i < milist5->count; i++) {
					Node* temp;
					temp = milist5->ExtractAtEnd();
					validarColorSM(temp->value, 5);
				}
			}
			break;
		case 6:
			if (milist6->count > 0) {
				dataGridView9->Rows->Clear();
				dataGridView9->Columns->Clear();
				dataGridView9->ColumnHeadersVisible = false;
				dataGridView9->RowHeadersVisible = false;

				for (int i = 0; i < milist6->count; i++) {
					Node* temp;
					temp = milist6->ExtractAtEnd();
					validarColorSM(temp->value, 6);
				}
			}
			break;
		case 7:
			if (milist7->count > 0) {
				dataGridView10->Rows->Clear();
				dataGridView10->Columns->Clear();
				dataGridView10->ColumnHeadersVisible = false;
				dataGridView10->RowHeadersVisible = false;

				for (int i = 0; i < milist7->count; i++) {
					Node* temp;
					temp = milist7->ExtractAtEnd();
					validarColorSM(temp->value, 7);
				}
			}
			break;
		case 8:
			if (milist8->count > 0) {
				dataGridView11->Rows->Clear();
				dataGridView11->Columns->Clear();
				dataGridView11->ColumnHeadersVisible = false;
				dataGridView11->RowHeadersVisible = false;

				for (int i = 0; i < milist8->count; i++) {
					Node* temp;
					temp = milist8->ExtractAtEnd();
					validarColorSM(temp->value, 8);
				}
			}
			break;
	}
}
void validarColorSM(int valor, int noPila) {
	//Pinta de nuevo los valores
	if (noPila == 1) {
		milist1->InsertAtStart(valor);
		Pintardatagrid(1, valor, 1);
		return;
	}
	if (noPila == 2) {
		milist2->InsertAtStart(valor);
		Pintardatagrid(1, valor, 2);
		return;
	}
	if (noPila == 3) {
		milist3->InsertAtStart(valor);
		Pintardatagrid(1, valor, 3);
		return;
	}
	if (noPila == 4) {
		milist4->InsertAtStart(valor);
		Pintardatagrid(1, valor, 7);
		return;
	}
	if (noPila == 5) {
		milist5->InsertAtStart(valor);
		Pintardatagrid(1, valor, 8);
		return;
	}
	if (noPila == 6) {
		milist6->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PY,";
		Pintardatagrid(1, valor, 9);
		return;
	}
	if (noPila == 7) {
		milist7->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PY,";
		Pintardatagrid(1, valor, 10);
		return;
	}
	if (noPila == 8) {
		milist8->InsertAtStart(valor);
		reporte += "P-" + noPila + "-PY,";
		Pintardatagrid(1, valor, 11);
		return;
	}
}

void revolverValores() {

}
};
}

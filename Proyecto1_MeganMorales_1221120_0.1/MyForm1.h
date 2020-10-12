#pragma once

namespace Proyecto1MeganMorales122112001 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnSManual;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
	private: System::Windows::Forms::ListBox^ listBox1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSManual = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(28, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cargar juego";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(215, 35);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(336, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"¡BIENVENIDO A COLORMANÍA!";
			// 
			// btnSManual
			// 
			this->btnSManual->BackColor = System::Drawing::Color::White;
			this->btnSManual->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSManual->Location = System::Drawing::Point(167, 112);
			this->btnSManual->Name = L"btnSManual";
			this->btnSManual->Size = System::Drawing::Size(132, 39);
			this->btnSManual->TabIndex = 2;
			this->btnSManual->Text = L"Solución manual";
			this->btnSManual->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(530, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 56);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Solución automática por pila";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(331, 104);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Solución automática por cola";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(28, 354);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(73, 195);
			this->dataGridView1->TabIndex = 5;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(96, 354);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(66, 195);
			this->dataGridView2->TabIndex = 6;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(150, 354);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(73, 195);
			this->dataGridView3->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(81, 295);
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
			this->dataGridView4->Location = System::Drawing::Point(416, 354);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(73, 195);
			this->dataGridView4->TabIndex = 9;
			// 
			// dataGridView5
			// 
			this->dataGridView5->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(478, 354);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(73, 195);
			this->dataGridView5->TabIndex = 10;
			// 
			// dataGridView6
			// 
			this->dataGridView6->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(543, 354);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(73, 195);
			this->dataGridView6->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(50, 552);
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
			this->label4->Location = System::Drawing::Point(117, 552);
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
			this->label5->Location = System::Drawing::Point(179, 552);
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
			this->label6->Location = System::Drawing::Point(437, 552);
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
			this->label7->Location = System::Drawing::Point(499, 552);
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
			this->label8->Location = System::Drawing::Point(564, 552);
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
			this->label9->Location = System::Drawing::Point(475, 292);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"MAPA FINAL";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(744, 233);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(128, 316);
			this->listBox1->TabIndex = 19;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(744, 555);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 39);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Guardar reporte";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(771, 202);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 16);
			this->label10->TabIndex = 21;
			this->label10->Text = L"REPORTE";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(286, 354);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 25);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Pila";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(286, 395);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 25);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Cola";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(280, 487);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(19, 20);
			this->textBox1->TabIndex = 24;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(366, 486);
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
			this->label11->Location = System::Drawing::Point(283, 454);
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
			this->label12->Location = System::Drawing::Point(251, 487);
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
			this->label13->Location = System::Drawing::Point(304, 488);
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
			this->label14->Location = System::Drawing::Point(344, 487);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(17, 16);
			this->label14->TabIndex = 29;
			this->label14->Text = L"P";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(831, 31);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(106, 39);
			this->button7->TabIndex = 30;
			this->button7->Text = L"REGRESAR";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Red;
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(831, 76);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(106, 39);
			this->button8->TabIndex = 31;
			this->button8->Text = L"SALIR";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(938, 639);
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
			this->Controls->Add(this->listBox1);
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
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnSManual);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
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
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

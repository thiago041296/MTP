#pragma once

int PediuAjuda=0;

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::Button^  btnPronto;
	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::Label^  lblpergunta;

	private: System::Windows::Forms::ComboBox^  comboBox1;




	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  ajd3;

	private: System::Windows::Forms::RadioButton^  ajd2;

	private: System::Windows::Forms::RadioButton^  ajd1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblAjuda;
	private: System::Windows::Forms::Button^  btnAjuda;
	private: System::Windows::Forms::Button^  btnPular;




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
			this->btnPronto = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblpergunta = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->ajd3 = (gcnew System::Windows::Forms::RadioButton());
			this->ajd2 = (gcnew System::Windows::Forms::RadioButton());
			this->ajd1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblAjuda = (gcnew System::Windows::Forms::Label());
			this->btnAjuda = (gcnew System::Windows::Forms::Button());
			this->btnPular = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnPronto
			// 
			this->btnPronto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPronto->Location = System::Drawing::Point(188, 76);
			this->btnPronto->Name = L"btnPronto";
			this->btnPronto->Size = System::Drawing::Size(72, 43);
			this->btnPronto->TabIndex = 0;
			this->btnPronto->Text = L"Pronto";
			this->btnPronto->UseVisualStyleBackColor = true;
			this->btnPronto->Click += gcnew System::EventHandler(this, &Form1::btnPronto_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 20);
			this->textBox1->TabIndex = 1;
			// 
			// lblpergunta
			// 
			this->lblpergunta->AutoSize = true;
			this->lblpergunta->Location = System::Drawing::Point(9, 9);
			this->lblpergunta->Name = L"lblpergunta";
			this->lblpergunta->Size = System::Drawing::Size(248, 13);
			this->lblpergunta->TabIndex = 3;
			this->lblpergunta->Text = L"Qual o melhor filme de todos\? (Animais Fantasticos)";
			this->lblpergunta->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Pergunta 1", L"Pergunta 2", L"Pergunta 3", L"Pergunta 4", 
				L"Pergunta 5"});
			this->comboBox1->Location = System::Drawing::Point(10, 138);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(142, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->Text = L"Perguntas";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ajd3);
			this->groupBox1->Controls->Add(this->ajd2);
			this->groupBox1->Controls->Add(this->ajd1);
			this->groupBox1->Location = System::Drawing::Point(302, 9);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(0, 0);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opções";
			// 
			// ajd3
			// 
			this->ajd3->AutoSize = true;
			this->ajd3->Location = System::Drawing::Point(15, 65);
			this->ajd3->Name = L"ajd3";
			this->ajd3->Size = System::Drawing::Size(118, 17);
			this->ajd3->TabIndex = 2;
			this->ajd3->TabStop = true;
			this->ajd3->Text = L"Animais Fantásticos";
			this->ajd3->UseVisualStyleBackColor = true;
			this->ajd3->CheckedChanged += gcnew System::EventHandler(this, &Form1::ajd3_CheckedChanged);
			// 
			// ajd2
			// 
			this->ajd2->AutoSize = true;
			this->ajd2->Location = System::Drawing::Point(15, 42);
			this->ajd2->Name = L"ajd2";
			this->ajd2->Size = System::Drawing::Size(90, 17);
			this->ajd2->TabIndex = 1;
			this->ajd2->TabStop = true;
			this->ajd2->Text = L"Jogos Mortais";
			this->ajd2->UseVisualStyleBackColor = true;
			// 
			// ajd1
			// 
			this->ajd1->AutoSize = true;
			this->ajd1->Location = System::Drawing::Point(15, 19);
			this->ajd1->Name = L"ajd1";
			this->ajd1->Size = System::Drawing::Size(69, 17);
			this->ajd1->TabIndex = 0;
			this->ajd1->TabStop = true;
			this->ajd1->Text = L"Cinderela";
			this->ajd1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(158, 138);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(356, 218);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// lblAjuda
			// 
			this->lblAjuda->AutoSize = true;
			this->lblAjuda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblAjuda->ForeColor = System::Drawing::Color::Navy;
			this->lblAjuda->Location = System::Drawing::Point(282, 106);
			this->lblAjuda->Name = L"lblAjuda";
			this->lblAjuda->Size = System::Drawing::Size(0, 18);
			this->lblAjuda->TabIndex = 10;
			// 
			// btnAjuda
			// 
			this->btnAjuda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAjuda->Location = System::Drawing::Point(99, 75);
			this->btnAjuda->Name = L"btnAjuda";
			this->btnAjuda->Size = System::Drawing::Size(72, 44);
			this->btnAjuda->TabIndex = 11;
			this->btnAjuda->Text = L"Ajuda";
			this->btnAjuda->UseVisualStyleBackColor = true;
			this->btnAjuda->Click += gcnew System::EventHandler(this, &Form1::btnAjuda_Click);
			// 
			// btnPular
			// 
			this->btnPular->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPular->ForeColor = System::Drawing::SystemColors::MenuText;
			this->btnPular->Location = System::Drawing::Point(12, 75);
			this->btnPular->Name = L"btnPular";
			this->btnPular->Size = System::Drawing::Size(72, 43);
			this->btnPular->TabIndex = 12;
			this->btnPular->Text = L"Pular";
			this->btnPular->UseVisualStyleBackColor = true;
			this->btnPular->Click += gcnew System::EventHandler(this, &Form1::btnPular_Click);
			// 
			// Form1
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(526, 358);
			this->Controls->Add(this->btnPular);
			this->Controls->Add(this->btnAjuda);
			this->Controls->Add(this->lblAjuda);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lblpergunta);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnPronto);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"QUAL É O FILME \?!";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ajd3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnPular_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void btnAjuda_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Size = System::Drawing::Size(141, 92);
			 PediuAjuda=1;
		 }
private: System::Void btnPronto_Click(System::Object^  sender, System::EventArgs^  e) {
			if(!(PediuAjuda)){
				if(textBox1->Text=="Animais Fantasticos"){
					lblAjuda->Text="ACERTOU";
				}
				else{
					lblAjuda->Text="ERROU";
				}
			}
			else{
				if(ajd1->Checked)	lblAjuda->Text="ERROU";
				if(ajd2->Checked)	lblAjuda->Text="ERROU";
				if(ajd3->Checked)	lblAjuda->Text="ACERTOU";
			}
		}
};
};

#pragma once

namespace Exer12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para JanelaRetangulo
	/// </summary>
	public ref class JanelaRetangulo : public System::Windows::Forms::Form
	{
	public:
		JanelaRetangulo(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~JanelaRetangulo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btCalcular;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbAltura;
	private: System::Windows::Forms::TextBox^ tbLargura;
	private: System::Windows::Forms::TextBox^ tbArea;
	private: System::Windows::Forms::TextBox^ tbPerimetro;





	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btCalcular = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbAltura = (gcnew System::Windows::Forms::TextBox());
			this->tbLargura = (gcnew System::Windows::Forms::TextBox());
			this->tbArea = (gcnew System::Windows::Forms::TextBox());
			this->tbPerimetro = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btCalcular
			// 
			this->btCalcular->Location = System::Drawing::Point(161, 22);
			this->btCalcular->Name = L"btCalcular";
			this->btCalcular->Size = System::Drawing::Size(75, 23);
			this->btCalcular->TabIndex = 0;
			this->btCalcular->Text = L"Calcular";
			this->btCalcular->UseVisualStyleBackColor = true;
			this->btCalcular->Click += gcnew System::EventHandler(this, &JanelaRetangulo::btCalcular_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Altura:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Largura:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Area:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Perimetro:";
			// 
			// tbAltura
			// 
			this->tbAltura->Location = System::Drawing::Point(12, 25);
			this->tbAltura->Name = L"tbAltura";
			this->tbAltura->Size = System::Drawing::Size(100, 20);
			this->tbAltura->TabIndex = 5;
			// 
			// tbLargura
			// 
			this->tbLargura->Location = System::Drawing::Point(12, 64);
			this->tbLargura->Name = L"tbLargura";
			this->tbLargura->Size = System::Drawing::Size(100, 20);
			this->tbLargura->TabIndex = 6;
			// 
			// tbArea
			// 
			this->tbArea->Location = System::Drawing::Point(12, 136);
			this->tbArea->Name = L"tbArea";
			this->tbArea->Size = System::Drawing::Size(100, 20);
			this->tbArea->TabIndex = 7;
			// 
			// tbPerimetro
			// 
			this->tbPerimetro->Location = System::Drawing::Point(12, 175);
			this->tbPerimetro->Name = L"tbPerimetro";
			this->tbPerimetro->Size = System::Drawing::Size(100, 20);
			this->tbPerimetro->TabIndex = 8;
			// 
			// JanelaRetangulo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->tbPerimetro);
			this->Controls->Add(this->tbArea);
			this->Controls->Add(this->tbLargura);
			this->Controls->Add(this->tbAltura);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btCalcular);
			this->Name = L"JanelaRetangulo";
			this->Text = L"JanelaRetangulo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		double altura, largura, area, perimetro;

		altura = Convert::ToDouble(tbAltura->Text);
		largura = Convert::ToDouble(tbLargura->Text);

		area = altura * largura;
		perimetro = (2 * altura) + (2 * largura);

		tbArea->Text = String::Format("{0:0.00}", area);
		tbPerimetro->Text = String::Format("{0:0.00}", perimetro);
	}
};
}

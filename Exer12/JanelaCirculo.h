#pragma once

namespace Exer12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para JanelaCirculo
	/// </summary>
	public ref class JanelaCirculo : public System::Windows::Forms::Form
	{
	public:
		JanelaCirculo(void)
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
		~JanelaCirculo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btCalcular;
	private: System::Windows::Forms::TextBox^ tbRaio;
	private: System::Windows::Forms::TextBox^ tbPerimetro;
	private: System::Windows::Forms::TextBox^ tbArea;
	private: System::Windows::Forms::TextBox^ tbDiametro;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btCalcular = (gcnew System::Windows::Forms::Button());
			this->tbRaio = (gcnew System::Windows::Forms::TextBox());
			this->tbPerimetro = (gcnew System::Windows::Forms::TextBox());
			this->tbArea = (gcnew System::Windows::Forms::TextBox());
			this->tbDiametro = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Raio:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Perimetro";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Area";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Diametro";
			// 
			// btCalcular
			// 
			this->btCalcular->Location = System::Drawing::Point(137, 23);
			this->btCalcular->Name = L"btCalcular";
			this->btCalcular->Size = System::Drawing::Size(75, 23);
			this->btCalcular->TabIndex = 4;
			this->btCalcular->Text = L"Calcular";
			this->btCalcular->UseVisualStyleBackColor = true;
			this->btCalcular->Click += gcnew System::EventHandler(this, &JanelaCirculo::btCalcular_Click);
			// 
			// tbRaio
			// 
			this->tbRaio->Location = System::Drawing::Point(12, 25);
			this->tbRaio->Name = L"tbRaio";
			this->tbRaio->Size = System::Drawing::Size(100, 20);
			this->tbRaio->TabIndex = 5;
			// 
			// tbPerimetro
			// 
			this->tbPerimetro->Location = System::Drawing::Point(15, 93);
			this->tbPerimetro->Name = L"tbPerimetro";
			this->tbPerimetro->Size = System::Drawing::Size(100, 20);
			this->tbPerimetro->TabIndex = 6;
			// 
			// tbArea
			// 
			this->tbArea->Location = System::Drawing::Point(15, 132);
			this->tbArea->Name = L"tbArea";
			this->tbArea->Size = System::Drawing::Size(100, 20);
			this->tbArea->TabIndex = 7;
			// 
			// tbDiametro
			// 
			this->tbDiametro->Location = System::Drawing::Point(15, 171);
			this->tbDiametro->Name = L"tbDiametro";
			this->tbDiametro->Size = System::Drawing::Size(100, 20);
			this->tbDiametro->TabIndex = 8;
			// 
			// JanelaCirculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 261);
			this->Controls->Add(this->tbDiametro);
			this->Controls->Add(this->tbArea);
			this->Controls->Add(this->tbPerimetro);
			this->Controls->Add(this->tbRaio);
			this->Controls->Add(this->btCalcular);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"JanelaCirculo";
			this->Text = L"JanelaCirculo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
	double raio, perimetro, area, diametro;

	raio = Convert::ToDouble (tbRaio->Text);

	perimetro = 2 * Math::PI * raio;
	area = Math::PI * raio * raio;
	diametro = 2 * raio;

	tbPerimetro->Text = String::Format("{0:0.00}", perimetro);
	tbArea->Text = String::Format("{0:0.00}", area);
	tbDiametro->Text = String::Format("{0:0.00}", diametro);
}
};
}

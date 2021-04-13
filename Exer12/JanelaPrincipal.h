#include "JanelaCirculo.h"
#include "JanelaRetangulo.h"

#pragma once

namespace Exer12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para JanelaPrincipal
	/// </summary>
	public ref class JanelaPrincipal : public System::Windows::Forms::Form
	{
	public:
		JanelaPrincipal(void)
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
		~JanelaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btCirculo;
	private: System::Windows::Forms::Button^ btRetangulo;
	protected:


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
			this->btCirculo = (gcnew System::Windows::Forms::Button());
			this->btRetangulo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btCirculo
			// 
			this->btCirculo->Location = System::Drawing::Point(12, 12);
			this->btCirculo->Name = L"btCirculo";
			this->btCirculo->Size = System::Drawing::Size(75, 23);
			this->btCirculo->TabIndex = 0;
			this->btCirculo->Text = L"Circulo";
			this->btCirculo->UseVisualStyleBackColor = true;
			this->btCirculo->Click += gcnew System::EventHandler(this, &JanelaPrincipal::btCirculo_Click);
			// 
			// btRetangulo
			// 
			this->btRetangulo->Location = System::Drawing::Point(93, 12);
			this->btRetangulo->Name = L"btRetangulo";
			this->btRetangulo->Size = System::Drawing::Size(75, 23);
			this->btRetangulo->TabIndex = 1;
			this->btRetangulo->Text = L"Retangulo";
			this->btRetangulo->UseVisualStyleBackColor = true;
			this->btRetangulo->Click += gcnew System::EventHandler(this, &JanelaPrincipal::btRetangulo_Click);
			// 
			// JanelaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 115);
			this->Controls->Add(this->btRetangulo);
			this->Controls->Add(this->btCirculo);
			this->Name = L"JanelaPrincipal";
			this->Text = L"JanelaPrincipal";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btCirculo_Click(System::Object^ sender, System::EventArgs^ e) {
		JanelaCirculo^ Jc = gcnew JanelaCirculo();
		Jc->Show();
	}
	private: System::Void btRetangulo_Click(System::Object^ sender, System::EventArgs^ e) {
		JanelaRetangulo^ Jr = gcnew JanelaRetangulo();
		Jr->Show();
	}
	};
}

#pragma once
#include "IPCalculs.h"

namespace IPSlicer {

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
	private: System::Windows::Forms::GroupBox^ GBGenerator;
	private: System::Windows::Forms::Button^ btnNewIP;
	protected:



	private: System::Windows::Forms::TextBox^ txtIP;



	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ labelIP;
	private: System::Windows::Forms::Label^ labelMask;



	private: System::Windows::Forms::TextBox^ txtMask;
	private: System::Windows::Forms::Label^ labelSousReseau;



	private: System::Windows::Forms::TextBox^ txtSousReseau;
	private: System::Windows::Forms::GroupBox^ gbQuestions;





	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ labelQuest1;
	private: System::Windows::Forms::Label^ labelQuest2;
	private: System::Windows::Forms::ComboBox^ repIPType;




	private: System::Windows::Forms::Label^ labelQuest3;
	private: System::Windows::Forms::ComboBox^ repIsIPRoutable;


	private: System::Windows::Forms::ComboBox^ repIPClass;
	private: System::Windows::Forms::GroupBox^ gbdecoupe;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Label^ labelMaskValue;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ repMaskPointee;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ repMaskCidr;
	private: System::Windows::Forms::Label^ txtSousReseauTarget;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ repAdrReseau;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ repAdrBroad;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ repFirstIP;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ repLastIP;
	private: System::Windows::Forms::Button^ btnFinish;

	protected:

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
			this->GBGenerator = (gcnew System::Windows::Forms::GroupBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->labelIP = (gcnew System::Windows::Forms::Label());
			this->txtIP = (gcnew System::Windows::Forms::TextBox());
			this->labelMask = (gcnew System::Windows::Forms::Label());
			this->txtMask = (gcnew System::Windows::Forms::TextBox());
			this->labelSousReseau = (gcnew System::Windows::Forms::Label());
			this->txtSousReseau = (gcnew System::Windows::Forms::TextBox());
			this->btnNewIP = (gcnew System::Windows::Forms::Button());
			this->gbQuestions = (gcnew System::Windows::Forms::GroupBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->labelQuest1 = (gcnew System::Windows::Forms::Label());
			this->repIPClass = (gcnew System::Windows::Forms::ComboBox());
			this->labelQuest2 = (gcnew System::Windows::Forms::Label());
			this->repIPType = (gcnew System::Windows::Forms::ComboBox());
			this->labelQuest3 = (gcnew System::Windows::Forms::Label());
			this->repIsIPRoutable = (gcnew System::Windows::Forms::ComboBox());
			this->gbdecoupe = (gcnew System::Windows::Forms::GroupBox());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->labelMaskValue = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->repMaskPointee = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->repMaskCidr = (gcnew System::Windows::Forms::TextBox());
			this->txtSousReseauTarget = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->repAdrReseau = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->repAdrBroad = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->repFirstIP = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->repLastIP = (gcnew System::Windows::Forms::TextBox());
			this->btnFinish = (gcnew System::Windows::Forms::Button());
			this->GBGenerator->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->gbQuestions->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->gbdecoupe->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// GBGenerator
			// 
			this->GBGenerator->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->GBGenerator->Controls->Add(this->flowLayoutPanel1);
			this->GBGenerator->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GBGenerator->Location = System::Drawing::Point(-5, 2);
			this->GBGenerator->Name = L"GBGenerator";
			this->GBGenerator->Size = System::Drawing::Size(507, 103);
			this->GBGenerator->TabIndex = 0;
			this->GBGenerator->TabStop = false;
			this->GBGenerator->Text = L"Générateur";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->labelIP);
			this->flowLayoutPanel1->Controls->Add(this->txtIP);
			this->flowLayoutPanel1->Controls->Add(this->labelMask);
			this->flowLayoutPanel1->Controls->Add(this->txtMask);
			this->flowLayoutPanel1->Controls->Add(this->labelSousReseau);
			this->flowLayoutPanel1->Controls->Add(this->txtSousReseau);
			this->flowLayoutPanel1->Controls->Add(this->btnNewIP);
			this->flowLayoutPanel1->Location = System::Drawing::Point(6, 24);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(501, 68);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// labelIP
			// 
			this->labelIP->Location = System::Drawing::Point(3, 0);
			this->labelIP->Name = L"labelIP";
			this->labelIP->Size = System::Drawing::Size(44, 31);
			this->labelIP->TabIndex = 5;
			this->labelIP->Text = L"IP :";
			this->labelIP->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtIP
			// 
			this->txtIP->Location = System::Drawing::Point(53, 3);
			this->txtIP->Name = L"txtIP";
			this->txtIP->ReadOnly = true;
			this->txtIP->Size = System::Drawing::Size(120, 25);
			this->txtIP->TabIndex = 2;
			this->txtIP->Text = L"1.0.0.0";
			this->txtIP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// labelMask
			// 
			this->labelMask->Location = System::Drawing::Point(179, 0);
			this->labelMask->Name = L"labelMask";
			this->labelMask->Size = System::Drawing::Size(67, 31);
			this->labelMask->TabIndex = 6;
			this->labelMask->Text = L"Masque :";
			this->labelMask->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtMask
			// 
			this->txtMask->Location = System::Drawing::Point(252, 3);
			this->txtMask->Name = L"txtMask";
			this->txtMask->ReadOnly = true;
			this->txtMask->Size = System::Drawing::Size(82, 25);
			this->txtMask->TabIndex = 3;
			this->txtMask->Text = L"/0";
			this->txtMask->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// labelSousReseau
			// 
			this->labelSousReseau->Location = System::Drawing::Point(340, 0);
			this->labelSousReseau->Name = L"labelSousReseau";
			this->labelSousReseau->Size = System::Drawing::Size(96, 31);
			this->labelSousReseau->TabIndex = 7;
			this->labelSousReseau->Text = L"Sous Réseaux :";
			this->labelSousReseau->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtSousReseau
			// 
			this->txtSousReseau->Location = System::Drawing::Point(442, 3);
			this->txtSousReseau->Name = L"txtSousReseau";
			this->txtSousReseau->ReadOnly = true;
			this->txtSousReseau->Size = System::Drawing::Size(49, 25);
			this->txtSousReseau->TabIndex = 4;
			this->txtSousReseau->Text = L"2";
			this->txtSousReseau->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnNewIP
			// 
			this->btnNewIP->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnNewIP->Location = System::Drawing::Point(3, 34);
			this->btnNewIP->Name = L"btnNewIP";
			this->btnNewIP->Size = System::Drawing::Size(492, 26);
			this->btnNewIP->TabIndex = 0;
			this->btnNewIP->Text = L"Générer nouvelle IP";
			this->btnNewIP->UseVisualStyleBackColor = false;
			this->btnNewIP->Click += gcnew System::EventHandler(this, &Form1::GenerateNewIP);
			// 
			// gbQuestions
			// 
			this->gbQuestions->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->gbQuestions->Controls->Add(this->flowLayoutPanel2);
			this->gbQuestions->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbQuestions->Location = System::Drawing::Point(-5, 111);
			this->gbQuestions->Name = L"gbQuestions";
			this->gbQuestions->Size = System::Drawing::Size(507, 132);
			this->gbQuestions->TabIndex = 2;
			this->gbQuestions->TabStop = false;
			this->gbQuestions->Text = L"Questions";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->labelQuest1);
			this->flowLayoutPanel2->Controls->Add(this->repIPClass);
			this->flowLayoutPanel2->Controls->Add(this->labelQuest2);
			this->flowLayoutPanel2->Controls->Add(this->repIPType);
			this->flowLayoutPanel2->Controls->Add(this->labelQuest3);
			this->flowLayoutPanel2->Controls->Add(this->repIsIPRoutable);
			this->flowLayoutPanel2->Location = System::Drawing::Point(6, 24);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(357, 102);
			this->flowLayoutPanel2->TabIndex = 1;
			// 
			// labelQuest1
			// 
			this->labelQuest1->Location = System::Drawing::Point(3, 0);
			this->labelQuest1->Name = L"labelQuest1";
			this->labelQuest1->Size = System::Drawing::Size(250, 31);
			this->labelQuest1->TabIndex = 5;
			this->labelQuest1->Text = L"- Quelle est la classe de cette adresse IP \?";
			this->labelQuest1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// repIPClass
			// 
			this->repIPClass->CausesValidation = false;
			this->repIPClass->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"A", L"B", L"C" });
			this->repIPClass->Location = System::Drawing::Point(259, 3);
			this->repIPClass->MaxLength = 1;
			this->repIPClass->Name = L"repIPClass";
			this->repIPClass->Size = System::Drawing::Size(89, 26);
			this->repIPClass->TabIndex = 6;
			this->repIPClass->TabStop = false;
			this->repIPClass->Text = L"Selectionner";
			// 
			// labelQuest2
			// 
			this->labelQuest2->Location = System::Drawing::Point(3, 32);
			this->labelQuest2->Name = L"labelQuest2";
			this->labelQuest2->Size = System::Drawing::Size(250, 31);
			this->labelQuest2->TabIndex = 7;
			this->labelQuest2->Text = L"- Que désigne cette adresse IP \?";
			this->labelQuest2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// repIPType
			// 
			this->repIPType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Réseau", L"Machine", L"Broadcast" });
			this->repIPType->Location = System::Drawing::Point(259, 35);
			this->repIPType->MaxLength = 1;
			this->repIPType->Name = L"repIPType";
			this->repIPType->Size = System::Drawing::Size(89, 26);
			this->repIPType->TabIndex = 8;
			this->repIPType->TabStop = false;
			this->repIPType->Text = L"Selectionner";
			// 
			// labelQuest3
			// 
			this->labelQuest3->Location = System::Drawing::Point(3, 64);
			this->labelQuest3->Name = L"labelQuest3";
			this->labelQuest3->Size = System::Drawing::Size(250, 31);
			this->labelQuest3->TabIndex = 9;
			this->labelQuest3->Text = L"- Est-ce une adresse routable sur Internet \?";
			this->labelQuest3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// repIsIPRoutable
			// 
			this->repIsIPRoutable->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Oui", L"Non" });
			this->repIsIPRoutable->Location = System::Drawing::Point(259, 67);
			this->repIsIPRoutable->MaxLength = 1;
			this->repIsIPRoutable->Name = L"repIsIPRoutable";
			this->repIsIPRoutable->Size = System::Drawing::Size(89, 26);
			this->repIsIPRoutable->TabIndex = 10;
			this->repIsIPRoutable->TabStop = false;
			this->repIsIPRoutable->Text = L"Selectionner";
			// 
			// gbdecoupe
			// 
			this->gbdecoupe->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->gbdecoupe->Controls->Add(this->flowLayoutPanel3);
			this->gbdecoupe->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbdecoupe->Location = System::Drawing::Point(-5, 249);
			this->gbdecoupe->Name = L"gbdecoupe";
			this->gbdecoupe->Size = System::Drawing::Size(507, 336);
			this->gbdecoupe->TabIndex = 3;
			this->gbdecoupe->TabStop = false;
			this->gbdecoupe->Text = L"Découpage";
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->labelMaskValue);
			this->flowLayoutPanel3->Controls->Add(this->label8);
			this->flowLayoutPanel3->Controls->Add(this->repMaskPointee);
			this->flowLayoutPanel3->Controls->Add(this->label9);
			this->flowLayoutPanel3->Controls->Add(this->repMaskCidr);
			this->flowLayoutPanel3->Controls->Add(this->txtSousReseauTarget);
			this->flowLayoutPanel3->Controls->Add(this->label11);
			this->flowLayoutPanel3->Controls->Add(this->repAdrReseau);
			this->flowLayoutPanel3->Controls->Add(this->label12);
			this->flowLayoutPanel3->Controls->Add(this->repAdrBroad);
			this->flowLayoutPanel3->Controls->Add(this->label13);
			this->flowLayoutPanel3->Controls->Add(this->repFirstIP);
			this->flowLayoutPanel3->Controls->Add(this->label14);
			this->flowLayoutPanel3->Controls->Add(this->repLastIP);
			this->flowLayoutPanel3->Controls->Add(this->btnFinish);
			this->flowLayoutPanel3->Location = System::Drawing::Point(6, 24);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(285, 306);
			this->flowLayoutPanel3->TabIndex = 1;
			// 
			// labelMaskValue
			// 
			this->labelMaskValue->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMaskValue->Location = System::Drawing::Point(3, 0);
			this->labelMaskValue->Name = L"labelMaskValue";
			this->labelMaskValue->Size = System::Drawing::Size(261, 31);
			this->labelMaskValue->TabIndex = 5;
			this->labelMaskValue->Text = L"Valeur du Masque de sous réseau : ";
			this->labelMaskValue->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(3, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 31);
			this->label8->TabIndex = 8;
			this->label8->Text = L"> Notation Pointée :";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// repMaskPointee
			// 
			this->repMaskPointee->Location = System::Drawing::Point(133, 34);
			this->repMaskPointee->Name = L"repMaskPointee";
			this->repMaskPointee->Size = System::Drawing::Size(107, 25);
			this->repMaskPointee->TabIndex = 6;
			this->repMaskPointee->Text = L"xxx.xxx.xxx.xxx";
			this->repMaskPointee->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(3, 62);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 31);
			this->label9->TabIndex = 9;
			this->label9->Text = L"> Notation CIDR :";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// repMaskCidr
			// 
			this->repMaskCidr->Location = System::Drawing::Point(133, 65);
			this->repMaskCidr->Name = L"repMaskCidr";
			this->repMaskCidr->Size = System::Drawing::Size(69, 25);
			this->repMaskCidr->TabIndex = 7;
			this->repMaskCidr->Text = L"/x";
			this->repMaskCidr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtSousReseauTarget
			// 
			this->txtSousReseauTarget->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSousReseauTarget->Location = System::Drawing::Point(3, 93);
			this->txtSousReseauTarget->Name = L"txtSousReseauTarget";
			this->txtSousReseauTarget->Size = System::Drawing::Size(261, 31);
			this->txtSousReseauTarget->TabIndex = 10;
			this->txtSousReseauTarget->Text = L"Sous-Réseau #X (On compte à partir de 0)";
			this->txtSousReseauTarget->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(3, 124);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(124, 31);
			this->label11->TabIndex = 11;
			this->label11->Text = L"> Adresse Réseau :";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// repAdrReseau
			// 
			this->repAdrReseau->Location = System::Drawing::Point(133, 127);
			this->repAdrReseau->Name = L"repAdrReseau";
			this->repAdrReseau->Size = System::Drawing::Size(107, 25);
			this->repAdrReseau->TabIndex = 12;
			this->repAdrReseau->Text = L"xxx.xxx.xxx.xxx";
			this->repAdrReseau->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(3, 155);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(137, 31);
			this->label12->TabIndex = 13;
			this->label12->Text = L"> Adresse Broadcast :";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// repAdrBroad
			// 
			this->repAdrBroad->Location = System::Drawing::Point(146, 158);
			this->repAdrBroad->Name = L"repAdrBroad";
			this->repAdrBroad->Size = System::Drawing::Size(107, 25);
			this->repAdrBroad->TabIndex = 14;
			this->repAdrBroad->Text = L"xxx.xxx.xxx.xxx";
			this->repAdrBroad->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(3, 186);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(124, 31);
			this->label13->TabIndex = 15;
			this->label13->Text = L"> 1ère IP utilisable :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// repFirstIP
			// 
			this->repFirstIP->Location = System::Drawing::Point(133, 189);
			this->repFirstIP->Name = L"repFirstIP";
			this->repFirstIP->Size = System::Drawing::Size(107, 25);
			this->repFirstIP->TabIndex = 16;
			this->repFirstIP->Text = L"xxx.xxx.xxx.xxx";
			this->repFirstIP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(3, 217);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(148, 31);
			this->label14->TabIndex = 17;
			this->label14->Text = L"> Dernière IP utilisable :";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// repLastIP
			// 
			this->repLastIP->Location = System::Drawing::Point(157, 220);
			this->repLastIP->Name = L"repLastIP";
			this->repLastIP->Size = System::Drawing::Size(107, 25);
			this->repLastIP->TabIndex = 18;
			this->repLastIP->Text = L"xxx.xxx.xxx.xxx";
			this->repLastIP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnFinish
			// 
			this->btnFinish->BackColor = System::Drawing::Color::MintCream;
			this->btnFinish->Location = System::Drawing::Point(3, 251);
			this->btnFinish->Name = L"btnFinish";
			this->btnFinish->Size = System::Drawing::Size(282, 32);
			this->btnFinish->TabIndex = 8;
			this->btnFinish->Text = L"Valider et Corriger";
			this->btnFinish->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(499, 590);
			this->Controls->Add(this->gbdecoupe);
			this->Controls->Add(this->gbQuestions);
			this->Controls->Add(this->GBGenerator);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Exercice Réseau IPv4 : Découper en Sous-Réseau";
			this->GBGenerator->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->gbQuestions->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->gbdecoupe->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void GenerateNewIP(System::Object^ sender, System::EventArgs^ e) {
		SetupNewIP();
		
		txtIP->Text = gcnew String(GetIPToString().c_str());
		txtMask->Text = "/" + GetIPMask();
		txtSousReseau->Text = "" + GetXNetwork();
		MessageBox::Show("Nouvelle Adresse IP Générée : \n"
		+ "Type adresse : " + GetIPType() + "\n"
		+ "Routable ? : " + IsIpRoutable() + "\n"
		+ "Classe de l'ip : " + gcnew Char(GetIpClass()) + "\n \n"
		+ "Nouveau mask : " + gcnew String(GetNewMask().c_str()) + "\n"
		+ "mask en / : " + GetNewMaskCidr() + "\n \n"
		+ "Sous Reseau # : " + GetTargetSubNetwork() + "\n"
		+ "Adresse reseau : " + gcnew String(GetSubnetAdress(0).c_str()) + "\n"
		+ "Adresse Broadcast : " + gcnew String(GetSubnetAdress(1).c_str()) + "\n"
		+ "Adresse First : " + gcnew String(GetSubnetAdress(2).c_str()) + "\n"
		+ "Adresse Last : " + gcnew String(GetSubnetAdress(3).c_str()) + "\n"
		);
	}
};
}

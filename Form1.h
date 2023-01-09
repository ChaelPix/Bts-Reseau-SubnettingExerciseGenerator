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
	private: System::Windows::Forms::Label^ labelQuestMaskDot;



	private: System::Windows::Forms::TextBox^ repMaskPointee;
	private: System::Windows::Forms::Label^ labelQuestMaskCidr;



	private: System::Windows::Forms::TextBox^ repMaskCidr;
	private: System::Windows::Forms::Label^ txtSousReseauTarget;
	private: System::Windows::Forms::Label^ labelQuestAdrRes;




	private: System::Windows::Forms::TextBox^ repAdrReseau;
	private: System::Windows::Forms::Label^ labelQuestAdrBroad;



	private: System::Windows::Forms::TextBox^ repAdrBroad;
	private: System::Windows::Forms::Label^ labelQuestAdr1;


	private: System::Windows::Forms::TextBox^ repFirstIP;
	private: System::Windows::Forms::Label^ labelQuestAdrLast;


	private: System::Windows::Forms::TextBox^ repLastIP;
	private: System::Windows::Forms::Button^ btnFinish;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::Label^ txtRepClasse;
	private: System::Windows::Forms::Label^ txtRepType;
	private: System::Windows::Forms::Label^ txtRepRoutable;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::Label^ txtRepMask;
	private: System::Windows::Forms::Label^ txtRepCIDR;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ txtRepAdrReseau;
	private: System::Windows::Forms::Label^ txtRepAdrBroad;
	private: System::Windows::Forms::Label^ txtRepAdr1;
	private: System::Windows::Forms::Label^ txtRepAdrLast;
private: System::Windows::Forms::Label^ txtNote;

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
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->txtRepClasse = (gcnew System::Windows::Forms::Label());
			this->txtRepType = (gcnew System::Windows::Forms::Label());
			this->txtRepRoutable = (gcnew System::Windows::Forms::Label());
			this->gbdecoupe = (gcnew System::Windows::Forms::GroupBox());
			this->txtNote = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->labelMaskValue = (gcnew System::Windows::Forms::Label());
			this->labelQuestMaskDot = (gcnew System::Windows::Forms::Label());
			this->repMaskPointee = (gcnew System::Windows::Forms::TextBox());
			this->labelQuestMaskCidr = (gcnew System::Windows::Forms::Label());
			this->repMaskCidr = (gcnew System::Windows::Forms::TextBox());
			this->txtSousReseauTarget = (gcnew System::Windows::Forms::Label());
			this->labelQuestAdrRes = (gcnew System::Windows::Forms::Label());
			this->repAdrReseau = (gcnew System::Windows::Forms::TextBox());
			this->labelQuestAdrBroad = (gcnew System::Windows::Forms::Label());
			this->repAdrBroad = (gcnew System::Windows::Forms::TextBox());
			this->labelQuestAdr1 = (gcnew System::Windows::Forms::Label());
			this->repFirstIP = (gcnew System::Windows::Forms::TextBox());
			this->labelQuestAdrLast = (gcnew System::Windows::Forms::Label());
			this->repLastIP = (gcnew System::Windows::Forms::TextBox());
			this->btnFinish = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->txtRepMask = (gcnew System::Windows::Forms::Label());
			this->txtRepCIDR = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtRepAdrReseau = (gcnew System::Windows::Forms::Label());
			this->txtRepAdrBroad = (gcnew System::Windows::Forms::Label());
			this->txtRepAdr1 = (gcnew System::Windows::Forms::Label());
			this->txtRepAdrLast = (gcnew System::Windows::Forms::Label());
			this->GBGenerator->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->gbQuestions->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->gbdecoupe->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel5->SuspendLayout();
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
			this->gbQuestions->Controls->Add(this->flowLayoutPanel4);
			this->gbQuestions->Enabled = false;
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
			this->repIsIPRoutable->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Non", L"Oui" });
			this->repIsIPRoutable->Location = System::Drawing::Point(259, 67);
			this->repIsIPRoutable->MaxLength = 1;
			this->repIsIPRoutable->Name = L"repIsIPRoutable";
			this->repIsIPRoutable->Size = System::Drawing::Size(89, 26);
			this->repIsIPRoutable->TabIndex = 10;
			this->repIsIPRoutable->TabStop = false;
			this->repIsIPRoutable->Text = L"Selectionner";
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->txtRepClasse);
			this->flowLayoutPanel4->Controls->Add(this->txtRepType);
			this->flowLayoutPanel4->Controls->Add(this->txtRepRoutable);
			this->flowLayoutPanel4->Location = System::Drawing::Point(369, 24);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(132, 102);
			this->flowLayoutPanel4->TabIndex = 11;
			// 
			// txtRepClasse
			// 
			this->txtRepClasse->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRepClasse->ForeColor = System::Drawing::Color::LimeGreen;
			this->txtRepClasse->Location = System::Drawing::Point(3, 0);
			this->txtRepClasse->Name = L"txtRepClasse";
			this->txtRepClasse->Size = System::Drawing::Size(129, 31);
			this->txtRepClasse->TabIndex = 5;
			this->txtRepClasse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtRepType
			// 
			this->txtRepType->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRepType->ForeColor = System::Drawing::Color::LimeGreen;
			this->txtRepType->Location = System::Drawing::Point(3, 31);
			this->txtRepType->Name = L"txtRepType";
			this->txtRepType->Size = System::Drawing::Size(129, 31);
			this->txtRepType->TabIndex = 6;
			this->txtRepType->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtRepRoutable
			// 
			this->txtRepRoutable->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRepRoutable->ForeColor = System::Drawing::Color::LimeGreen;
			this->txtRepRoutable->Location = System::Drawing::Point(3, 62);
			this->txtRepRoutable->Name = L"txtRepRoutable";
			this->txtRepRoutable->Size = System::Drawing::Size(129, 31);
			this->txtRepRoutable->TabIndex = 7;
			this->txtRepRoutable->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// gbdecoupe
			// 
			this->gbdecoupe->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->gbdecoupe->Controls->Add(this->txtNote);
			this->gbdecoupe->Controls->Add(this->flowLayoutPanel3);
			this->gbdecoupe->Controls->Add(this->flowLayoutPanel5);
			this->gbdecoupe->Enabled = false;
			this->gbdecoupe->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbdecoupe->Location = System::Drawing::Point(-5, 249);
			this->gbdecoupe->Name = L"gbdecoupe";
			this->gbdecoupe->Size = System::Drawing::Size(507, 336);
			this->gbdecoupe->TabIndex = 3;
			this->gbdecoupe->TabStop = false;
			this->gbdecoupe->Text = L"Découpage";
			// 
			// txtNote
			// 
			this->txtNote->Font = (gcnew System::Drawing::Font(L"Sylfaen", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNote->ForeColor = System::Drawing::Color::OrangeRed;
			this->txtNote->Location = System::Drawing::Point(292, 275);
			this->txtNote->Name = L"txtNote";
			this->txtNote->Size = System::Drawing::Size(210, 48);
			this->txtNote->TabIndex = 13;
			this->txtNote->Text = L"X/9";
			this->txtNote->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->txtNote->Visible = false;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->labelMaskValue);
			this->flowLayoutPanel3->Controls->Add(this->labelQuestMaskDot);
			this->flowLayoutPanel3->Controls->Add(this->repMaskPointee);
			this->flowLayoutPanel3->Controls->Add(this->labelQuestMaskCidr);
			this->flowLayoutPanel3->Controls->Add(this->repMaskCidr);
			this->flowLayoutPanel3->Controls->Add(this->txtSousReseauTarget);
			this->flowLayoutPanel3->Controls->Add(this->labelQuestAdrRes);
			this->flowLayoutPanel3->Controls->Add(this->repAdrReseau);
			this->flowLayoutPanel3->Controls->Add(this->labelQuestAdrBroad);
			this->flowLayoutPanel3->Controls->Add(this->repAdrBroad);
			this->flowLayoutPanel3->Controls->Add(this->labelQuestAdr1);
			this->flowLayoutPanel3->Controls->Add(this->repFirstIP);
			this->flowLayoutPanel3->Controls->Add(this->labelQuestAdrLast);
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
			// labelQuestMaskDot
			// 
			this->labelQuestMaskDot->Location = System::Drawing::Point(3, 31);
			this->labelQuestMaskDot->Name = L"labelQuestMaskDot";
			this->labelQuestMaskDot->Size = System::Drawing::Size(124, 31);
			this->labelQuestMaskDot->TabIndex = 8;
			this->labelQuestMaskDot->Text = L"> Notation Pointée :";
			this->labelQuestMaskDot->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			// labelQuestMaskCidr
			// 
			this->labelQuestMaskCidr->Location = System::Drawing::Point(3, 62);
			this->labelQuestMaskCidr->Name = L"labelQuestMaskCidr";
			this->labelQuestMaskCidr->Size = System::Drawing::Size(124, 31);
			this->labelQuestMaskCidr->TabIndex = 9;
			this->labelQuestMaskCidr->Text = L"> Notation CIDR :";
			this->labelQuestMaskCidr->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			// labelQuestAdrRes
			// 
			this->labelQuestAdrRes->Location = System::Drawing::Point(3, 124);
			this->labelQuestAdrRes->Name = L"labelQuestAdrRes";
			this->labelQuestAdrRes->Size = System::Drawing::Size(124, 31);
			this->labelQuestAdrRes->TabIndex = 11;
			this->labelQuestAdrRes->Text = L"> Adresse Réseau :";
			this->labelQuestAdrRes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			// labelQuestAdrBroad
			// 
			this->labelQuestAdrBroad->Location = System::Drawing::Point(3, 155);
			this->labelQuestAdrBroad->Name = L"labelQuestAdrBroad";
			this->labelQuestAdrBroad->Size = System::Drawing::Size(137, 31);
			this->labelQuestAdrBroad->TabIndex = 13;
			this->labelQuestAdrBroad->Text = L"> Adresse Broadcast :";
			this->labelQuestAdrBroad->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			// labelQuestAdr1
			// 
			this->labelQuestAdr1->Location = System::Drawing::Point(3, 186);
			this->labelQuestAdr1->Name = L"labelQuestAdr1";
			this->labelQuestAdr1->Size = System::Drawing::Size(124, 31);
			this->labelQuestAdr1->TabIndex = 15;
			this->labelQuestAdr1->Text = L"> 1ère IP utilisable :";
			this->labelQuestAdr1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			// labelQuestAdrLast
			// 
			this->labelQuestAdrLast->Location = System::Drawing::Point(3, 217);
			this->labelQuestAdrLast->Name = L"labelQuestAdrLast";
			this->labelQuestAdrLast->Size = System::Drawing::Size(148, 31);
			this->labelQuestAdrLast->TabIndex = 17;
			this->labelQuestAdrLast->Text = L"> Dernière IP utilisable :";
			this->labelQuestAdrLast->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->btnFinish->Click += gcnew System::EventHandler(this, &Form1::Correction);
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->Controls->Add(this->txtRepMask);
			this->flowLayoutPanel5->Controls->Add(this->txtRepCIDR);
			this->flowLayoutPanel5->Controls->Add(this->label5);
			this->flowLayoutPanel5->Controls->Add(this->txtRepAdrReseau);
			this->flowLayoutPanel5->Controls->Add(this->txtRepAdrBroad);
			this->flowLayoutPanel5->Controls->Add(this->txtRepAdr1);
			this->flowLayoutPanel5->Controls->Add(this->txtRepAdrLast);
			this->flowLayoutPanel5->Location = System::Drawing::Point(295, 58);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(197, 217);
			this->flowLayoutPanel5->TabIndex = 12;
			// 
			// txtRepMask
			// 
			this->txtRepMask->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRepMask->ForeColor = System::Drawing::Color::LimeGreen;
			this->txtRepMask->Location = System::Drawing::Point(3, 0);
			this->txtRepMask->Name = L"txtRepMask";
			this->txtRepMask->Size = System::Drawing::Size(194, 31);
			this->txtRepMask->TabIndex = 5;
			this->txtRepMask->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtRepCIDR
			// 
			this->txtRepCIDR->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRepCIDR->ForeColor = System::Drawing::Color::LimeGreen;
			this->txtRepCIDR->Location = System::Drawing::Point(3, 31);
			this->txtRepCIDR->Name = L"txtRepCIDR";
			this->txtRepCIDR->Size = System::Drawing::Size(194, 31);
			this->txtRepCIDR->TabIndex = 6;
			this->txtRepCIDR->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LimeGreen;
			this->label5->Location = System::Drawing::Point(3, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(194, 31);
			this->label5->TabIndex = 7;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtRepAdrReseau
			// 
			this->txtRepAdrReseau->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRepAdrReseau->ForeColor = System::Drawing::Color::LimeGreen;
			this->txtRepAdrReseau->Location = System::Drawing::Point(3, 93);
			this->txtRepAdrReseau->Name = L"txtRepAdrReseau";
			this->txtRepAdrReseau->Size = System::Drawing::Size(194, 31);
			this->txtRepAdrReseau->TabIndex = 8;
			this->txtRepAdrReseau->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtRepAdrBroad
			// 
			this->txtRepAdrBroad->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRepAdrBroad->ForeColor = System::Drawing::Color::LimeGreen;
			this->txtRepAdrBroad->Location = System::Drawing::Point(3, 124);
			this->txtRepAdrBroad->Name = L"txtRepAdrBroad";
			this->txtRepAdrBroad->Size = System::Drawing::Size(194, 31);
			this->txtRepAdrBroad->TabIndex = 9;
			this->txtRepAdrBroad->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtRepAdr1
			// 
			this->txtRepAdr1->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRepAdr1->ForeColor = System::Drawing::Color::LimeGreen;
			this->txtRepAdr1->Location = System::Drawing::Point(3, 155);
			this->txtRepAdr1->Name = L"txtRepAdr1";
			this->txtRepAdr1->Size = System::Drawing::Size(194, 31);
			this->txtRepAdr1->TabIndex = 10;
			this->txtRepAdr1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtRepAdrLast
			// 
			this->txtRepAdrLast->Font = (gcnew System::Drawing::Font(L"Sylfaen", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRepAdrLast->ForeColor = System::Drawing::Color::LimeGreen;
			this->txtRepAdrLast->Location = System::Drawing::Point(3, 186);
			this->txtRepAdrLast->Name = L"txtRepAdrLast";
			this->txtRepAdrLast->Size = System::Drawing::Size(194, 31);
			this->txtRepAdrLast->TabIndex = 11;
			this->txtRepAdrLast->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->flowLayoutPanel4->ResumeLayout(false);
			this->gbdecoupe->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->flowLayoutPanel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		void ResetForm()
		{
			gbdecoupe->Enabled = true;
			gbQuestions->Enabled = true;
			btnFinish->Enabled = true;

			String^ s = "Sélectionner";
			repIPClass->Text = s;
			repIPType->Text = s;
			repIsIPRoutable->Text = s;

			repMaskCidr->Text = "/x";
			s = "xxx.xxx.xxx.xxx";
			repMaskPointee->Text = s;
			repAdrReseau->Text = s;
			repAdrBroad->Text = s;
			repFirstIP->Text = s;
			repLastIP->Text = s;

			labelQuest1->ForeColor = ForeColor.Black;
			labelQuest2->ForeColor = ForeColor.Black;
			labelQuest3->ForeColor = ForeColor.Black;
			labelQuestMaskDot->ForeColor = ForeColor.Black;
			labelQuestMaskCidr->ForeColor = ForeColor.Black;
			labelQuestAdrRes->ForeColor = ForeColor.Black;
			labelQuestAdrBroad->ForeColor = ForeColor.Black;
			labelQuestAdr1->ForeColor = ForeColor.Black;
			labelQuestAdrLast->ForeColor = ForeColor.Black;

			txtRepClasse->Text = "";
			txtRepType->Text = "";
			txtRepRoutable->Text = "";
			txtRepMask->Text = "";
			txtRepCIDR->Text = "";
			txtRepAdrReseau->Text = "";
			txtRepAdrBroad->Text = "";
			txtRepAdr1->Text = "";
			txtRepAdrLast->Text = "";

			txtNote->Visible = false;
		}

#pragma endregion
	
	private: System::Void GenerateNewIP(System::Object^ sender, System::EventArgs^ e) {

		ResetForm();
		SetupNewIP();

		txtIP->Text = gcnew String(GetIPToString().c_str());
		txtMask->Text = "/" + GetIPMask();
		txtSousReseau->Text = "" + GetXNetwork();

		txtSousReseauTarget->Text = "Sous - Réseau #" + GetTargetSubNetwork() + " (On compte à partir de 0)";

	}

	private: System::Void Correction(System::Object^ sender, System::EventArgs^ e) {

		int note = 9;
		btnFinish->Enabled = false;
	
		//Question Classe
		if (repIPClass->SelectedIndex != GetIpClass() - 65)
		{
			note--;
			labelQuest1->ForeColor = ForeColor.Red;
			txtRepClasse->Text = "" + gcnew Char(GetIpClass());
		}
		else txtRepClasse->Text = "Juste !";

		//Question Type
		if (repIPType->SelectedIndex != GetIPType())
		{
			note--;
			labelQuest2->ForeColor = ForeColor.Red;
			txtRepType->Text = "" + gcnew String(GetIpTypeCorrespondance(GetIPType()).c_str());
		}
		else txtRepType->Text = "Juste !";

		//Question Routable
		if (repIsIPRoutable->SelectedIndex != IsIpRoutable())
		{
			note--;
			labelQuest3->ForeColor = ForeColor.Red;
			std::string rep = IsIpRoutable() == 0 ? "Non" : "Oui";
			txtRepRoutable->Text = "" + gcnew String(rep.c_str());
		}
		else txtRepRoutable->Text = "Juste !";

		//Question Mask Dot
		String^ rep = gcnew String(GetNewMask().c_str());
		if (repMaskPointee->Text != rep)
		{
			note--;
			labelQuestMaskDot->ForeColor = ForeColor.Red;
			txtRepMask->Text = "" + rep;
		}
		else txtRepMask->Text = "Juste !";

		//Question Mask Cidr
		std::string cidr = "/" + std::to_string(GetNewMaskCidr());
		rep = gcnew String(cidr.c_str());
		if (repMaskCidr->Text != rep)
		{
			note--;
			labelQuestMaskCidr->ForeColor = ForeColor.Red;
			txtRepCIDR->Text = rep;
		}
		else txtRepCIDR->Text = "Juste !";

		//Question Adresse Reseau
		rep = gcnew String(GetSubnetAdress(0).c_str());
		if (repAdrReseau->Text != rep)
		{
			note--;
			labelQuestAdrRes->ForeColor = ForeColor.Red;
			txtRepAdrReseau->Text = "" + rep;
		}
		else txtRepAdrReseau->Text = "Juste !";

		//Question Adresse Broadcast
		rep = gcnew String(GetSubnetAdress(1).c_str());
		if (repAdrBroad->Text != rep)
		{
			note--;
			labelQuestAdrBroad->ForeColor = ForeColor.Red;
			txtRepAdrBroad->Text = "" + rep;
		}
		else txtRepAdrBroad->Text = "Juste !";

		//Question Adresse 1ere machine
		rep = gcnew String(GetSubnetAdress(2).c_str());
		if (repFirstIP->Text != rep)
		{
			note--;
			labelQuestAdr1->ForeColor = ForeColor.Red;
			txtRepAdr1->Text = "" + rep;
		}
		else txtRepAdr1->Text = "Juste !";

		//Question Adresse last machine
		rep = gcnew String(GetSubnetAdress(3).c_str());
		if (repLastIP->Text != rep)
		{
			note--;
			labelQuestAdrLast->ForeColor = ForeColor.Red;
			txtRepAdrLast->Text = "" + rep;
		}
		else txtRepAdrLast->Text = "Juste !";

		txtNote->Text = note + "/9";
		txtNote->Visible = true;
	}
	};
}

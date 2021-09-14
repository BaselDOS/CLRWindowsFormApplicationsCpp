#pragma once
#include <Windows.h>

namespace TicTacToeCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;


	
	/// <summary>
	/// Summary for firstGame
	/// </summary>
	public ref class firstGame : public System::Windows::Forms::Form
	{
	public:
		firstGame(void)
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
		~firstGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ titleLabel;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnTic9;

	private: System::Windows::Forms::Button^ btnTic8;



	private: System::Windows::Forms::Button^ btnTic7;

	private: System::Windows::Forms::Button^ btnTic6;


	private: System::Windows::Forms::Button^ btnTic5;


	private: System::Windows::Forms::Button^ btnTic4;

	private: System::Windows::Forms::Button^ btnTic3;



	private: System::Windows::Forms::Button^ btnTic2;

	private: System::Windows::Forms::Button^ btnTic1;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ newGameButton;
	private: System::Windows::Forms::Button^ resetButton;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ OresultLabel;
	private: System::Windows::Forms::Label^ XresultLabel;
	private: System::Windows::Forms::Label^ playerOLbl;

	private: System::Windows::Forms::Label^ playerXLbl;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->newGameButton = (gcnew System::Windows::Forms::Button());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->OresultLabel = (gcnew System::Windows::Forms::Label());
			this->XresultLabel = (gcnew System::Windows::Forms::Label());
			this->playerOLbl = (gcnew System::Windows::Forms::Label());
			this->playerXLbl = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(21, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 59);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &firstGame::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->titleLabel);
			this->panel2->Location = System::Drawing::Point(-2, -2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(784, 59);
			this->panel2->TabIndex = 1;
			// 
			// titleLabel
			// 
			this->titleLabel->BackColor = System::Drawing::Color::White;
			this->titleLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"David", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->titleLabel->Location = System::Drawing::Point(3, 0);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(774, 55);
			this->titleLabel->TabIndex = 4;
			this->titleLabel->Text = L"Tic Tac Toe Game";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(20, 77);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(785, 411);
			this->panel3->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->btnTic9);
			this->panel5->Controls->Add(this->btnTic8);
			this->panel5->Controls->Add(this->btnTic7);
			this->panel5->Controls->Add(this->btnTic6);
			this->panel5->Controls->Add(this->btnTic5);
			this->panel5->Controls->Add(this->btnTic4);
			this->panel5->Controls->Add(this->btnTic3);
			this->panel5->Controls->Add(this->btnTic2);
			this->panel5->Controls->Add(this->btnTic1);
			this->panel5->Location = System::Drawing::Point(3, 18);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(375, 383);
			this->panel5->TabIndex = 1;
			// 
			// btnTic9
			// 
			this->btnTic9->BackColor = System::Drawing::Color::Silver;
			this->btnTic9->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->btnTic9->Location = System::Drawing::Point(251, 238);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(110, 118);
			this->btnTic9->TabIndex = 8;
			this->btnTic9->UseVisualStyleBackColor = false;
			this->btnTic9->Click += gcnew System::EventHandler(this, &firstGame::btnTic9_Click);
			// 
			// btnTic8
			// 
			this->btnTic8->BackColor = System::Drawing::Color::Silver;
			this->btnTic8->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->btnTic8->Location = System::Drawing::Point(135, 238);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(118, 118);
			this->btnTic8->TabIndex = 7;
			this->btnTic8->UseVisualStyleBackColor = false;
			this->btnTic8->Click += gcnew System::EventHandler(this, &firstGame::btnTic8_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->BackColor = System::Drawing::Color::Silver;
			this->btnTic7->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->btnTic7->Location = System::Drawing::Point(19, 238);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(118, 118);
			this->btnTic7->TabIndex = 6;
			this->btnTic7->UseVisualStyleBackColor = false;
			this->btnTic7->Click += gcnew System::EventHandler(this, &firstGame::btnTic7_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->BackColor = System::Drawing::Color::Silver;
			this->btnTic6->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->btnTic6->Location = System::Drawing::Point(251, 132);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(110, 109);
			this->btnTic6->TabIndex = 5;
			this->btnTic6->UseVisualStyleBackColor = false;
			this->btnTic6->Click += gcnew System::EventHandler(this, &firstGame::btnTic6_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->BackColor = System::Drawing::Color::Silver;
			this->btnTic5->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->btnTic5->Location = System::Drawing::Point(135, 132);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(118, 109);
			this->btnTic5->TabIndex = 4;
			this->btnTic5->UseVisualStyleBackColor = false;
			this->btnTic5->Click += gcnew System::EventHandler(this, &firstGame::btnTic5_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->BackColor = System::Drawing::Color::Silver;
			this->btnTic4->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->btnTic4->Location = System::Drawing::Point(19, 132);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(118, 109);
			this->btnTic4->TabIndex = 3;
			this->btnTic4->UseVisualStyleBackColor = false;
			this->btnTic4->Click += gcnew System::EventHandler(this, &firstGame::btnTic4_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->BackColor = System::Drawing::Color::Silver;
			this->btnTic3->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->btnTic3->Location = System::Drawing::Point(251, 17);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(110, 115);
			this->btnTic3->TabIndex = 2;
			this->btnTic3->UseVisualStyleBackColor = false;
			this->btnTic3->Click += gcnew System::EventHandler(this, &firstGame::btnTic3_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->BackColor = System::Drawing::Color::Silver;
			this->btnTic2->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->btnTic2->Location = System::Drawing::Point(135, 17);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(118, 115);
			this->btnTic2->TabIndex = 1;
			this->btnTic2->UseVisualStyleBackColor = false;
			this->btnTic2->Click += gcnew System::EventHandler(this, &firstGame::btnTic2_Click);
			// 
			// btnTic1
			// 
			this->btnTic1->BackColor = System::Drawing::Color::Silver;
			this->btnTic1->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->btnTic1->Location = System::Drawing::Point(19, 17);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(118, 115);
			this->btnTic1->TabIndex = 0;
			this->btnTic1->UseVisualStyleBackColor = false;
			this->btnTic1->Click += gcnew System::EventHandler(this, &firstGame::btnTic1_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel7);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Location = System::Drawing::Point(397, 21);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(381, 383);
			this->panel4->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->newGameButton);
			this->panel7->Controls->Add(this->resetButton);
			this->panel7->Location = System::Drawing::Point(23, 200);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(347, 166);
			this->panel7->TabIndex = 1;
			// 
			// newGameButton
			// 
			this->newGameButton->Font = (gcnew System::Drawing::Font(L"David", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->newGameButton->Location = System::Drawing::Point(3, 90);
			this->newGameButton->Name = L"newGameButton";
			this->newGameButton->Size = System::Drawing::Size(341, 76);
			this->newGameButton->TabIndex = 1;
			this->newGameButton->Text = L"New Game";
			this->newGameButton->UseVisualStyleBackColor = true;
			this->newGameButton->Click += gcnew System::EventHandler(this, &firstGame::newGameButton_Click);
			// 
			// resetButton
			// 
			this->resetButton->Font = (gcnew System::Drawing::Font(L"David", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->resetButton->Location = System::Drawing::Point(3, 3);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(341, 81);
			this->resetButton->TabIndex = 0;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = true;
			this->resetButton->Click += gcnew System::EventHandler(this, &firstGame::resetButton_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->OresultLabel);
			this->panel6->Controls->Add(this->XresultLabel);
			this->panel6->Controls->Add(this->playerOLbl);
			this->panel6->Controls->Add(this->playerXLbl);
			this->panel6->Location = System::Drawing::Point(23, 28);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(347, 166);
			this->panel6->TabIndex = 0;
			// 
			// OresultLabel
			// 
			this->OresultLabel->BackColor = System::Drawing::Color::White;
			this->OresultLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->OresultLabel->Font = (gcnew System::Drawing::Font(L"David", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->OresultLabel->Location = System::Drawing::Point(187, 94);
			this->OresultLabel->Name = L"OresultLabel";
			this->OresultLabel->Size = System::Drawing::Size(143, 58);
			this->OresultLabel->TabIndex = 3;
			this->OresultLabel->Text = L"0";
			this->OresultLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// XresultLabel
			// 
			this->XresultLabel->BackColor = System::Drawing::Color::White;
			this->XresultLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->XresultLabel->Font = (gcnew System::Drawing::Font(L"David", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->XresultLabel->Location = System::Drawing::Point(187, 25);
			this->XresultLabel->Name = L"XresultLabel";
			this->XresultLabel->Size = System::Drawing::Size(143, 58);
			this->XresultLabel->TabIndex = 2;
			this->XresultLabel->Text = L"0";
			this->XresultLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// playerOLbl
			// 
			this->playerOLbl->BackColor = System::Drawing::Color::Silver;
			this->playerOLbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->playerOLbl->Font = (gcnew System::Drawing::Font(L"David", 13.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->playerOLbl->Location = System::Drawing::Point(13, 94);
			this->playerOLbl->Name = L"playerOLbl";
			this->playerOLbl->Size = System::Drawing::Size(168, 58);
			this->playerOLbl->TabIndex = 1;
			this->playerOLbl->Text = L"Player O:";
			this->playerOLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// playerXLbl
			// 
			this->playerXLbl->BackColor = System::Drawing::Color::Silver;
			this->playerXLbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->playerXLbl->Font = (gcnew System::Drawing::Font(L"David", 13.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->playerXLbl->Location = System::Drawing::Point(13, 25);
			this->playerXLbl->Name = L"playerXLbl";
			this->playerXLbl->Size = System::Drawing::Size(168, 58);
			this->playerXLbl->TabIndex = 0;
			this->playerXLbl->Text = L"Player X:";
			this->playerXLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// firstGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->ClientSize = System::Drawing::Size(817, 500);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"firstGame";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"First Game";
			this->Load += gcnew System::EventHandler(this, &firstGame::firstGame_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		bool checker;
		int plusone;
		
		bool winner = false;
		public: void winnerplaysound()
		{
			System::Media::SoundPlayer ^player = gcnew System::Media::SoundPlayer("winner.wav");
			player->Play();
		}
			  public: void nowinnerplaysound()
			  {
				  System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("oh_no.wav");
				  player->Play();
			  }
	
		
#pragma endregion
		
		void isNoWinner()
		{
			if ((winner == false) && (btnTic1->Enabled == false) && (btnTic2->Enabled == false) && (btnTic3->Enabled == false) && (btnTic4->Enabled == false) && (btnTic5->Enabled == false) && (btnTic6->Enabled == false) && (btnTic7->Enabled == false) && (btnTic8->Enabled == false) && (btnTic9->Enabled == false))
			{
				nowinnerplaysound();
			}
	    }
		
		void Enable_false()
		{
			btnTic1->Enabled = 0;
			btnTic2->Enabled = 0;
			btnTic3->Enabled = 0;
			btnTic4->Enabled = 0;
			btnTic5->Enabled = 0;
			btnTic6->Enabled = 0;
			btnTic7->Enabled = 0;
			btnTic8->Enabled = 0;
			btnTic9->Enabled = 0;

		}
		void resetColors()
		{
			btnTic1->BackColor = System::Drawing::Color::Silver;
			btnTic2->BackColor = System::Drawing::Color::Silver;
			btnTic3->BackColor = System::Drawing::Color::Silver;
			btnTic4->BackColor = System::Drawing::Color::Silver;
			btnTic5->BackColor = System::Drawing::Color::Silver;
			btnTic6->BackColor = System::Drawing::Color::Silver;
			btnTic7->BackColor = System::Drawing::Color::Silver;
			btnTic8->BackColor = System::Drawing::Color::Silver;
			btnTic9->BackColor = System::Drawing::Color::Silver;
		}
		void score()
		{
			winner = false;
			if (btnTic1->Text=="X"&& btnTic2->Text == "X"&& btnTic3->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::DarkViolet;
				btnTic2->BackColor = System::Drawing::Color::DarkViolet;
				btnTic3->BackColor = System::Drawing::Color::DarkViolet;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(XresultLabel->Text);
				XresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X")
			{
				btnTic4->BackColor = System::Drawing::Color::DarkViolet;
				btnTic5->BackColor = System::Drawing::Color::DarkViolet;
				btnTic6->BackColor = System::Drawing::Color::DarkViolet;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(XresultLabel->Text);
				XresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X")
			{
				btnTic7->BackColor = System::Drawing::Color::DarkViolet;
				btnTic8->BackColor = System::Drawing::Color::DarkViolet;
				btnTic9->BackColor = System::Drawing::Color::DarkViolet;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(XresultLabel->Text);
				XresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::DarkViolet;
				btnTic4->BackColor = System::Drawing::Color::DarkViolet;
				btnTic7->BackColor = System::Drawing::Color::DarkViolet;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(XresultLabel->Text);
				XresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic2->Text == "X" && btnTic5->Text == "X" && btnTic8->Text == "X")
			{
				btnTic2->BackColor = System::Drawing::Color::DarkViolet;
				btnTic5->BackColor = System::Drawing::Color::DarkViolet;
				btnTic8->BackColor = System::Drawing::Color::DarkViolet;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(XresultLabel->Text);
				XresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic3->Text == "X" && btnTic6->Text == "X" && btnTic9->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::DarkViolet;
				btnTic6->BackColor = System::Drawing::Color::DarkViolet;
				btnTic9->BackColor = System::Drawing::Color::DarkViolet;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(XresultLabel->Text);
				XresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::PaleVioletRed;
				btnTic5->BackColor = System::Drawing::Color::PaleVioletRed;
				btnTic9->BackColor = System::Drawing::Color::PaleVioletRed;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(XresultLabel->Text);
				XresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::PaleVioletRed;
				btnTic5->BackColor = System::Drawing::Color::PaleVioletRed;
				btnTic7->BackColor = System::Drawing::Color::PaleVioletRed;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(XresultLabel->Text);
				XresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}
			//////////////////////////////////////////////////////////////////////

			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::DarkOrange;
				btnTic2->BackColor = System::Drawing::Color::DarkOrange;
				btnTic3->BackColor = System::Drawing::Color::DarkOrange;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(OresultLabel->Text);
				OresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "O")
			{
				btnTic4->BackColor = System::Drawing::Color::DarkOrange;
				btnTic5->BackColor = System::Drawing::Color::DarkOrange;
				btnTic6->BackColor = System::Drawing::Color::DarkOrange;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(OresultLabel->Text);
				OresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O")
			{
				btnTic7->BackColor = System::Drawing::Color::DarkOrange;
				btnTic8->BackColor = System::Drawing::Color::DarkOrange;
				btnTic9->BackColor = System::Drawing::Color::DarkOrange;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(OresultLabel->Text);
				OresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::DarkOrange;
				btnTic4->BackColor = System::Drawing::Color::DarkOrange;
				btnTic7->BackColor = System::Drawing::Color::DarkOrange;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(OresultLabel->Text);
				OresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic2->Text == "O" && btnTic5->Text == "O" && btnTic8->Text == "O")
			{
				btnTic2->BackColor = System::Drawing::Color::DarkOrange;
				btnTic5->BackColor = System::Drawing::Color::DarkOrange;
				btnTic8->BackColor = System::Drawing::Color::DarkOrange;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(OresultLabel->Text);
				OresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic3->Text == "O" && btnTic6->Text == "O" && btnTic9->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::DarkOrange;
				btnTic6->BackColor = System::Drawing::Color::DarkOrange;
				btnTic9->BackColor = System::Drawing::Color::DarkOrange;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(OresultLabel->Text);
				OresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::Yellow;
				btnTic5->BackColor = System::Drawing::Color::Yellow;
				btnTic9->BackColor = System::Drawing::Color::Yellow;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(OresultLabel->Text);
				OresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::Yellow;
				btnTic5->BackColor = System::Drawing::Color::Yellow;
				btnTic7->BackColor = System::Drawing::Color::Yellow;
				winnerplaysound();
				winner = true;
				MessageBox::Show("The winner is player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(OresultLabel->Text);
				OresultLabel->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}
			
		}
	private: System::Void firstGame_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checker == false)
		{
			btnTic1->Text = "X";
			checker = true;
		}
		else
		{
			btnTic1->Text = "O";
			checker = false;
		}
		score();
		btnTic1->Enabled = false;
		isNoWinner();
	}
private: System::Void btnTic2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (checker == false)
	{
		btnTic2->Text = "X";
		checker = true;
	}
	else
	{
		btnTic2->Text = "O";
		checker = false;
	}
	score();
	btnTic2->Enabled = false;
	isNoWinner();
}
private: System::Void btnTic3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checker == false)
	{
		btnTic3->Text = "X";
		checker = true;
	}
	else
	{
		btnTic3->Text = "O";
		checker = false;
	}
	score();
	btnTic3->Enabled = false;
	isNoWinner();
}
private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checker == false)
	{
		btnTic4->Text = "X";
		checker = true;
	}
	else
	{
		btnTic4->Text = "O";
		checker = false;
	}
	score();
	btnTic4->Enabled = false;
	isNoWinner();
}
private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checker == false)
	{
		btnTic5->Text = "X";
		checker = true;
	}
	else
	{
		btnTic5->Text = "O";
		checker = false;
	}
	score();
	btnTic5->Enabled = false;
	isNoWinner();
}
private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (checker == false)
	{
		btnTic6->Text = "X";
		checker = true;
	}
	else
	{
		btnTic6->Text = "O";
		checker = false;
	}
	score();
	btnTic6->Enabled = false;
	isNoWinner();
}
private: System::Void btnTic7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checker == false)
	{
		btnTic7->Text = "X";
		checker = true;
	}
	else
	{
		btnTic7->Text = "O";
		checker = false;
	}
	score();
	btnTic7->Enabled = false;
	isNoWinner();
}
private: System::Void btnTic8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (checker == false)
	{
		btnTic8->Text = "X";
		checker = true;
	}
	else
	{
		btnTic8->Text = "O";
		checker = false;
	}
	score();
	btnTic8->Enabled = false;
	isNoWinner();
}
private: System::Void btnTic9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (checker == false)
	{
		btnTic9->Text = "X";
		checker = true;
	}
	else
	{
		btnTic9->Text = "O";
		checker = false;
	}
	score();
	btnTic9->Enabled = false;
	isNoWinner();
}
private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	btnTic1->Text = "";
	btnTic1->Enabled = true;
	btnTic2->Text = "";
	btnTic2->Enabled = true;
	btnTic3->Text = "";
	btnTic3->Enabled = true;
	btnTic4->Text = "";
	btnTic4->Enabled = true;
	btnTic5->Text = "";
	btnTic5->Enabled = true;
	btnTic6->Text = "";
	btnTic6->Enabled = true;
	btnTic7->Text = "";
	btnTic7->Enabled = true;
	btnTic8->Text = "";
	btnTic8->Enabled = true;
	btnTic9->Text = "";
	btnTic9->Enabled = true;
	resetColors();
	
}
private: System::Void newGameButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	btnTic1->Text = "";
	btnTic1->Enabled = true;
	btnTic2->Text = "";
	btnTic2->Enabled = true;
	btnTic3->Text = "";
	btnTic3->Enabled = true;
	btnTic4->Text = "";
	btnTic4->Enabled = true;
	btnTic5->Text = "";
	btnTic5->Enabled = true;
	btnTic6->Text = "";
	btnTic6->Enabled = true;
	btnTic7->Text = "";
	btnTic7->Enabled = true;
	btnTic8->Text = "";
	btnTic8->Enabled = true;
	btnTic9->Text = "";
	btnTic9->Enabled = true;
	XresultLabel->Text = "0";
	OresultLabel->Text = "0";
	checker = false;
	resetColors();
}
};
}

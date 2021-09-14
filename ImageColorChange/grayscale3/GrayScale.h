#pragma once

namespace grayscale3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;


	/// <summary>
	/// Summary for GrayScale
	/// </summary>
	public ref class GrayScale : public System::Windows::Forms::Form
	{
	public:
		GrayScale(void)
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
		~GrayScale()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ originalPbox;
	protected:
	private: System::Windows::Forms::PictureBox^ grayscaledPBox;
	private: System::Windows::Forms::Label^ originalLbl;
	private: System::Windows::Forms::Label^ sellectedLbl;

	private: System::Windows::Forms::ComboBox^ colorComboBox;



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
			this->originalPbox = (gcnew System::Windows::Forms::PictureBox());
			this->grayscaledPBox = (gcnew System::Windows::Forms::PictureBox());
			this->originalLbl = (gcnew System::Windows::Forms::Label());
			this->sellectedLbl = (gcnew System::Windows::Forms::Label());
			this->colorComboBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originalPbox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grayscaledPBox))->BeginInit();
			this->SuspendLayout();
			// 
			// originalPbox
			// 
			this->originalPbox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->originalPbox->Location = System::Drawing::Point(23, 37);
			this->originalPbox->Name = L"originalPbox";
			this->originalPbox->Size = System::Drawing::Size(324, 393);
			this->originalPbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->originalPbox->TabIndex = 0;
			this->originalPbox->TabStop = false;
			// 
			// grayscaledPBox
			// 
			this->grayscaledPBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->grayscaledPBox->Location = System::Drawing::Point(565, 37);
			this->grayscaledPBox->Name = L"grayscaledPBox";
			this->grayscaledPBox->Size = System::Drawing::Size(324, 393);
			this->grayscaledPBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->grayscaledPBox->TabIndex = 1;
			this->grayscaledPBox->TabStop = false;
			// 
			// originalLbl
			// 
			this->originalLbl->BackColor = System::Drawing::Color::Silver;
			this->originalLbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->originalLbl->Font = (gcnew System::Drawing::Font(L"David", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->originalLbl->Location = System::Drawing::Point(51, 471);
			this->originalLbl->Name = L"originalLbl";
			this->originalLbl->Size = System::Drawing::Size(213, 56);
			this->originalLbl->TabIndex = 2;
			this->originalLbl->Text = L"Original";
			this->originalLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// sellectedLbl
			// 
			this->sellectedLbl->BackColor = System::Drawing::Color::Silver;
			this->sellectedLbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->sellectedLbl->Font = (gcnew System::Drawing::Font(L"David", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->sellectedLbl->Location = System::Drawing::Point(627, 471);
			this->sellectedLbl->Name = L"sellectedLbl";
			this->sellectedLbl->Size = System::Drawing::Size(213, 56);
			this->sellectedLbl->TabIndex = 3;
			this->sellectedLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// colorComboBox
			// 
			this->colorComboBox->Font = (gcnew System::Drawing::Font(L"David", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->colorComboBox->FormattingEnabled = true;
			this->colorComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Original", L"Gray Scale", L"Just Green",
					L"Just Blue", L"Just Red", L""
			});
			this->colorComboBox->Location = System::Drawing::Point(385, 178);
			this->colorComboBox->Name = L"colorComboBox";
			this->colorComboBox->Size = System::Drawing::Size(133, 24);
			this->colorComboBox->TabIndex = 4;
			this->colorComboBox->Text = L"Select mode";
			this->colorComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &GrayScale::colorComboBox_SelectedIndexChanged);
			// 
			// GrayScale
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCyan;
			this->ClientSize = System::Drawing::Size(929, 555);
			this->Controls->Add(this->colorComboBox);
			this->Controls->Add(this->sellectedLbl);
			this->Controls->Add(this->originalLbl);
			this->Controls->Add(this->grayscaledPBox);
			this->Controls->Add(this->originalPbox);
			this->Name = L"GrayScale";
			this->Text = L"GrayScale";
			this->Load += gcnew System::EventHandler(this, &GrayScale::GrayScale_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originalPbox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grayscaledPBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int mode = 0;
	private: System::Void colorComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		System::Drawing::Bitmap^ bmp = gcnew System::Drawing::Bitmap("Tom.jpg");
		int width = bmp->Width;
		int height = bmp->Height;
		Color pixcolor;
		if (colorComboBox->SelectedIndex == 0) mode = 1;
		if (colorComboBox->SelectedIndex == 1) mode = 2;
		if (colorComboBox->SelectedIndex == 2) mode = 3;
		if (colorComboBox->SelectedIndex == 3) mode = 4;
		if (colorComboBox->SelectedIndex == 4) mode = 5;
		sellectedLbl->Text = colorComboBox->Text;
		for (int y = 0; y < height; y++)
		{
			for (int x = 0; x < width; x++)
			{
				pixcolor = bmp->GetPixel(x, y);
				int a = pixcolor.A;
				int red = pixcolor.R;
				int green = pixcolor.G;
				int blue = pixcolor.B;
				int avg = (red + blue + green) / 3;
				switch (mode)
				{
				case 1:
					bmp->SetPixel(x, y, Color::FromArgb(a, red, green, blue)); break;					
				case 2:
					bmp->SetPixel(x, y, Color::FromArgb(a, avg, avg, avg)); break;						
				case 3:
					bmp->SetPixel(x, y, Color::FromArgb(a, 0, green, 0)); break;					
				case 4:
					bmp->SetPixel(x, y, Color::FromArgb(a, 0, 0, blue)); break;					
				case 5:
					bmp->SetPixel(x, y, Color::FromArgb(a, red, 0, 0)); break;					
				default:
					break;
				}

			}
		}
		grayscaledPBox->Image = bmp;
		bmp->Save("new.png");
	}
	
	private: System::Void GrayScale_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		originalPbox->Image = System::Drawing::Image::FromFile("Tom.jpg");
		sellectedLbl->Text= "Sellected - mode";
	}


};
}

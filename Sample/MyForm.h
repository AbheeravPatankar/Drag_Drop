#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Control^ activeControl;
	private: System::Drawing::Point prevPosition;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(266, 757);
			this->panel1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->AllowDrop = true;
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(31, 504);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(167, 75);
			this->button4->TabIndex = 3;
			this->button4->Tag = L"";
			this->button4->Text = L"ROAD";
			this->button4->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_mouseDown);
			// 
			// button3
			// 
			this->button3->AllowDrop = true;
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(31, 363);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 75);
			this->button3->TabIndex = 2;
			this->button3->Tag = L"";
			this->button3->Text = L"NO PARKING";
			this->button3->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_mouseDown);
			// 
			// button2
			// 
			this->button2->AllowDrop = true;
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button2->BackColor = System::Drawing::Color::LightGreen;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(31, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 75);
			this->button2->TabIndex = 1;
			this->button2->Tag = L"";
			this->button2->Text = L"2 WHEELER";
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_mouseDown);
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button1->BackColor = System::Drawing::Color::LightGreen;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(31, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 75);
			this->button1->TabIndex = 0;
			this->button1->Tag = L"";
			this->button1->Text = L"4 WHEELER";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_mouseDown);
			// 
			// panel2
			// 
			this->panel2->AllowDrop = true;
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Location = System::Drawing::Point(264, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(874, 757);
			this->panel2->TabIndex = 0;
			this->panel2->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::panel2_dragDrop);
			this->panel2->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::panel2_dragEnter);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1139, 760);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_dragEnter(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) 
	{
			e->Effect = DragDropEffects::Copy;	
	}
	private: System::Void button1_mouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		button = safe_cast<Button^>(sender);
		button->DoDragDrop(button->Text, DragDropEffects::Copy);
	}

	private: System::Void panel2_dragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) 
	{		
		button = gcnew Button();
		button->Location = this->PointToClient(System::Drawing::Point(e->X - 200, e->Y));
		//this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
		button->Name = L"buttonX";
		button->Size = System::Drawing::Size(140, 60);
		button->TabIndex = 0;
		button->Text = e->Data->GetData(DataFormats::Text)->ToString();
		button->TextAlign = System::Drawing::ContentAlignment::TopLeft;
		if (button->Text == "ROAD")
		{
			button->BackColor = System::Drawing::Color::Gray;
		}
		else if (button->Text == "NO PARKING")
		{
			button->BackColor = System::Drawing::Color::Red;
		}
		else
		{
			button->BackColor = System::Drawing::Color::LightGreen;
		}
		button->UseVisualStyleBackColor = false;
		button->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_mouseDown);
		button->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_mouseMove);
		button->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_mouseUp);
		this->panel2->Controls->Add(button);
	}
	private: System::Void button_mouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (activeControl == nullptr)
			return;
		System::Drawing::Point location = activeControl->Location;
		location.Offset(e->Location.X - prevPosition.X, e->Location.Y - prevPosition.Y);
		activeControl->Location = location;
	}
	private: System::Void button_mouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		activeControl = dynamic_cast<System::Windows::Forms::Control^>(sender);
		prevPosition = e->Location;
	}
	private: System::Void button_mouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		activeControl = nullptr;
	}
};
}



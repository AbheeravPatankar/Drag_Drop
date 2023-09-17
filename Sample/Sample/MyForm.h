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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;

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
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(266, 757);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Location = System::Drawing::Point(24, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_mouseDown);
			// 
			// panel2
			// 
			this->panel2->AllowDrop = true;
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::Chartreuse;
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
		button1->DoDragDrop(button1, DragDropEffects::Copy);
	}
	private: System::Void panel2_dragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) 
	{
		Button^ button = gcnew Button();
		button->BackColor = System::Drawing::Color::Cyan;
		button->Location = this->PointToClient(System::Drawing::Point(e->X - 200, e->Y));
		button->Name = L"button1";
		button->Size = System::Drawing::Size(184, 71);
		button->TabIndex = 0;
		button->Text = L"button1";
		button->UseVisualStyleBackColor = false;
		this->panel2->Controls->Add(button);
	
	}
};
}



#pragma once
#include<iostream>

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;
	int moveFlag = 0;
	int hoverFlag = 0;
	//waste
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
	Button^ button_to_delete;


	private:
		TextBox^ textbox;
		TextBox^ textbox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;





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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
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
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(31, 504);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(167, 75);
			this->button4->TabIndex = 3;
			this->button4->Tag = L"";
			this->button4->Text = L"ROAD";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_mouseDown);
			// 
			// button3
			// 
			this->button3->AllowDrop = true;
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(31, 363);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 75);
			this->button3->TabIndex = 2;
			this->button3->Tag = L"";
			this->button3->Text = L"NO PARKING";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_mouseDown);
			// 
			// button2
			// 
			this->button2->AllowDrop = true;
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button2->BackColor = System::Drawing::Color::LightGreen;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::LightCoral;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(31, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 75);
			this->button2->TabIndex = 1;
			this->button2->Tag = L"";
			this->button2->Text = L"2 WHEELER";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_mouseDown);
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->button1->BackColor = System::Drawing::Color::LightGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Teal;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(31, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 75);
			this->button1->TabIndex = 0;
			this->button1->Tag = L"hello";
			this->button1->Text = L"4 WHEELER";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_mouseDown);			// 
			// panel2
			// 
			this->panel2->AllowDrop = true;
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::Azure;
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Location = System::Drawing::Point(264, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(872, 757);
			this->panel2->TabIndex = 0;
			this->panel2->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::panel2_dragDrop);
			this->panel2->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::panel2_dragEnter);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Tomato;
			this->button6->Location = System::Drawing::Point(677, 85);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 57);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Delete";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::delete_control);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button5->Location = System::Drawing::Point(677, 10);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 57);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Display";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::map_display);
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
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
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
		// textbox = safe_cast<TextBox^>(sender);
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
		button->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		button->Font = gcnew System::Drawing::Font("Microsoft YaHei UI", 14, FontStyle::Bold);

		if (button->Text == "ROAD")
		{
			button->BackColor = System::Drawing::Color::Gray;
		}
		else if (button->Text == "NO PARKING")
		{
			button->BackColor = System::Drawing::Color::Red;
		}
		else if (button->Text == "4 WHEELER")
		{
			textbox = gcnew TextBox();
			textbox->Location = this->PointToClient(System::Drawing::Point(e->X - 160, e->Y - 20));
			textbox1 = gcnew TextBox();
			textbox1->Location = this->PointToClient(System::Drawing::Point(e->X - 200, e->Y + 60));
			button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			button->ForeColor = System::Drawing::Color::Teal;
			button->BackColor = System::Drawing::Color::LightGreen;
		}
		else
		{
			textbox = gcnew TextBox();
			textbox->Location = this->PointToClient(System::Drawing::Point(e->X - 160, e->Y - 20));
			textbox1 = gcnew TextBox();
			textbox1->Location = this->PointToClient(System::Drawing::Point(e->X - 200, e->Y + 60));
			textbox1->Size.Width = 100;
			textbox1->Size.Height = 100;
			button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			button->ForeColor = System::Drawing::Color::LightCoral;
			button->BackColor = System::Drawing::Color::LightGreen;
		}
		
		//textbox->Click += gcnew System::EventHandler(this, &MyForm::t_Click);
		//textbox->Visible = false;
		int hoverCount = 0;
		button->UseVisualStyleBackColor = false;
		button->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_mouseDown);
		button->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_mouseMove);
		button->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_mouseUp);
		button->MouseHover += gcnew System::EventHandler(this, &MyForm::button_mouseHover);


 		this->panel2->Controls->Add(button);
		this->panel2->Controls->Add(textbox);
		//this->panel2->Controls->Add(textbox1);
	}
	private: System::Void button_mouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (moveFlag == 0)  // moveFlag == 0 -> creation mode
		{
			if (activeControl == nullptr)
				return;
			System::Drawing::Point location = activeControl->Location;
			location.Offset(e->Location.X - prevPosition.X, e->Location.Y - prevPosition.Y);
			activeControl->Location = location;
		}
	}
	private: System::Void button_mouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		activeControl = dynamic_cast<System::Windows::Forms::Control^>(sender);
		button_to_delete = (Button^)sender;
		prevPosition = e->Location;
	}
	private: System::Void button_mouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		activeControl = nullptr;
	}
	
	
	private: System::Void button_mouseHover(System::Object^ sender, System::EventArgs^ e)
	{
		int flag = hoverFlag;
		Button^ clickedButton = (Button^)sender;
		if (hoverFlag == 0 && clickedButton->BackColor == System::Drawing::Color::Crimson)
		{
			
			if (clickedButton->Tag != NULL) 
			{
				MessageBox::Show(clickedButton->Tag->ToString(), "Message Box", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			hoverFlag = 1;
		}
		else hoverFlag = 0;
	}

	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Button^ button = (Button^)sender;
		if (button->Text == "4 WHEELER" || button->Text == "2 WHEELER")
			button->Text = textbox->Text;
		delete textbox;
		
		if (moveFlag == 1 && button->BackColor == System::Drawing::Color::LightGreen)
		{
			String^ inputBoxResult = Interaction::InputBox("Enter Vehicle Number, Model, Entry time as csv", "Input Box", "hello world", 500, 300);
			button->Tag = inputBoxResult;
		}
	
		//std::string content = marshal_as<std::string>(inputBoxResult);
		if (moveFlag == 1) //moveFlag == 1 indicates display mode
		{
			Button^ clickedButton = (Button^)sender;
			if (clickedButton->BackColor == System::Drawing::Color::LightGreen)
			{
				clickedButton->BackColor = System::Drawing::Color::Crimson;
				hoverFlag = 0;
			}
			else if (clickedButton->BackColor == System::Drawing::Color::Crimson)
			{
				clickedButton->BackColor = System::Drawing::Color::LightGreen;
				hoverFlag = 1;
			}
		}
	}
	
	
	/*private: System::Void textbox_Click(System::Object^ sender, System::EventArgs^ e) {
		textbox->Visible = false;
	}*/
	private: System::Void map_display(System::Object^ sender, System::EventArgs^ e) 
	{
		
		if (moveFlag == 0)
		{
			moveFlag = 1;
			panel1->Visible = false;
			button6->Visible = false;
			button5->Text = "Back";
		}
		else
		{
			moveFlag = 0;
			panel1->Visible = true;
			button6->Visible = true;
			button5->Text = "Display";
		}
	}
	
	private: System::Void delete_control(System::Object^ sender, System::EventArgs^ e) 
	{
		if(moveFlag!=1)
			delete button_to_delete;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_mouseHover(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textbox1->Visible = true;
	}

};
}
 


#pragma once

namespace LotteryForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;




	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(135, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 74);
			this->button1->TabIndex = 0;
			this->button1->Text = L"產生號碼";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(106, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"樂透獎號產生軟體";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(14, 411);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(434, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"※請注意:本軟體所產生之獎號僅供參考使用，未中獎本軟體恕不負責";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(173, 425);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"©Samuel Chi 2017\r\n";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"標楷體", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(10, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 35);
			this->label4->TabIndex = 4;
			this->label4->Text = L"？";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Font = (gcnew System::Drawing::Font(L"標楷體", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(86, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 35);
			this->label5->TabIndex = 5;
			this->label5->Text = L"？";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Font = (gcnew System::Drawing::Font(L"標楷體", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(165, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 35);
			this->label6->TabIndex = 6;
			this->label6->Text = L"？";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Font = (gcnew System::Drawing::Font(L"標楷體", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(244, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 35);
			this->label7->TabIndex = 7;
			this->label7->Text = L"？";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Font = (gcnew System::Drawing::Font(L"標楷體", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(323, 145);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 35);
			this->label8->TabIndex = 8;
			this->label8->Text = L"？";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Font = (gcnew System::Drawing::Font(L"標楷體", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(402, 145);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 35);
			this->label9->TabIndex = 9;
			this->label9->Text = L"？";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(415, 40);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 12);
			this->label10->TabIndex = 10;
			this->label10->Text = L"V1.3";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(464, 441);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"樂透獎號產生軟體";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		int total = 0;
		int resultArray[6];
		int ballArray[50];
		Random rand;
		repeat:
		//
		//initialize
		//
		for (int i = 0;i < 50;i++)
		{
			ballArray[i] = i;
		}

		//
		//use data produce the six result
		//
		for (int i = 0;i < 6;)
		{
			//
			//set data
			//
			int ten = 18, twenty = 40, thirty = 62, fourty = 82;

			//
			//produce number
			//
			int numOfRand = static_cast<Int32> (rand.NextDouble() * 100 + 1);
			if (numOfRand <= ten)
			{
				int ballOfRand = static_cast<Int32> (rand.NextDouble() * 9 + 1);
				if (ballArray[ballOfRand] == 0)	continue;
				else
				{
					resultArray[i] = ballArray[ballOfRand];
					ballArray[ballOfRand] = 0;
					i++;
				}
			}
			else if (numOfRand > ten && numOfRand <= twenty)
			{
				int ballOfRand = static_cast<Int32> (rand.NextDouble() * 10 + 10);
				if (ballArray[ballOfRand] == 0)	continue;
				else
				{
					resultArray[i] = ballArray[ballOfRand];
					ballArray[ballOfRand] = 0;
					i++;
				}
			}
			else if (numOfRand > twenty && numOfRand <= thirty)
			{
				int ballOfRand = static_cast<Int32> (rand.NextDouble() * 10 + 20);
				if (ballArray[ballOfRand] == 0)	continue;
				else
				{
					resultArray[i] = ballArray[ballOfRand];
					ballArray[ballOfRand] = 0;
					i++;
				}
			}
			else if (numOfRand > thirty && numOfRand <= fourty)
			{
				int ballOfRand = static_cast<Int32> (rand.NextDouble() * 10 + 30);
				if (ballArray[ballOfRand] == 0)	continue;
				else
				{
					resultArray[i] = ballArray[ballOfRand];
					ballArray[ballOfRand] = 0;
					i++;
				}
			}
			else if (numOfRand > fourty && numOfRand <= 100)
			{
				int ballOfRand = static_cast<Int32> (rand.NextDouble() * 10 + 40);
				if (ballArray[ballOfRand] == 0)	continue;
				else
				{
					resultArray[i] = ballArray[ballOfRand];
					ballArray[ballOfRand] = 0;
					i++;
				}
			}
		}

		//
		// set 3 odd number and 3 even number
		//
		if (resultArray[0] % 2 != 0 || resultArray[1] % 2 != 0 ||
			resultArray[2] % 2 != 0 || resultArray[3] % 2 == 0 ||
			resultArray[4] % 2 == 0 || resultArray[5] % 2 == 0 )
		{
			goto repeat;
		}
	
		//
		//rank all of result and add together
		//
		int minIndex;
		for (int i = 0; i < 6; i++)
		{
			minIndex = i;
			for (int j = i + 1; j < 6; j++)
			{
				if (resultArray[minIndex] > resultArray[j])
				{
					minIndex = j;
				}
			}
			if (minIndex != i)
			{
				int temp = resultArray[i];
				resultArray[i] = resultArray[minIndex];
				resultArray[minIndex] = temp;
			}
			total += resultArray[i];
		}

		//
		//set range
		//
		if (total < 140 || total > 170)
		{
			total = 0;
			goto repeat;
		}

		//
		//show result
		//
		this->label4->Text = resultArray[0] < 10 ? "0" + resultArray[0].ToString() : resultArray[0].ToString();
		this->label5->Text = resultArray[1] < 10 ? "0" + resultArray[1].ToString() : resultArray[1].ToString();
		this->label6->Text = resultArray[2] < 10 ? "0" + resultArray[2].ToString() : resultArray[2].ToString();
		this->label7->Text = resultArray[3] < 10 ? "0" + resultArray[3].ToString() : resultArray[3].ToString();
		this->label8->Text = resultArray[4] < 10 ? "0" + resultArray[4].ToString() : resultArray[4].ToString();
		this->label9->Text = resultArray[5] < 10 ? "0" + resultArray[5].ToString() : resultArray[5].ToString();
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}	
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}	
};
}

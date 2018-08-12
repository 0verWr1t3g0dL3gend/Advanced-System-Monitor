#pragma once

namespace Advancedsystemmonitor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}

	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openProcessListToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  processListToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  processListToolStripMenuItem1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Process_column;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Pid_Column;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cpu_column;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ram_Column;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Disc_column;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Gpu_column;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Net_column;


	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openProcessListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->processListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->processListToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Process_column = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pid_Column = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cpu_column = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ram_Column = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Disc_column = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gpu_column = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Net_column = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(742, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openProcessListToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openProcessListToolStripMenuItem
			// 
			this->openProcessListToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->processListToolStripMenuItem,
					this->processListToolStripMenuItem1
			});
			this->openProcessListToolStripMenuItem->Name = L"openProcessListToolStripMenuItem";
			this->openProcessListToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->openProcessListToolStripMenuItem->Text = L"Process";
			// 
			// processListToolStripMenuItem
			// 
			this->processListToolStripMenuItem->Name = L"processListToolStripMenuItem";
			this->processListToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->processListToolStripMenuItem->Text = L"Open process";
			// 
			// processListToolStripMenuItem1
			// 
			this->processListToolStripMenuItem1->Name = L"processListToolStripMenuItem1";
			this->processListToolStripMenuItem1->Size = System::Drawing::Size(146, 22);
			this->processListToolStripMenuItem1->Text = L"Process list";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Process_column,
					this->Pid_Column, this->Cpu_column, this->Ram_Column, this->Disc_column, this->Gpu_column, this->Net_column
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(718, 638);
			this->dataGridView1->TabIndex = 1;
			// 
			// Process_column
			// 
			this->Process_column->Frozen = true;
			this->Process_column->HeaderText = L"Process";
			this->Process_column->Name = L"Process_column";
			this->Process_column->ReadOnly = true;
			this->Process_column->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Pid_Column
			// 
			this->Pid_Column->Frozen = true;
			this->Pid_Column->HeaderText = L"Pid";
			this->Pid_Column->Name = L"Pid_Column";
			this->Pid_Column->ReadOnly = true;
			this->Pid_Column->Width = 75;
			// 
			// Cpu_column
			// 
			this->Cpu_column->Frozen = true;
			this->Cpu_column->HeaderText = L"CPU Usage";
			this->Cpu_column->Name = L"Cpu_column";
			this->Cpu_column->ReadOnly = true;
			// 
			// Ram_Column
			// 
			this->Ram_Column->Frozen = true;
			this->Ram_Column->HeaderText = L"RAM Usage";
			this->Ram_Column->Name = L"Ram_Column";
			this->Ram_Column->ReadOnly = true;
			// 
			// Disc_column
			// 
			this->Disc_column->Frozen = true;
			this->Disc_column->HeaderText = L"DISC Usage";
			this->Disc_column->Name = L"Disc_column";
			this->Disc_column->ReadOnly = true;
			// 
			// Gpu_column
			// 
			this->Gpu_column->Frozen = true;
			this->Gpu_column->HeaderText = L"GPU Usage";
			this->Gpu_column->Name = L"Gpu_column";
			this->Gpu_column->ReadOnly = true;
			// 
			// Net_column
			// 
			this->Net_column->Frozen = true;
			this->Net_column->HeaderText = L"NET Usage";
			this->Net_column->Name = L"Net_column";
			this->Net_column->ReadOnly = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 677);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Advanced System Monitor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}

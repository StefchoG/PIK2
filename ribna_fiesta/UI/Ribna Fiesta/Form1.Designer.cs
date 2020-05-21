namespace Ribna_Fiesta
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.monthlyBtn = new System.Windows.Forms.Button();
            this.LargestBtn = new System.Windows.Forms.Button();
            this.form1BindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            ((System.ComponentModel.ISupportInitialize)(this.form1BindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // monthlyBtn
            // 
            this.monthlyBtn.Location = new System.Drawing.Point(656, 12);
            this.monthlyBtn.Name = "monthlyBtn";
            this.monthlyBtn.Size = new System.Drawing.Size(132, 23);
            this.monthlyBtn.TabIndex = 0;
            this.monthlyBtn.Text = "Monthly Expense";
            this.monthlyBtn.UseVisualStyleBackColor = true;
            this.monthlyBtn.Click += new System.EventHandler(this.button1_Click);
            // 
            // LargestBtn
            // 
            this.LargestBtn.Location = new System.Drawing.Point(656, 41);
            this.LargestBtn.Name = "LargestBtn";
            this.LargestBtn.Size = new System.Drawing.Size(131, 23);
            this.LargestBtn.TabIndex = 1;
            this.LargestBtn.Text = "Largerst Expense";
            this.LargestBtn.UseVisualStyleBackColor = true;
            this.LargestBtn.Click += new System.EventHandler(this.button2_Click);
            // 
            // form1BindingSource
            // 
            this.form1BindingSource.DataSource = typeof(Ribna_Fiesta.Form1);
            // 
            // comboBox1
            // 
            this.comboBox1.DataSource = this.form1BindingSource;
            this.comboBox1.DisplayMember = "Text";
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(432, 104);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(121, 24);
            this.comboBox1.TabIndex = 2;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.LargestBtn);
            this.Controls.Add(this.monthlyBtn);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.form1BindingSource)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button monthlyBtn;
        private System.Windows.Forms.Button LargestBtn;
        private System.Windows.Forms.BindingSource form1BindingSource;
        private System.Windows.Forms.ComboBox comboBox1;
    }
}


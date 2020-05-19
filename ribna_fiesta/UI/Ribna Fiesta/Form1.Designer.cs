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
            this.monthlyBtn = new System.Windows.Forms.Button();
            this.LargestBtn = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // monthlyBtn
            // 
            this.monthlyBtn.Location = new System.Drawing.Point(594, 144);
            this.monthlyBtn.Name = "monthlyBtn";
            this.monthlyBtn.Size = new System.Drawing.Size(132, 23);
            this.monthlyBtn.TabIndex = 0;
            this.monthlyBtn.Text = "Monthly Expense";
            this.monthlyBtn.UseVisualStyleBackColor = true;
            this.monthlyBtn.Click += new System.EventHandler(this.button1_Click);
            // 
            // LargestBtn
            // 
            this.LargestBtn.Location = new System.Drawing.Point(126, 144);
            this.LargestBtn.Name = "LargestBtn";
            this.LargestBtn.Size = new System.Drawing.Size(131, 23);
            this.LargestBtn.TabIndex = 1;
            this.LargestBtn.Text = "Largerst Expense";
            this.LargestBtn.UseVisualStyleBackColor = true;
            this.LargestBtn.Click += new System.EventHandler(this.button2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.LargestBtn);
            this.Controls.Add(this.monthlyBtn);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button monthlyBtn;
        private System.Windows.Forms.Button LargestBtn;
    }
}


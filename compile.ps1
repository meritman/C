Add-Type -AssemblyName "System.Windows.Forms"
Add-Type -TypeDefinition @"
using System;
using System.Windows.Forms;

namespace CompilerApp
{
    public class MyForm : Form
    {
        public MyForm()
        {
            this.Text = "C Compiler";
            this.Width = 300;
            this.Height = 200;
            
            // Create a Label
            Label label = new Label();
            label.Text = "Enter C file name (without extension):";
            label.Location = new System.Drawing.Point(10, 20);
            this.Controls.Add(label);
            
            // Create a TextBox
            TextBox textbox = new TextBox();
            textbox.Location = new System.Drawing.Point(10, 50);
            this.Controls.Add(textbox);
            
            // Create a Button
            Button button = new Button();
            button.Text = "Compile";
            button.Location = new System.Drawing.Point(10, 80);
            button.Click += (sender, e) =>
            {
                string fileName = textbox.Text;
                if (!string.IsNullOrEmpty(fileName))
                {
                    string filePath = $"{fileName}.c";
                    if (System.IO.File.Exists(filePath))
                    {
                        // Compile the file
                        var compileProcess = System.Diagnostics.Process.Start("gcc", $"{filePath} -o {fileName}.exe");
                        compileProcess.WaitForExit();
                        
                        // Check if the .exe was created and run it
                        if (System.IO.File.Exists($"{fileName}.exe"))
                        {
                            System.Diagnostics.Process.Start($"{fileName}.exe");
                        }
                        else
                        {
                            MessageBox.Show("Compilation failed!");
                        }
                    }
                    else
                    {
                        MessageBox.Show("File not found!");
                    }
                }
            };
            this.Controls.Add(button);
        }
    }
}

[CompilerApp.MyForm]::new().ShowDialog()
"@

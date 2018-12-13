
package calculator;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.Font;
import javax.swing.SwingConstants;

public class roshni {

	private JFrame frame;
	private JTextField textField;
	private JTextField btn9;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					roshni window = new roshni();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public roshni() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 281, 402);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);

		textField = new JTextField();
		textField.setBounds(10, 11, 240, 38);
		frame.getContentPane().add(textField);
		textField.setColumns(10);

		JButton btn7 = new JButton("7");
		btn7.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {


			}
		});
		btn7.setBounds(10, 54, 55, 50);
		btn7.setFont(new Font("Tahoma", Font.BOLD, 17));
		frame.getContentPane().add(btn7);

		JButton btn8 = new JButton("8");
		btn8.setFont(new Font("Tahoma", Font.BOLD, 17));
		btn8.setBounds(70, 54, 55, 50);
		frame.getContentPane().add(btn8);

		JButton btnPlus = new JButton("9");
		btnPlus.setFont(new Font("Tahoma", Font.BOLD, 17));
		btnPlus.setBounds(135, 54, 55, 50);
		frame.getContentPane().add(btnPlus);

		JButton btnNewButton = new JButton("+");
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 17));
		btnNewButton.setBounds(195, 54, 55, 50);
		frame.getContentPane().add(btnNewButton);

		JButton btn4 = new JButton("4");
		btn4.setFont(new Font("Tahoma", Font.BOLD, 17));
		btn4.setBounds(10, 115, 55, 50);
		frame.getContentPane().add(btn4);

		JButton btn5 = new JButton("5");
		btn5.setFont(new Font("Tahoma", Font.BOLD, 17));
		btn5.setBounds(70, 115, 55, 50);
		frame.getContentPane().add(btn5);

		JButton btn6 = new JButton("6");
		btn6.setFont(new Font("Tahoma", Font.BOLD, 17));
		btn6.setBounds(135, 115, 55, 50);
		frame.getContentPane().add(btn6);

		JButton btnMi = new JButton("-");
		btnMi.setFont(new Font("Tahoma", Font.BOLD, 17));
		btnMi.setBounds(195, 115, 55, 50);
		frame.getContentPane().add(btnMi);

		JButton btn1 = new JButton("1");
		btn1.setFont(new Font("Tahoma", Font.BOLD, 17));
		btn1.setBounds(10, 181, 55, 50);
		frame.getContentPane().add(btn1);

		JButton btn2 = new JButton("2");
		btn2.setFont(new Font("Tahoma", Font.BOLD, 17));
		btn2.setBounds(70, 181, 55, 50);
		frame.getContentPane().add(btn2);

		JButton btn3 = new JButton("3");
		btn3.setFont(new Font("Tahoma", Font.BOLD, 17));
		btn3.setBounds(135, 181, 55, 50);
		frame.getContentPane().add(btn3);

		JButton button_7 = new JButton("*");
		button_7.setFont(new Font("Tahoma", Font.BOLD, 17));
		button_7.setBounds(195, 181, 55, 50);
		frame.getContentPane().add(button_7);

		JButton btn0 = new JButton("0");
		btn0.setFont(new Font("Tahoma", Font.BOLD, 17));
		btn0.setBounds(10, 247, 55, 50);
		frame.getContentPane().add(btn0);

		JButton btnDi = new JButton("/");
		btnDi.setFont(new Font("Tahoma", Font.BOLD, 17));
		btnDi.setBounds(70, 247, 55, 50);
		frame.getContentPane().add(btnDi);

		JButton btnDot = new JButton(".");
		btnDot.setFont(new Font("Tahoma", Font.BOLD, 17));
		btnDot.setBounds(135, 247, 55, 50);
		frame.getContentPane().add(btnDot);

		JButton btnEqual = new JButton("=");
		btnEqual.setFont(new Font("Tahoma", Font.BOLD, 17));
		btnEqual.setBounds(195, 247, 55, 50);
		frame.getContentPane().add(btnEqual);

		JButton btnAc = new JButton("AC");
		btnAc.setFont(new Font("Tahoma", Font.BOLD, 17));
		btnAc.setBounds(10, 308, 180, 44);
		frame.getContentPane().add(btnAc);

		JButton btnCancel = new JButton("C");
		btnCancel.setFont(new Font("Tahoma", Font.BOLD, 17));
		btnCancel.setBounds(195, 306, 55, 48);
		frame.getContentPane().add(btnCancel);


	}
}

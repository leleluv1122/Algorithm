package practice;

public class Format01 {
	public static void main(String[] args) {
		String s;

		s = String.format("Integer : %d\n", 15);
		System.out.print(s);

		s = String.format("Floating point number with 3 decimal digits: %.3f\n", 1.21312939123);
		System.out.print(s);

		s = String.format("Floating point number with 8 decimal digits: %.8f\n\n", 1.21312939123);
		System.out.print(s);

		s = String.format("String: %s, integer: %d, float: %.6f\n\n", "Hello World", 89, 9.231435);
		System.out.print(s);

		s = String.format("%-12s%-12s%s\n", "Column 1", "Column 2", "Column3");
		System.out.print(s);

		s = String.format("%-12d%-12d%07d\n\n", 15, 12, 5);
		System.out.print(s);

		s = String.format("%-8s%12s%12s\n", "Column 1", "Column 2", "Column3");
		System.out.print(s);

		s = String.format("%-8.5s%12d%12.4f\n\n", "Hello World", 1234567, 3.141592);
		System.out.print(s);

		s = String.format("%-12s%-12s\n", "Column 1", "Column 2");
		System.out.print(s);

		s = String.format("%-12.5f%.20f", 12.23429837482, 9.10212023134);
		System.out.print(s);

	}

}

package fibo;

import java.util.Scanner;

public class ffbb {

	static void fib(int n) {
		int[] a0 = new int[Math.max(2, n + 1)];
		int[] a1 = new int[Math.max(2, n + 1)];
		a0[0] = 1;
		a0[1] = 0;
		a1[0] = 0;
		a1[1] = 1;
		for (int i = 2; i <= n; ++i) {
			a0[i] = a0[i - 1] + a0[i - 2];
			a1[i] = a1[i - 1] + a1[i - 2];
		}
		System.out.printf("%d %d\n", a0[n], a1[n]);
	}

	public static void main(String[] args) {
		try (Scanner scanner = new Scanner(System.in)) {
			int count = scanner.nextInt();
			for (int i = 0; i < count; ++i) {
				int n = scanner.nextInt();
				fib(n);
			}
		}
	}
}

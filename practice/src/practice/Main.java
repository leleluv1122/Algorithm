/*
 * package practice;
 * 
 * public class Main {
 * 
 * public static void main(String[] args) { String s0 = "hello world"; String s1
 * = "HELLO WORLD"; String s2 = s0; String s3 = s1.toLowerCase();
 * 
 * boolean b0 = (s0 == s2); boolean b1 = (s0 == s3); boolean b2 = s0.equals(s2);
 * boolean b3 = s0.equals(s3); System.out.printf("%b %b %b %b\n", b0, b1, b2,
 * b3);
 * 
 * boolean b4 = s0.equals(s1); boolean b5 = s0.equalsIgnoreCase(s1);
 * System.out.printf("%b %b\n", b4, b5); } }
 */

/*
 * package practice;
 * 
 * public class Main {
 * 
 * static void swap(String a, String b) { String temp = a; a = b; b = temp; }
 * 
 * public static void main(String[] args) { String s0 = "hello world"; String s1
 * = s0.substring(0, 5); String s2 = s0.substring(6); String s3 = s1 + " " + s2;
 * String s4 = s0.toUpperCase(); System.out.printf("%s %s %s %s\n", s1, s2, s3,
 * s4);
 * 
 * swap(s1, s2); //swap이 완료되면 swap메소드 메모리가 제거되서 변화없다
 * System.out.printf("%s %s\n", s1, s2); } }
 */

/*
 * package practice;
 * 
 * public class Main {
 * 
 * public static void main(String[] args) { String s = "hello world\n"; String t
 * = "Hello World\n";
 * 
 * for (int i = 0; i < s.length(); ++i) System.out.printf("%c", s.charAt(i));
 * 
 * System.out.println(s.compareTo(t) > 0);
 * System.out.println(s.compareToIgnoreCase(t) == 0);
 * System.out.println(s.contains("hello"));
 * System.out.println(s.endsWith("rld\n")); System.out.println(s.equals(t) ==
 * false); System.out.println(s.equalsIgnoreCase(t));
 * System.out.println(s.isEmpty() == false); System.out.println(s.indexOf("o")
 * == 4); System.out.println(s.lastIndexOf("o") == 7);
 * System.out.println(s.length() == 12);
 * System.out.println(s.startsWith("hell"));
 * 
 * String[] a = s.split(" "); System.out.println(a.length == 2);
 * System.out.println(a[0].equals("hello"));
 * 
 * System.out.println(s.substring(0, 5).equals("hello"));
 * System.out.println(t.toLowerCase().equals(s)); } }
 */

/*
 * package practice;
 * 
 * public class Main { public static void main(String[] args) { GoodMorning g =
 * new GoodMorning(); System.out.println("hello world");
 * System.out.println(g.hello()); } }
 * 
 * class GoodMorning { public String hello() { return "good morning"; } }
 */
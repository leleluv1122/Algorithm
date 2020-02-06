package practice;

class Family {
	Person father, mother;
	Person[] children;

	public Family() {
		father = new Person("아빠", 45);
		mother = new Person("엄마", 36);
		children = new Person[3];
		children[0] = new Person("아들1", 12);
		children[1] = new Person("아들2", 9);
		children[2] = new Person("딸1", 7);
	}

}

public class Person02 {

	static Family family;

	public static void main(String[] args) {
		family = new Family();
	}
}

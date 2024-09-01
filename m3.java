package collection.coll;

import java.util.*;

class m3
{
	int age=0;
	String name="hetal";
	m3(int age,String name)
	{
		this.age=age;
		this.name=name;
	}
}
public class m4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		m3 obj=new m3(12,"puja");
		HashSet<m3>obj1=new LinkedHashSet();
		
		for(m3 pj:obj1)
		{
			System.out.println(pj.age);
		}

	}

}

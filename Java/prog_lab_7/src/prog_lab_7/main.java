package prog_lab_7;

public class main {
	public static void main(String args[]) {
		final int a = 4, b = 2 , c =3;
		int i, j;
		point[] ptmas1 = new point[a];//������������� ����������� ������� ������������ a = 4
        for (i = 0; i < a; i++)
        {
        	ptmas1[i] = new point();
        }
    	System.out.printf("����� ����������� �������:\n");
        for (i = 0; i < a; i++)//����� ����������� �������
        {
        	ptmas1[i].vivod();
        	System.out.printf("\t");
        }
        point[][] ptmas2 = new point[b][c];//������������� ���������� ������� ������������ b = 3 �� c =2
        for (i = 0; i < b; i++) {
            for (j = 0; j < c; j++) {
            	ptmas2[i][j] = new point();
            }
        }
    	System.out.printf("\n����� ���������� �������:\n");
        for (i = 0; i < b; i++) {//����� ���������� �������
            for (j = 0; j < c; j++) {
            	ptmas2[i][j].vivod();
            	System.out.printf("\t");
            }
        	System.out.printf("\n");
        }
   }
}
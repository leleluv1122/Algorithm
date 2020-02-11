import java.util.Calendar;

public class CalendarPrint {
	
	// Calendar 인스턴스 생성
	Calendar cal = Calendar.getInstance();
	
	// 요일 표시 헤더
	private String[] calHeader = {"일","월","화","수","목","금","토"};
	// 날짜 데이터 배열
	private String[][] calDate = new String[6][7];

	private int width=calHeader.length; // 배열 가로 넓이
	private int startDay;   // 월 시작 요일
	private int lastDay;    // 월 마지막 날짜
	private int inputDate=1;  // 입력 날짜

	// 생성자 : 데이터 생성
	public CalendarPrint(int year, int month) throws Exception{
		
		// 입력 month(월) 은 1~12 사이의 값이다.
		if(month<1 || month>12){
			System.out.println("월은 1~12 사이의 숫자입니다.");
			throw new Exception();
		}else{
			
			// Calendar에 년,월,일 셋팅
			cal.set(Calendar.YEAR, year);
			cal.set(Calendar.MONTH, month-1);
			cal.set(Calendar.DATE, 1);
			
			startDay = cal.get(Calendar.DAY_OF_WEEK); // 월 시작 요일 
			lastDay = cal.getActualMaximum(Calendar.DATE); // 월 마지막 날짜
			
			// 2차 배열에 날짜 입력
			int row = 0;
			for(int i=1; inputDate<=lastDay; i++){
				
				// 시작 요일이 오기전에는 공백 대입
				if(i<startDay) calDate[row][i-1]="";
				else{
					// 날짜 배열에 입력
					calDate[row][(i-1)%width]=Integer.toString(inputDate);
					inputDate++;
					
					// 가로 마지막 열에 오면 행 바꿈
					if(i%width==0) row++;
				}		
			}
		}
	}

	// 달력 출력
	public void printCal(){
		
		// 달력 헤더 출력 "일월화수목금토"
		for(int i=0; i<width; i++){
			System.out.print(calHeader[i]+"\t");
		}
		System.out.println();
		
		// 날짜 배열 출력
		int row=0;
		for(int j=1 ; j<lastDay+startDay; j++){
			
			System.out.print(calDate[row][(j-1)%width]+"\t");
			
			if((j-1)%width==width-1){
				System.out.println();
				row++;
			}
			
		}
	}

	public String[] getCalHeader() {
		return calHeader;
	}

	public void setCalHeader(String[] calHeader) {
		this.calHeader = calHeader;
	}

	public String[][] getCalDate() {
		return calDate;
	}

	public void setCalDate(String[][] calDate) {
		this.calDate = calDate;
	}

	public int getWidth() {
		return width;
	}

	public void setWidth(int width) {
		this.width = width;
	}

	public int getLastDay() {
		return lastDay;
	}

	public void setLastDay(int lastDay) {
		this.lastDay = lastDay;
	}

	public int getStartDay() {
		return startDay;
	}

	public void setStartDay(int startDay) {
		this.startDay = startDay;
	}
	
}

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 현재 시각 입력 받기
        int currentHour = scanner.nextInt();
        int currentMinute = scanner.nextInt();

        // 요리 시간 입력 받기
        int cookingTime = scanner.nextInt();

        // 요리가 끝나는 시각 계산
        int endHour = (currentHour + (currentMinute + cookingTime) / 60) % 24;
        int endMinute = (currentMinute + cookingTime) % 60;

        // 결과 출력
        System.out.println(endHour + " " + endMinute);

        scanner.close();
    }
}

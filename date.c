#include <stdio.h>

int main(void) {
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  
  // Split the user input into 3 variables for the date
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
   switch (month) {  
    case 1:  
      printf("January ");  
      break;  
    case 2:  
      printf("February ");  
      break;  
    case 3:  
      printf("March ");  
      break;  
    case 4:  
      printf("April ");  
      break;  
    case 5:  
      printf("May ");  
      break;  
    case 6:  
      printf("June ");  
      break;  
    case 7:  
      printf("July ");  
      break;  
    case 8:  
      printf("August ");  
      break;  
    case 9:  
      printf("September ");  
      break;  
    case 10:  
      printf("October ");  
      break;  
    case 11:
      printf("November ");
      break;
    case 12:  
     printf("December ");
     break;
   }

  // Print the day
    switch (day) {
      case 1:
        printf("1");
        break;
      case 2:
        printf("2");
        break;
      case 3:
        printf("3");
        break;
      case 4:
        printf("4");
        break;
      case 5:
        printf("5");
        break;
      case 6:
        printf("6");
        break;
      case 7:
        printf("7");
        break;
      case 8:
        printf("8");
        break;
      case 9:
        printf("9");
        break;
      case 10:
        printf("10");
        break;
      case 11:
        printf("11");
        break;
      case 12:
        printf("12");
        break;
      case 13:
        printf("13");
        break;
      case 14:
        printf("14");
        break;
      case 15:
        printf("15");
        break;
      case 16:
        printf("16");
        break;
      case 17:
        printf("17");
        break;
      case 18:
        printf("18");
        break;
      case 19:
        printf("19");
        break;
      case 20:
        printf("20");
        break;
      case 21:
        printf("21");
        break;
      case 22:
        printf("22");
        break;
      case 23:
        printf("23");
        break;
      case 24:
        printf("24");
        break;
      case 25:
        printf("25");
        break;
      case 26:
        printf("26");
        break;
      case 27:
        printf("27");
        break;
      case 28:
        printf("28");
        break;
      case 29:
        printf("29");
        break;
      case 30:
        printf("30");
        break;
      case 31:
        printf("31");
        break;  
  }

  // Print the suffix for a given day
  switch (day) {
    case 1:
      printf("st");
      break;
    case 2:
      printf("nd");
      break;
    case 3:
      printf("rd");
      break;
    case 4:
      printf("th");
      break;
    case 5:
      printf("th");
      break;
    case 6:
      printf("th");
      break;
    case 7:
      printf("th");
      break;
    case 8:
      printf("th");
      break;
    case 9:
      printf("th");
      break;
    case 10:
      printf("th");
      break;
    case 11:
      printf("th");
      break;
    case 12:
      printf("th");
      break;
    case 13:
      printf("th");
      break;
    case 14:
      printf("th");
      break;
    case 15:
      printf("th");
      break;
    case 16:
      printf("th");
      break;
    case 17:
      printf("th");
      break;
    case 18:
      printf("th");
      break;
    case 19:
      printf("th");
      break;
    case 20:
      printf("th");
      break;
    case 21:
      printf("st");
      break;
    case 22:
      printf("nd");
      break;
    case 23:
      printf("rd");
      break;
    case 24:
      printf("th");
      break;
    case 25:
      printf("th");
      break;
    case 26:
      printf("th");
      break;
    case 27:
      printf("th");
      break;
    case 28:
      printf("th");
      break;
    case 29:
      printf("th");
      break;
    case 30:
      printf("th");
      break;
    case 31:
      printf("st");
      break;
  }

  // Print the year
  printf(", 2023\n");
  
  return 0;
}

char* ones2word(int ones)
{

    char* num1 = "";

    switch (ones) {
       case 1:
            num1 = "One";
            break;
        case 2:
            num1 = "Two";
            break;
       case 3:
            num1 = "Three";
            break;
       case 4:
            num1 = "Four";
            break;
       case 5:
            num1 = "Five";
            break;
       case 6:
            num1 = "Six";
            break;
       case 7:
            num1 = "Seven";
            break;
       case 8:
            num1 = "Eight";
            break;
       case 9:
            num1 = "Nine";
            break;
       case 12:
            num1 = "Twelve";
            break;
    }

   return num1;
}

char* teens2word(int teens) 
{
    char* num2 = "";
    switch (teens) { 
       case 11:
            num2 = "Eleven";
            break;
       case 12:
            num2 = "Twelve";
            break;
      case 13:
            num2 = "Thirteen";
            break;
      case 14:
            num2 = "Fourteen";
            break;
      case 15:
            num2 = "Fifteen";
            break;
      case 16:
            num2 = "Sixteen";
            break;
      case 17:
            num2 = "Seventeen";
            break;
      case 18:
            num2 = "Eighteen";
            break;
      case 19:
            num2 = "Nineteen";
            break;
    }

    return num2;
}

char* tens2word(int tens) 
{

   char* num3 = "";

    switch (tens) {
        case 0: 
            num3 = "o'Clock";
            break;
        case 10:
            num3 = "Ten";
            break;
        case 20:
            num3 = "Twenty";
            break;
        case 30:
            num3 = "Thirty";
            break;
        case 40:
            num3 = "Forty";
            break;
        case 50:
            num3 = "Fifty";
            break;
    }

   return num3;
}

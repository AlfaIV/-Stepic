// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//

int power(int x, unsigned p) {
    int answer;
    if (p == 0){
      answer = 1;
    } else if(p == 1){
      answer = x;
    }else{
      answer = 1;
      while(p != 0){
        answer *= x;
        p -= 1;
      }
    }
    /* считаем answer */
    return answer;
}
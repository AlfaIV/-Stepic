#include <iostream>
#include <cstring>

using namespace std;

/*int my_strstr(const char *text, const char *pattern)
{
  int pos = 0;
  int len = 0;
  //char * start_search = 0;
  //*start_search = *pattern;
  while (* text != '\0' || * pattern == '\0'){
    //cout << * text;
    //cout << * pattern << endl;
    //cout << (* text == * pattern);
    
    if(* text == * pattern || * pattern == '\0'){

      //cout << len;
      if (* pattern == '\0'){
        return pos;
      }

      ++len;
      ++pattern;
    }
    else if (len){
      pattern = pattern - len;
      len = 0;
      //cout << len << *pattern <<  endl;
    }

    ++pos;
    ++text;
    
  }

  if(* text == * pattern){
    ++len;
    ++pattern;
    //cout << len;
    if (* pattern == '\0'){
      return pos;
    }
  }

  return -1;
}*/

int my_strstr(const char *text, const char *pattern)
{
  int pos = 0;
  unsigned len = 0;
  int in_pos = -1;
  do{
    //cout << 0 << *text << " " << *pattern << endl;
    //cout << 0;
    if (*pattern == '\0'){return 0;}
    if (*text == *pattern){
      //cout << 1;
      if(in_pos == -1){in_pos = pos;} ;
      ++pattern;
      if(*pattern == '\0'){
        return in_pos;
      }
      ++len;
    }else if(len){
      text -= len;
      pos = in_pos;
      in_pos = -1;
      //cout << 2;
      pattern -= len;
      len = 0;
    }else if(*text  == '\0'){
      //cout << 3;
      return -1;
    }


    ++pos;
    ++text;
  }while(*text != '\0');
  return -1;
}

void my_strcat(char *to, const char *from){
    /* ... */
	while (* from != '\0'){
    //cout << to;
    if (* to == '\0'){
      //cout << endl << * from;
      * to = * from ;
      ++ from;
    }else{
      ++ to;
    }
    
	
	} 
}

unsigned my_strlen(const char *str){
	unsigned len = 0; 
    /* ... */
	while(* str != '\0'){
		cout << * str;
		++ str;
		++ len;
    
	}
  	cout << endl << len << endl;
	return len;
}

int First_test(){
// Test 1
  const char* str1 = "How do you do";
  if (strlen(str1) == 13)
      cout << "Test 1 passed" << endl;
  else cout << "Test 1 failed" << endl;
  // Test 2
  const char* str2 = "";
  if (strlen(str2) == 0)
      std::cout << "Test 2 passed" << std::endl;
  else std::cout << "Test 2 failed" << std::endl;
  // Test 3
  const char* str3 = "This is stepik.org";
  if (strlen(str3) == 18)
      std::cout << "Test 3 passed" << std::endl;
  else std::cout << "Test 3 failed" << std::endl;
  const char* str4 = "Russian Federation";
  if (strlen(str4) == 18)
      std::cout << "Test 4 passed" << std::endl;
  else std::cout << "Test 4 failed" << std::endl;
  const char* str5 = "Russia";
  if (strlen(str5) == 6)
      std::cout << "Test 5 passed" << std::endl;
  else std::cout << "Test 5 failed" << std::endl;
  return 0;
}

int Second_Test(){
// Test 1
  char to1[100] = "Hello, ";
  char from1[100] = "World!";
  strcat(to1, from1);
  if (strcmp(to1, "Hello, World!") == 0)
      std::cout << "Test 1 passed" << std::endl;
  else std::cout << "Test 1 failed" << std::endl;

  // Test 2
  char to2[100] = "Stepik.org";
  char from2[100] = "";
  strcat(to2, from2);
  if (strcmp(to2, "Stepik.org") == 0)
      std::cout << "Test 2 passed" << std::endl;
  else std::cout << "Test 2 failed" << std::endl;

  // Test 3
  char to3[100] = "Apple, or";
  char from3[100] = "ange";
  strcat(to3, from3);
  if (strcmp(to3, "Apple, orange") == 0)
      std::cout << "Test 3 passed" << std::endl;
  else std::cout << "Test 3 failed" << std::endl;

  // Test 4
  char to4[100] = "";
  char from4[100] = "Russian Federation";
  strcat(to4, from4);
  if (strcmp(to4, "Russian Federation") == 0)
      std::cout << "Test 4 passed" << std::endl;
  else std::cout << "Test 4 failed" << std::endl;

  // Test 5
  char to5[100] = "Alexa";
  char from5[100] = "ndr Pushkin";
  strcat(to5, from5);
  if (strcmp(to5, "Alexandr Pushkin") == 0)
      std::cout << "Test 5 passed" << std::endl;
  else std::cout << "Test 5 failed" << std::endl;

  // Test 6
  char to6[100] = "Harry Potter and the";
  char from6[100] = " Prisoner of Azkaban";
  strcat(to6, from6);
  if (strcmp(to6, "Harry Potter and the Prisoner of Azkaban") == 0)
      std::cout << "Test 6 passed" << std::endl;
  else std::cout << "Test 6 failed" << std::endl;

  // Test 7
  char to7[100] = "";
  char from7[100] = " Ok";
  strcat(to7, from7);
  if (strcmp(to7, " Ok") == 0)
      std::cout << "Test 7 passed" << std::endl;
  else std::cout << "Test 7 failed" << std::endl;

  // Test 8
  char to8[100] = " ";
  char from8[100] = "Help";
  strcat(to8, from8);
  if (strcmp(to8, " Help") == 0)
      std::cout << "Test 8 passed" << std::endl;
  else std::cout << "Test 8 failed" << std::endl;

  return 0;
}
  
void Third_Test(){
  struct test{
      int ret_value;
      const char *text;
      const char *pattern;
  };
  test tests[] = {
          {0, "", ""}, //0
          {0, "a", ""}, //1
          {0, "a", "a"}, //2
          {-1, "a", "b"}, //3
          {0, "aa", ""}, //4
          {0, "aa", "a"}, //5
          {0, "ab", "a"}, //6
          {1, "ba", "a"}, //7
          {-1, "bb", "a"}, //8
          {0, "aaa", ""}, //9
          {0, "aaa", "a"}, //10
          {1, "abc", "b"}, //11
          {2, "abc", "c"}, //12
          {-1, "abc", "d"}, //13
          {-1, "a", "aa"}, //14
          {-1, "a", "ba"}, //15
          {-1, "a", "ab"}, //16
          {-1, "a", "bb"}, //17
          {-1, "a", "aaa"}, //18
          {-1, "aa", "aaa"}, //19
          {0, "aaa", "aaa"}, //20
          {0, "aaab", "aaa"}, //21
          {1, "baaa", "aaa"}, //22
          {1, "baaaa", "aaa"}, //23
          {1, "baaab", "aaa"}, //24
          {-1, "abd", "abc"}, //25
          {2, "ababc", "abc"}, //26
          {3, "abdabc", "abc"}, //27
          {-1, "", "a"}, //28
          {2, "asasaf", "asaf"}, //29
          {2, "ababac", "abac"} //30
  };
  for (int i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
    int ret = my_strstr(tests[i].text, tests[i].pattern);
    (tests[i].ret_value == ret) ? cout << "OK" : cout << "Failed";
     cout << " : " << i << " (" << tests[i].ret_value << " : " << ret << ")" << endl;
  }
}

int main(){
  //my_strstr("abcdt", "abc");
  Third_Test();
  return 0;
}

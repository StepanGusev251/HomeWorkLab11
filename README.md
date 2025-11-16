# Домашняя работа Лаб 11
## 1. Условие задачи
Вариант 6    
С одномерным массивом, состоящим из n вводимых с клавиатуры
положительных и отрицательных целых чисел выполнить следующие
вычисления:    
![Блок-схема алгоритма](11.png)
## 2. Контрольный пример
  Массив состоит из 7 чисел (n= 7): 1 2 3 -7 8 4 -2  
  Числа между отрицательными числами (-7 и -2): 8 4    
  Среднее значение чисел: (8+4)/2=12/2=6
### Алгоритм
1. **Начало**
2. Объявление переменных и задаем исходные числа:
   - int n
   - int a[100]
   - int i
   - int neg1 = -1, neg2 = -1
   - int sum = 0, count = 0
3. Ввод данных:
   - n
   - a[i]
3. Цикл for:
   - for (i = 0; i < n; i++) {
    scanf("%d", &a[i]); }
4. Цикл for с условиями:
   - for (i = 0; i < n; i++) {   
    if (a[i] < 0) {   
        if (neg1 == -1) {   
            neg1 = i;  }     
        else {
            neg2 = i;      
            break;    }     
5. Цикл for для поиска количества соличества и суммы:
   - for (i = neg1 + 1; i < neg2; i++) {
    sum += a[i];
    count++; }
5. Вывод результата:
   - (float)sum / count
5. **Конец**
### Блок-схема
![Блок-схема алгоритма](111.png)

[Ссылка](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=111.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%E2%80%94%201%22%20id%3D%22YBHr6eNzSqN0wLppfZb6%22%3E3Vxtj5s4EP41ke4%2B7ArbmJePm822p16rW2l1avuRTZyEisQ5QnaT%2FvozYAewTWAT3pKqyoKxwYxnHs88HjNCj6v959DbLL%2FRGQlG0JjtR2gyghBgx2R%2F4pJDWuI4KC1YhP6MV8oKXvzfhBcavHTnz8i2UDGiNIj8TbFwStdrMo0KZV4Y0vditTkNik%2FdeAuiFLxMvUAt%2Fe7PoiV%2FC2hn5X8Rf7EUTwaWm15ZeaIyf5Pt0pvR91wRehqhx5DSKD1a7R9JEAtPyCVt96nk6rFjIVlHdRqs8Pzb5PPf%2FvyXH1iQ3kXRa3THR%2BfNC3b8hXlno4OQAJkxgfBTGkZLuqBrL3jKSsch3a1nJH6Mwc6yOl8p3bBCwAp%2FkSg68NH1dhFlRctoFfCr6qvwt9vSXTglJ%2FrPuxt54YJEJ%2BpxpYvfJfcALqjPhK5IFB5YhZAEXuS%2FFQff4zq0ONbLxMwOuKQ%2FIHWoSp2Jzp3Ev2NjxGTi2OKY%2FY6T3yd1ZIKAmUE8Au9LPyIvGy%2BR1TuzxJryfSNhRPYnJcKvIpOr8XtmBUCo9jJnAaJe40KzrlxVUU1VxYNSVaSRuhWw%2Fo%2FnlEmAAbsfJuXWf7sYycaJyI5nhfERhbHW%2BQxi77zAX6xH6CHuxHpJQj9tkjW2Fvxv10%2BMzTExyjHkxhf%2FMrQ01iP4GAt6hMfAMEZ4InrHxJt2sNhppVjSWTYtbOJDplJeEJCALkJvxSpuWOfYEJJQvvacXaiy%2B7m%2FJ2JObQwHuH7y%2BdzSwALoEhacK4cFXBMW7EHBAi6FhZn%2FJnTdT8x1TRasF0ZSy7gDqfmwQpgvLNhL7hald93uVsf2RnrPKRvEKFdYfk9JPzqYPYVJcKsBSGM2jsZsrLbMRnToau3Grmk37qDsxlak7ufVuHvFNIuKCeu6ee0ppsY5virFdGsqJgCD0kyg8fRiL8jkgYhuDL56ryzcL8iNO1iTKZNb4qII1%2BuBX1j5s1k6RGTr%2F%2FZek%2FvFg7ShDNmTt8Lj2K1K%2FT3hvbjaMTmtQbIVHFkC%2FtRRPhDXWcedcY%2FYv7Rt7WHgt3um6UwlqtD5fMsUQh6n41MvCCeHgeVsVMLDD94%2BOfkZn9xjcTrZ5y9ODvys1NSaswxpSAT4IfceSu4slHAtNWPeMBu6hzD0DrlqXHlLHwWBJT%2FKlPma6iZWRROEQEUTdpB2veQGpr6Px%2FdM0U8Rxxma%2FOXZ%2F%2FoQ%2FIu%2B%2FEPeD4Du536ITxMjOCFG9KrdMhJ9EFBqgFQ18tjIsYeOPK7enYGWt4p9Fe58xzGzNGbhkq5ed9uOqKuiUiOnZszqtObj6MKnPgE7w%2Bif%2BWsfBexqn8fsBtlNq%2BjWYlQPx5QbYad4I9NtZ36QnyM6rIXtpqxXeKA5NYxpLT8htXoPRbDReyiiro4weBsn%2FzsXD4aSJvYuHqhZPIpn64ccY5qfuS0V4zpdwED3dnEiAFhHwwB4j1Up2q1Jsc66xnr2EK9lsrM1XZOibIrTQBmmG%2F1jek7IWKOnouxS6DeKdoLwudAv36il0ECGftHhpqBf62gjFfpVreuKZZE0p5J20b6RRl31IQbWa2fjLMupXjbJ%2F2miEkV%2B5aiI7PsiKGJXN69oELGJeUU%2FQjenmxfrXD2oc%2BRFthKEaixaLwnXB0cZnhm4n9DOK6IM9W%2BhW9fvMwI9hzJs0DZrTByohLG5lISECgkJDNlnaYqFlADDtiooSKk%2BAMAt9000dGTxvZyarlhjSl4SoFw3nXjCnq%2BITjxpi63ziZf5TBKfaENdFNkSn6iX2zBy487lE8nej36Ieuw4Nwews6xRfPLxGaA6InBqThXIbseNk8hKR%2BYaziUrHZn1bCliBQa3iFZDVqhmel3Exl2EATIbZ%2BuYpLbYOL141LUYFQO64pEatMuh8EiWzPyfyyNZsgq0ZJWiw60aJR7SBoJG4gFhyJXqaZaoZzdEkuimlkkSKZcxNBpAGZA%2BaCVgOK4GIbvkldDt6SqsqauoJDzoSFc1y90980SlOn52BJZq16kIDEARkB4KjxxuPCb0S7tArIZl6kh2GpbJbrQmlVWXYi2TEs2p%2FTCisibx5lIYqedqAaNm4NKYnms2kdweQFlVAGXB64InU%2FWBbsLA6kzobp8TuqlZobtRYtWszNOEFhi8pSB1uSe3LSuJGe7UOKHP2dvFfc%2Fe6ladwk42XxVXAUg6EJldNm3mZGZpZCbPrs3JTMdBcSdx%2FbpN%2FuQ3%2FqkybF9qx7cXimYd871yYrM1YhPBavNwqrrZKnhm1N008LZbf3qSveOMujhullGvnsZKZqeOmDtps6V7Lp8uL3%2B6tqQBLbul5s0RFiZ3tCv9G3zpYvtlBjk8wqL9xBazksC4hsQWcxhBd%2FuJLdUm1E7SmWbTHDBlhG1u11zxQWJePrFnTt%2Bz87a%2FASXtu%2BWMFVN1Om82sKqkI64hY8XUfX6k6PHqM1gSN7jPeEtRde1eiC6zWMw6K9jDzWJpErq72RUHkDyW52aaAFQz9fjiVBPR5XZXtVVikX9vBo6TUyNbBlG%2BT8M%2FQ5MmpjT3%2FZkLrV0Wo4Ze6TZfBWu3QgwknQfA%2FuXzMVLgCvJ5ylCtn3wecIzuL03oAaAl91cBP9HldsFvGBFUfcWrZB1w3W%2BswZIQuBvWAauswx%2FzgHrRn2Ly%2BTQ6fuVMGpDuvyLYdH6Qqf3yVDP5Qew0%2B85uaifZ14rR0%2F8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## 2. Реализация программы:
      #include <stdio.h>
      #define _CRT_SECURE_NO_DEPRECATE
      #include <stdlib.h>
      #include <locale.h>
      #include <math.h>
      #define _USE_MATH_DEFINES
      #define _CRT_SECURE_NO_WARNINGS
      int main() {
          setlocale(LC_ALL, "RUS");
          int n;
          int a[100];
          int i;
          int neg1 = -1, neg2 = -1;
          int sum = 0, count = 0;
      
          printf("n = ");
          scanf("%d", &n);
      
          for (i = 0; i < n; i++) {
              scanf("%d", &a[i]);
          }
      
          // Поиск двух отрицательных элементов в одном цикле
          for (i = 0; i < n; i++) {
              if (a[i] < 0) {
                  if (neg1 == -1) {
                      neg1 = i;      // Первый отрицательный
                  }
                  else {
                      neg2 = i;      // Второй отрицательный
                      break;         // Выходим из цикла
                  }
              }
          }
      
          // Вычисление среднего
      
          for (i = neg1 + 1; i < neg2; i++) {
              sum += a[i];
              count++;
          }
      
          printf("Среднее: %.2f\n", (float)sum / count);
      
          return 0;
      }
    
## 3. Результаты работы программы
![Результат](res.png)

## 4. Информация о разработчике

Гусев Степан, бИЦ-251


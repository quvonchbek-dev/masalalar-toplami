# Vector

<h3>Vektorlar dinamik massivlar bilan bir xil bo'lib, element kiritilganda yoki o'chirilganda avtomatik ravishda o'lchamini o'zgartirish qobiliyatiga ega, ularni saqlash konteyner tomonidan avtomatik ravishda amalga oshiriladi. Vektor elementlari qo'shni xotiraga joylashtiriladi, shunda ularga kirish va iteratorlar yordamida o'tish mumkin. Vektorlarda ma'lumotlar oxirida kiritiladi. Oxirida kiritish differensial vaqtni oladi, chunki ba'zida massivni kengaytirish kerak bo'lishi mumkin. Oxirgi elementni olib tashlash faqat doimiy vaqtni oladi, chunki hech qanday o'lcham o'zgarmaydi. Boshida yoki o'rtasida kiritish va o'chirish vaqt bo'yicha chiziqli.</h3>

## Iteratsiya

-   **begin()**- vektordagi birinchi elementga ishora qiluvchi iteratorni qaytaradi

-   **end()**- vektordagi oxirgi elementdan keyingi nazariy elementga ishora qiluvchi iteratorni qaytaradi

-   **rbegin()**- vektordagi oxirgi elementga ishora qiluvchi teskari iteratorni qaytaradi (teskari boshlanish). U < oxirgi elementdan birinchi elementga o'tadi

-   **rend()**- vektordagi birinchi elementdan oldingi nazariy elementga ishora qiluvchi teskari iteratorni qaytaradi < (teskari uchi deb hisoblanadi)

-   **cbegin()**- vektordagi birinchi elementga ishora qiluvchi doimiy iteratorni qaytaradi.

-   **cend()** - vektordagi oxirgi elementdan keyingi nazariy elementga ishora qiluvchi doimiy iteratorni qaytaradi.

-   **crbegin()** - vektordagi oxirgi elementga ishora qiluvchi doimiy teskari iteratorni qaytaradi (teskari < boshlanish). U oxirgi elementdan birinchi elementga o'tadi

-   **crend()** - vektordagi birinchi elementdan oldingi nazariy elementga ishora qiluvchi doimiy teskari iteratorni < qaytaradi (teskari uchi deb hisoblanadi)

## Misol:

```cpp
#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v = { 1, 5, 2, 6, 8 };

    cout << "Vektor elementlari oddiy iterator bilan: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }

    cout << "\nbegin() va end() iteratorlari bilan: ";
    for (auto i = v.begin(); i < v.end(); i++) {
        cout << *i << " ";
    }

    cout << "\nrbegin() va rend() iteratorlari bilan: ";
    for (auto i = v.rbegin(); i < v.rend(); i++) {
        cout << *i << " ";
    }
    return 0;
}
```

---

# O'lcham funksiyalari

-   **size()** - vektordagi elementlar sonini qaytaradi.

-   **max_size()** - vektor ushlab turadigan maksimal elementlar sonini qaytaradi.

-   **capacity()** - Elementlar soni sifatida ifodalangan vektorga hozirda ajratilgan saqlash maydoni hajmini qaytaradi.

-   **resize(n)** - konteyner hajmini "n" elementlarni o'z ichiga oladigan qilib o'zgartiradi.

-   **empty()** - konteyner bo'sh yoki yo'qligini qaytaradi.

-   **shrink_to_fit()** - konteyner hajmini uning o'lchamiga mos keladigan darajada kamaytiradi va sig'imdan tashqari barcha elementlarni yo'q qiladi.

-   **reserve()** - vektor sig'imi kamida n ta elementni o'z ichiga olishi uchun etarli bo'lishini so'raydi.

## Misollar

```cpp
#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v = { 1, 5, 2, 6, 8, 10, 3, 22 };

    cout << "Vektorning elementlari: ";
    for (auto x : v) cout << x << " ";

    cout << "\nVektorning elementlari soni: ";
    cout << v.size();

    cout << "\nKonteyner hajmini o'zgartirdik: ";
    v.resize(6);
    for (auto x : v) cout << x << " ";

    cout << "\nempty() bilan tekshiramiz: ";
    cout << (v.empty() ? "Bo'sh" : "ELementlari bor");
    return 0;
}
```

---

# Modifikatorlar

-   **assign()** - eskilarini almashtirish orqali vektor elementlariga yangi qiymat beradi

-   **push_back()** - Elementlarni orqa tomondan vektorga suradi

-   **pop_back()** - Vektordan elementlarni orqa tomondan o'chirish yoki olib tashlash uchun ishlatiladi.

-   **insert()** - Belgilangan pozitsiyadagi elementdan oldin yangi elementlarni kiritadi

-   **erase()** - Belgilangan joydan yoki diapazondan konteynerdan elementlarni olib tashlash uchun ishlatiladi.

-   **swap()** - Bir vektor tarkibini bir xil turdagi boshqa vektor bilan almashtirish uchun ishlatiladi. O'lchamlar farq qilishi mumkin.

-   **clear()** - vektor konteynerining barcha elementlarini olib tashlash uchun ishlatiladi

-   **emplace()** - Bu joyga yangi element kiritish orqali konteynerni kengaytiradi

-   **emplace_back()** - vektor konteyneriga yangi element kiritish uchun ishlatiladi, yangi element vektor oxiriga qo'shiladi.

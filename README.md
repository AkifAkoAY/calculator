# Basit Konsol Hesap Makinesi

Bu proje, C++ ile geliştirilmiş basit bir konsol tabanlı hesap makinesi uygulamasıdır. Kullanıcıdan iki sayı ve bir işlem operatörü alarak temel matematiksel işlemleri gerçekleştirir.

## Özellikler

- Toplama (`+`)
- Çıkarma (`-`)
- Çarpma (`*`)
- Bölme (`/`)
- Kullanıcıdan art arda işlem yapma imkanı sunan sürekli döngü.

## Nasıl Çalışır?

Program başlatıldığında, kullanıcıdan ilk sayıyı girmesi istenir. Ardından ikinci sayı istenir. Daha sonra, kullanıcıdan gerçekleştirmek istediği işlemi (`+`, `-`, `*`, `/`) seçmesi istenir. Seçilen operatöre göre toplama, çıkarma, çarpma veya bölme işlemi yapılır ve sonuç ekrana yazdırılır. Program, kullanıcı manuel olarak kapatana kadar sürekli olarak yeni işlemler için girdi istemeye devam eder.

## Kurulum ve Çalıştırma

Bu projeyi derlemek ve çalıştırmak için bir C++ derleyicisine (örneğin g++) ihtiyacınız vardır.

1.  **Kaynak Kodlarını İndirin:**
    Tüm `.hpp` ve `.cpp` dosyalarını bilgisayarınıza indirin.

2.  **Derleme:**
    Terminalinizde veya komut istemcinizde aşağıdaki komutu kullanarak projeyi derleyin:

    ```bash
    g++ main.cpp calculator.cpp -o basic_calculator
    ```
    Bu komut, `basic_calculator` adında çalıştırılabilir bir dosya oluşturacaktır.

3.  **Çalıştırma:**
    Derledikten sonra, projeyi çalıştırmak için:

    ```bash
    ./basic_calculator
    ```

## Dosya Yapısı

-   `calculator.hpp`: `calculator` sınıfının sınıf tanımını (metodlar ve üye değişkenleri) içerir.
-   `calculator.cpp`: `calculator` sınıfının metodlarının implementasyonlarını (uygulamalarını) içerir. Matematiksel işlemler, girdi alma ve sonuç gösterme gibi fonksiyonlar burada tanımlıdır.
-   `main.cpp`: Programın ana giriş noktasıdır. `calculator` sınıfından bir nesne oluşturur ve ana işlem döngüsünü yönetir.

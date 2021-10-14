// Kết nối động cơ A

int enA = 8;

int in1 = 10;

int in2 = 9;

// Kết nối động cơ B

int enB = 7;

int in3 = 5;

int in4 = 4;

 

void setup()

{

      // Set tất cả các chân điều khiển động cơ thành output

                pinMode(enA, OUTPUT);

                pinMode(enB, OUTPUT);

                pinMode(in1, OUTPUT);

                pinMode(in2, OUTPUT);

                pinMode(in3, OUTPUT);

                pinMode(in4, OUTPUT);

 

                // Tắt tất cả động cơ – Trạng thái ban đầu

                digitalWrite(in1, LOW);

                digitalWrite(in2, LOW);

                digitalWrite(in3, LOW);

                digitalWrite(in4, LOW);

}

 

void loop()

{

                directionControl();

                delay(1000);

                speedControl();

                delay(1000);

}

 

// Đoạn chương trình này cho phép bạn điều khiển chiều quay của động cơ

void directionControl()

{

                // Cho động cơ quay với tốc độ tối đa

                // Giá trị của PWM thay đổi từ 0 đến 255

                analogWrite(enA, 255);

                analogWrite(enB, 255);

 

                // Tắt động cơ A và B

                digitalWrite(in1, HIGH);

                digitalWrite(in2, LOW);

                digitalWrite(in3, HIGH);

                digitalWrite(in4, LOW);

                delay(2000);

 

                // Thay đổi chiều quay của động cơ

                digitalWrite(in1, LOW);

                digitalWrite(in2, HIGH);

                digitalWrite(in3, LOW);

                digitalWrite(in4, HIGH);

                delay(2000);

 

                // Tắt tất cả các động cơ

                digitalWrite(in1, LOW);

                digitalWrite(in2, LOW);

                digitalWrite(in3, LOW);

                digitalWrite(in4, LOW);

}

 

// Đoạn chương trình điều khiển tốc độ của động cơ

void speedControl()

{

                // Khởi động các động cơ

                digitalWrite(in1, LOW);

                digitalWrite(in2, HIGH);

                digitalWrite(in3, LOW);

                digitalWrite(in4, HIGH);

 

                // Tăng tốc từ 0 đến tốc độ tối đa

                for (int i = 0; i < 256; i++)

                {

                                analogWrite(enA, i);

                                analogWrite(enB, i);

                                delay(20);

                }

 

                // Giảm tốc từ tốc độ tối đa về 0

                for (int i = 255; i >= 0; i--)

                {

                                analogWrite(enA, i);

                                analogWrite(enB, i);

                                delay(20);

                }

 

                // Tắt tất cả các động cơ

                digitalWrite(in1, LOW);

                digitalWrite(in2, LOW);

                digitalWrite(in3, LOW);

                digitalWrite(in4, LOW);

}

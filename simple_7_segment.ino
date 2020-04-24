void setup()
{// put your setup code here, to run once:
pinMode(2, OUTPUT); //a
pinMode(3, OUTPUT); //b
pinMode(4, OUTPUT); //c
pinMode(5, OUTPUT); //d
pinMode(6, OUTPUT); //e
pinMode(7, OUTPUT); //f
pinMode(8, OUTPUT); //g
pinMode(9, OUTPUT); //dot
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, 1);
   digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  digitalWrite(9, 1);
}

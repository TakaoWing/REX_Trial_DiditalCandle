/*電子ローソクをつくろう！
   内容
   音量をシリアルモニタに表示する
*/

const int analogPin = A0; // マイクモジュールのA0出力接続先

void setup() {
  Serial.begin(9600);
}

void loop() {
  float volume = (float)analogRead(analogPin) / 1024.0f * 100.0f; // analogReadは0~1024の値を取る．音の大きさを%に変換
  Serial.print("音量:");
  Serial.println(volume); // シリアルモニタに音量を表示
  delay(100); // 100ms（0.1秒）待つ
}

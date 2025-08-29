-[_TtC22localspeechrecognition19EARSpeechRecognizer listener:shouldAcceptNewConnection:]
bool __cdecl -[EARSpeechRecognizer listener:shouldAcceptNewConnection:](
        _TtC22localspeechrecognition19EARSpeechRecognizer *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  _TtC22localspeechrecognition19EARSpeechRecognizer *v8; // x20
  char v9; // w22

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retain(self);
  v9 = sub_10001E6B4(v6, v7);
  objc_release(v6);
  objc_release(v7);
  objc_release(v8);
  return v9 & 1;
}
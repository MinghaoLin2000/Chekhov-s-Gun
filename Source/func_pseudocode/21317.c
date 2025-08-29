-[_TtC22localspeechrecognition12EARInterface listener:shouldAcceptNewConnection:]
bool __cdecl -[EARInterface listener:shouldAcceptNewConnection:](
        _TtC22localspeechrecognition12EARInterface *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  _TtC22localspeechrecognition12EARInterface *v8; // x20
  char v9; // w22

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retain(self);
  v9 = sub_100011660(v6, v7);
  objc_release(v6);
  objc_release(v7);
  objc_release(v8);
  return v9 & 1;
}
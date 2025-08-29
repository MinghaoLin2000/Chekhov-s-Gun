-[_TtC22localspeechrecognition19EARSpeechRecognizer setClientInfo:]
void __cdecl -[EARSpeechRecognizer setClientInfo:](
        _TtC22localspeechrecognition19EARSpeechRecognizer *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  _TtC22localspeechrecognition19EARSpeechRecognizer *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self);
  sub_10001FF98(v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}
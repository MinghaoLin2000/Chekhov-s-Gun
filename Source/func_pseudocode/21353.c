-[_TtC22localspeechrecognition19EARSpeechRecognizer pauseRecognition]
void __cdecl -[EARSpeechRecognizer pauseRecognition](_TtC22localspeechrecognition19EARSpeechRecognizer *self, SEL a2)
{
  _TtC22localspeechrecognition19EARSpeechRecognizer *v2; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  sub_10001F444();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}
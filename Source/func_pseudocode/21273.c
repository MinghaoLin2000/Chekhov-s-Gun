-[_TtC22localspeechrecognition19EARLanguageDetector runLanguageDetectionWithResultStream:samplingRate:reply:]
void __cdecl -[EARLanguageDetector runLanguageDetectionWithResultStream:samplingRate:reply:](
        _TtC22localspeechrecognition19EARLanguageDetector *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5)
{
  void *v8; // x22
  id v9; // x20
  _TtC22localspeechrecognition19EARLanguageDetector *v10; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v8 = _Block_copy(a5);
  _Block_copy(v8);
  v9 = objc_retain(a3);
  v10 = objc_retain(self);
  sub_10000886C(v9, a4, v10, v8);
  _Block_release(v8);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}
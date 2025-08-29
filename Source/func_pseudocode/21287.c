-[_TtC22localspeechrecognition31EARLanguageDetectorResultStream languageDetector:didProduceResult:processedAudioDuration:]
void __cdecl -[EARLanguageDetectorResultStream languageDetector:didProduceResult:processedAudioDuration:](
        _TtC22localspeechrecognition31EARLanguageDetectorResultStream *self,
        SEL a2,
        id a3,
        id a4,
        double a5)
{
  id v8; // x21
  id v9; // x19
  _TtC22localspeechrecognition31EARLanguageDetectorResultStream *v10; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(self);
  sub_100009A30(a5);
  objc_release(v8);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}
-[_TtC22localspeechrecognition19EARSpeechRecognizer prepareForReuseWithNewSupportedFeatures:clientInfo:analysisContext:analysisOptions:]
void __cdecl -[EARSpeechRecognizer prepareForReuseWithNewSupportedFeatures:clientInfo:analysisContext:analysisOptions:](
        _TtC22localspeechrecognition19EARSpeechRecognizer *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x23
  id v11; // x21
  id v12; // x24
  id v13; // x25
  _TtC22localspeechrecognition19EARSpeechRecognizer *v14; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v14 = objc_retain(self);
  sub_10001C488(v10, v11, v12, a6);
  objc_release(v10);
  objc_release(v11);
  objc_release(v12);
  objc_release(v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v14);
}
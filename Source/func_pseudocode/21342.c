-[_TtC22localspeechrecognition19EARSpeechRecognizer runRecognitionWithResultStream:language:task:samplingRate:reply:]
void __cdecl -[EARSpeechRecognizer runRecognitionWithResultStream:language:task:samplingRate:reply:](
        _TtC22localspeechrecognition19EARSpeechRecognizer *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        unsigned __int64 a6,
        id a7)
{
  void *v12; // x24
  __int64 v13; // x21
  __int64 v14; // x1
  __int64 v15; // x25
  __int64 v16; // x20
  __int64 v17; // x1
  __int64 v18; // x26
  id v19; // x22
  _TtC22localspeechrecognition19EARSpeechRecognizer *v20; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v12 = _Block_copy(a7);
  v13 = sub_1000411E0(a4);
  v15 = v14;
  v16 = sub_1000411E0(a5);
  v18 = v17;
  _Block_copy(v12);
  v19 = objc_retain(a3);
  v20 = objc_retain(self);
  sub_10001D538(v19, v13, v15, v16, v18, a6, v20, v12);
  _Block_release(v12);
  objc_release(v19);
  objc_release(v20);
  swift_bridgeObjectRelease(v15);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v18);
}
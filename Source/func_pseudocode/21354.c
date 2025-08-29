-[_TtC22localspeechrecognition19EARSpeechRecognizer resumeRecognitionWithLeftContext:rightContext:selectedText:]
void __cdecl -[EARSpeechRecognizer resumeRecognitionWithLeftContext:rightContext:selectedText:](
        _TtC22localspeechrecognition19EARSpeechRecognizer *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  __int64 v8; // x22
  __int64 v9; // x1
  __int64 v10; // x23
  __int64 v11; // x20
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x19
  __int64 v15; // x1
  __int64 v16; // x25
  _TtC22localspeechrecognition19EARSpeechRecognizer *v17; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v8 = sub_1000411E0(a3);
  v10 = v9;
  v11 = sub_1000411E0(a4);
  v13 = v12;
  v14 = sub_1000411E0(a5);
  v16 = v15;
  v17 = objc_retain(self);
  sub_10001F628(v8, v10, v11, v13, v14, v16);
  objc_release(v17);
  swift_bridgeObjectRelease(v10);
  swift_bridgeObjectRelease(v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v16);
}
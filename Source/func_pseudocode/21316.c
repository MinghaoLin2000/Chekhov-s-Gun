-[_TtC22localspeechrecognition12EARInterface makeEARLanguageDetectorWithDetectorOptions:clientInfo:analysisOptions:reply:]
void __cdecl -[EARInterface makeEARLanguageDetectorWithDetectorOptions:clientInfo:analysisOptions:reply:](
        _TtC22localspeechrecognition12EARInterface *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  void *v10; // x23
  __int64 v11; // x24
  id v12; // x21
  id v13; // x23
  id v14; // x25
  _TtC22localspeechrecognition12EARInterface *v15; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v10 = _Block_copy(a6);
  v11 = swift_allocObject(&unk_100059760, 24LL, 7LL);
  *(_QWORD *)(v11 + 16) = v10;
  v12 = objc_retain(a3);
  v13 = objc_retain(a4);
  v14 = objc_retain(a5);
  v15 = objc_retain(self);
  sub_100010D4C(v12, v13, a5, sub_1000126E0, v11);
  objc_release(v12);
  objc_release(v13);
  objc_release(v14);
  objc_release(v15);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(v11);
}
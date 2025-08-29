-[_TtC22localspeechrecognition12EARInterface makeEARSpeechRecognizerWithSupportedFeatures:clientInfo:analysisContext:analysisOptions:sandboxExtensions:reply:]
void __cdecl -[EARInterface makeEARSpeechRecognizerWithSupportedFeatures:clientInfo:analysisContext:analysisOptions:sandboxExtensions:reply:](
        _TtC22localspeechrecognition12EARInterface *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8)
{
  void *v14; // x26
  __int64 v15; // x19
  __int64 v16; // x21
  id v17; // x24
  id v18; // x23
  id v19; // x22
  id v20; // x26
  _TtC22localspeechrecognition12EARInterface *v21; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v14 = _Block_copy(a8);
  v15 = sub_100041260(a7, &type metadata for String);
  v16 = swift_allocObject(&unk_100059788, 24LL, 7LL);
  *(_QWORD *)(v16 + 16) = v14;
  v17 = objc_retain(a3);
  v18 = objc_retain(a4);
  v19 = objc_retain(a5);
  v20 = objc_retain(a6);
  v21 = objc_retain(self);
  sub_10000F9EC(v17, v18, v19, a6, v15, sub_10001274C, v16);
  objc_release(v17);
  objc_release(v18);
  objc_release(v19);
  objc_release(v20);
  objc_release(v21);
  swift_bridgeObjectRelease(v15);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(v16);
}
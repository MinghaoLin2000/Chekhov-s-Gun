-[_TtC22localspeechrecognition12EARInterface getJitProfileData:contextualStrings:clientID:reply:]
void __cdecl -[EARInterface getJitProfileData:contextualStrings:clientID:reply:](
        _TtC22localspeechrecognition12EARInterface *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  void *v10; // x23
  __int64 v11; // x21
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x20
  __int64 v15; // x19
  __int64 v16; // x1
  __int64 v17; // x25
  _TtC22localspeechrecognition12EARInterface *v18; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v10 = _Block_copy(a6);
  v11 = sub_1000411E0(a3);
  v13 = v12;
  v14 = sub_100041260(a4, &type metadata for String);
  v15 = sub_1000411E0(a5);
  v17 = v16;
  _Block_copy(v10);
  v18 = objc_retain(self);
  sub_10001195C(v11, v13, v14, v15, v17, v18, v10);
  _Block_release(v10);
  objc_release(v18);
  swift_bridgeObjectRelease(v13);
  swift_bridgeObjectRelease(v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v17);
}
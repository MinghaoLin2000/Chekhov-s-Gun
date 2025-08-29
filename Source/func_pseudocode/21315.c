-[_TtC22localspeechrecognition12EARInterface makeEuclidInstanceWithLocale:clientID:encoderType:initFlag:reply:]
void __cdecl -[EARInterface makeEuclidInstanceWithLocale:clientID:encoderType:initFlag:reply:](
        _TtC22localspeechrecognition12EARInterface *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5,
        signed __int64 a6,
        id a7)
{
  __int64 v13; // x19
  __int64 v14; // x27
  __int64 v15; // x8
  char *v16; // x26
  void *v17; // x20
  __int64 v18; // x23
  __int64 v19; // x1
  __int64 v20; // x24
  _TtC22localspeechrecognition12EARInterface *v21; // x25
  __int64 v22; // [xsp+0h] [xbp-50h] BYREF

  v13 = sub_100040FE0(0LL);
  v14 = *(_QWORD *)(v13 - 8);
  __chkstk_darwin();
  v16 = (char *)&v22 - ((v15 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = _Block_copy(a7);
  sub_100040F50(a3);
  v18 = sub_1000411E0(a4);
  v20 = v19;
  _Block_copy(v17);
  v21 = objc_retain(self);
  sub_100010840(v16, v18, v20, a5, a6, v21, v17);
  _Block_release(v17);
  objc_release(v21);
  swift_bridgeObjectRelease(v20);
  (*(void (__fastcall **)(char *, __int64))(v14 + 8))(v16, v13);
}
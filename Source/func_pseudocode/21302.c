-[_TtC22localspeechrecognition9EAREuclid distanceBetweenSource:target:reply:]
void __cdecl -[EAREuclid distanceBetweenSource:target:reply:](
        _TtC22localspeechrecognition9EAREuclid *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  void *v8; // x22
  __int64 v9; // x20
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x19
  __int64 v13; // x1
  __int64 v14; // x24
  _TtC22localspeechrecognition9EAREuclid *v15; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = _Block_copy(a5);
  v9 = sub_1000411E0(a3);
  v11 = v10;
  v12 = sub_1000411E0(a4);
  v14 = v13;
  _Block_copy(v8);
  v15 = objc_retain(self);
  sub_10000E8E4(v9, v11, v12, v14, v15, v8);
  _Block_release(v8);
  objc_release(v15);
  swift_bridgeObjectRelease(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v14);
}
-[_TtC22localspeechrecognition9EAREuclid findNearestNeighbors:numberOfNeighbors:reply:]
void __cdecl -[EAREuclid findNearestNeighbors:numberOfNeighbors:reply:](
        _TtC22localspeechrecognition9EAREuclid *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5)
{
  void *v8; // x22
  __int64 v9; // x20
  __int64 v10; // x1
  __int64 v11; // x23
  _TtC22localspeechrecognition9EAREuclid *v12; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = _Block_copy(a5);
  v9 = sub_1000411E0(a3);
  v11 = v10;
  _Block_copy(v8);
  v12 = objc_retain(self);
  sub_10000E300(v9, v11, a4, v12, v8);
  _Block_release(v8);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v11);
}
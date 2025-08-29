-[_TtC22localspeechrecognition9EAREuclid computeEmbeddings:reply:]
void __cdecl -[EAREuclid computeEmbeddings:reply:](_TtC22localspeechrecognition9EAREuclid *self, SEL a2, id a3, id a4)
{
  void *v6; // x21
  __int64 v7; // x19
  _TtC22localspeechrecognition9EAREuclid *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = _Block_copy(a4);
  v7 = sub_100041260(a3, &type metadata for String);
  _Block_copy(v6);
  v8 = objc_retain(self);
  sub_10000EDA8(v7, v8, v6);
  _Block_release(v6);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v7);
}
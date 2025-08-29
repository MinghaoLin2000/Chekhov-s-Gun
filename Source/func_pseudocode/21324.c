-[_TtC22localspeechrecognition9LSRAssets getModelPropertiesWithReply:]
void __cdecl -[LSRAssets getModelPropertiesWithReply:](_TtC22localspeechrecognition9LSRAssets *self, SEL a2, id a3)
{
  void *v4; // x20
  _TtC22localspeechrecognition9LSRAssets *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = _Block_copy(a3);
  _Block_copy(v4);
  v5 = objc_retain(self);
  sub_1000137D0();
  _Block_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}
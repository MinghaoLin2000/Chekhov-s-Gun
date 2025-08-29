-[_TtC22localspeechrecognition9LSRAssets getGeoLMRegionIDForLatitude:longitude:reply:]
void __cdecl -[LSRAssets getGeoLMRegionIDForLatitude:longitude:reply:](
        _TtC22localspeechrecognition9LSRAssets *self,
        SEL a2,
        double a3,
        double a4,
        id a5)
{
  void *v8; // x20
  _TtC22localspeechrecognition9LSRAssets *v9; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v8 = _Block_copy(a5);
  _Block_copy(v8);
  v9 = objc_retain(self);
  sub_100014ADC(a3, a4);
  _Block_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}
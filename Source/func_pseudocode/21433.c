-[_TtC22localspeechrecognition32GeneralASRAssetDelegateInterface setStatusForLanguage:]
void __cdecl -[GeneralASRAssetDelegateInterface setStatusForLanguage:](
        _TtC22localspeechrecognition32GeneralASRAssetDelegateInterface *self,
        SEL a2,
        id a3)
{
  __int64 v4; // x20
  _TtC22localspeechrecognition32GeneralASRAssetDelegateInterface *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = sub_100041120(a3, &type metadata for String, &type metadata for String, &protocol witness table for String);
  v5 = objc_retain(self);
  sub_10002B4C4(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}
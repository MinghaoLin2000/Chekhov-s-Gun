+[_TtC22localspeechrecognition31AssistantAssetDelegateInterface sharedInstance]
_TtC22localspeechrecognition31AssistantAssetDelegateInterface *__cdecl +[AssistantAssetDelegateInterface sharedInstance](
        id a1,
        SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = (void *)sub_10002B33C(&unk_100062220, &unk_100064868, sub_10002B0A4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (_TtC22localspeechrecognition31AssistantAssetDelegateInterface *)objc_autoreleaseReturnValue(v2);
}
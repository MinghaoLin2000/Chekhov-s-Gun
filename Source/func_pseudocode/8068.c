-[AppPredictionIntentsHelperService localizedStringForLinkString:withReply:]
void __cdecl -[AppPredictionIntentsHelperService localizedStringForLinkString:withReply:](
        AppPredictionIntentsHelperService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  void *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "localizedStringForLocaleIdentifier:", 0LL));
  (*((void (__fastcall **)(id, void *, _QWORD))a4 + 2))(v6, v7, 0LL);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}
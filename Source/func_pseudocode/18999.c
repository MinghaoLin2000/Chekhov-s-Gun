-[SiriNCAlertViewController prepareForLaunchWithInputMode:]
void __cdecl -[SiriNCAlertViewController prepareForLaunchWithInputMode:](
        SiriNCAlertViewController *self,
        SEL a2,
        signed __int64 a3)
{
  id v5; // x0
  AFUISiriViewController *v6; // x20
  void *v7; // x21
  void *v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_unsafeClaimAutoreleasedReturnValue(-[SiriNCAlertViewController view](self, "view"));
  v6 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[AFUISiriViewController view](v6, "view"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "statusView"));
  objc_msgSend(v8, "prepareForLaunchWithInputMode:", a3);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}
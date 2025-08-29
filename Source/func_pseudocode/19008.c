-[SiriNCAlertViewController siriViewController:makeKeyWithCompletion:]
void __cdecl -[SiriNCAlertViewController siriViewController:makeKeyWithCompletion:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x20
  SiriNCService *v6; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController service](self, "service"));
  -[SiriNCService makeKeyWithReady:](v6, "makeKeyWithReady:", v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}
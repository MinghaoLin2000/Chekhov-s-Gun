-[SiriNCAlertViewController didPresentCreateBugTemplateWithConfirm:values:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[SiriNCAlertViewController didPresentCreateBugTemplateWithConfirm:values:](
        SiriNCAlertViewController *self,
        SEL a2,
        bool a3,
        id a4)
{
  _BOOL8 v4; // x19
  id v6; // x21
  AFUISiriViewController *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a3;
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  -[AFUISiriViewController didPresentCreateBugTemplateWithConfirm:values:](
    v7,
    "didPresentCreateBugTemplateWithConfirm:values:",
    v4,
    v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}
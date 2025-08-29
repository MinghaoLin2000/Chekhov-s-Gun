-[SiriNCAlertViewController siriApplicationFocusChanged:]
void __cdecl -[SiriNCAlertViewController siriApplicationFocusChanged:](
        SiriNCAlertViewController *self,
        SEL a2,
        bool a3)
{
  __int64 v3; // x30
  AFUISiriViewController *v4; // x19

  if ( !a3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
    -[AFUISiriViewController cancelRequestAndStopAttending](v4, "cancelRequestAndStopAttending");
    if ( ((v3 ^ (2 * v3)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v4);
  }
}
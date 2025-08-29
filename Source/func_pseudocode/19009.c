-[SiriNCAlertViewController releaseKeySiriViewController:]
void __cdecl -[SiriNCAlertViewController releaseKeySiriViewController:](SiriNCAlertViewController *self, SEL a2, id a3)
{
  SiriNCService *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController service](self, "service", a3));
  -[SiriNCService releaseKey](v3, "releaseKey");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}
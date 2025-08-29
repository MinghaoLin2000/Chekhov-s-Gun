-[SiriNCService setSwipeGestureOffset:didComplete:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[SiriNCService setSwipeGestureOffset:didComplete:](SiriNCService *self, SEL a2, double a3, bool a4)
{
  _BOOL8 v4; // x19
  SiriNCAlertViewController *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a4;
  v6 = objc_retainAutoreleasedReturnValue(-[SiriNCService alertViewController](self, "alertViewController"));
  -[SiriNCAlertViewController setSwipeGestureOffset:didComplete:](v6, "setSwipeGestureOffset:didComplete:", v4, a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}
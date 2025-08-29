-[UARPUpdaterServiceDisplay getIsBusyStatusWithReply:]
void __cdecl -[UARPUpdaterServiceDisplay getIsBusyStatusWithReply:](UARPUpdaterServiceDisplay *self, SEL a2, id a3)
{
  UARPUpdaterDisplayControllerDelegate *displayController; // x20
  id v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  displayController = self->_displayController;
  v5 = objc_retain(a3);
  (*((void (__fastcall **)(id, bool))a3 + 2))(
    v5,
    -[UARPUpdaterDisplayControllerDelegate getIsBusy](displayController, "getIsBusy"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}
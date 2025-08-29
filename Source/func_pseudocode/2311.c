-[DeviceModeFinderViewController setContentView:]
void __cdecl -[DeviceModeFinderViewController setContentView:](DeviceModeFinderViewController *self, SEL a2, id a3)
{
  id v5; // x19
  id WeakRetained; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  -[NSView removeFromSuperview](self->_contentView, "removeFromSuperview");
  objc_storeStrong((id *)&self->_contentView, a3);
  if ( v5 )
  {
    objc_msgSend(v5, "setHidden:", 0LL);
    WeakRetained = objc_loadWeakRetained((id *)&self->_contentViewContainer);
    sub_10002ABA4((int)v5, WeakRetained);
    objc_release(WeakRetained);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}
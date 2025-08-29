-[DeviceModeMediaViewController setContentView:]
void __cdecl -[DeviceModeMediaViewController setContentView:](DeviceModeMediaViewController *self, SEL a2, id a3)
{
  id v5; // x19
  NSView **p_contentView; // x22
  NSView *contentView; // x0
  NSView *v8; // x0
  NSView *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  p_contentView = &self->_contentView;
  contentView = self->_contentView;
  if ( contentView )
  {
    -[NSView removeFromSuperview](contentView, "removeFromSuperview");
    v8 = *p_contentView;
    *p_contentView = 0LL;
    objc_release(v8);
  }
  objc_storeStrong((id *)&self->_contentView, a3);
  if ( v5 )
  {
    objc_msgSend(v5, "setHidden:", 0LL);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController contentViewContainer](self, "contentViewContainer"));
    sub_10002ABA4((int)v5, v9);
    objc_release(v9);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}
-[AMPCapacityBarView _hidePopover:]
void __cdecl -[AMPCapacityBarView _hidePopover:](AMPCapacityBarView *self, SEL a2, id a3)
{
  id v4; // x19
  NSPopover *v5; // x21
  unsigned int v6; // w22
  NSPopover *v7; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarPopover popover](self->_pop, "popover"));
  v6 = -[NSPopover isShown](v5, "isShown");
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarPopover popover](self->_pop, "popover"));
    -[NSPopover close](v7, "close");
    objc_release(v7);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}
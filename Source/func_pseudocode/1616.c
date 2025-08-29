-[BarChoice updateButtonMenuRepresentationsSelectedState:]
void __cdecl -[BarChoice updateButtonMenuRepresentationsSelectedState:](BarChoice *self, SEL a2, bool a3)
{
  _BOOL8 v4; // x20
  NSButton *v5; // x21
  NSMenuItem *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[BarChoice buttonRepresentation](self, "buttonRepresentation"));
  -[NSButton setState:](v5, "setState:", v4);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[BarChoice menuRepresentation](self, "menuRepresentation"));
  -[NSMenuItem setState:](v6, "setState:", v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}
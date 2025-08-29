-[ECTIHelperDelegate _handleHasFocus:]
void __cdecl -[ECTIHelperDelegate _handleHasFocus:](ECTIHelperDelegate *self, SEL a2, id a3)
{
  _BOOL4 v4; // w0
  __int64 v5; // x2
  NSTextField *textField; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = xpc_dictionary_get_bool(a3, "hasFocus");
  self->_hasFocus = v4;
  if ( v4 )
  {
    if ( self->_isSearchField )
      v5 = 4LL;
    else
      v5 = 1LL;
    textField = self->_textField;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[NSTextField setAlignment:](textField, "setAlignment:", v5);
  }
}
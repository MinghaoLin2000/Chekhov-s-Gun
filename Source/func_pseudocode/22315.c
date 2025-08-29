-[ECTIHelperDelegate _handleSetStringValue:]
void __cdecl -[ECTIHelperDelegate _handleSetStringValue:](ECTIHelperDelegate *self, SEL a2, id a3)
{
  const char *string; // x0
  NSTextField *textField; // x20
  const __CFString *v6; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  string = xpc_dictionary_get_string(a3, "stringValue");
  textField = self->_textField;
  if ( string )
    v6 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", string);
  else
    v6 = &stru_100008218;
  -[NSTextField setStringValue:](textField, "setStringValue:", v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[ECTIHelperDelegate resizeTextFieldToText](self, "resizeTextFieldToText");
}
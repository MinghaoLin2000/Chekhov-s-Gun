-[ECTIHelperDelegate _handleSetFont:]
void __cdecl -[ECTIHelperDelegate _handleSetFont:](ECTIHelperDelegate *self, SEL a2, id a3)
{
  const UInt8 *data; // x0
  const __CFData *v5; // x0
  __int64 v6; // x0
  const void *v7; // x20
  size_t length; // [xsp+8h] [xbp-18h] BYREF

  length = 0LL;
  data = (const UInt8 *)xpc_dictionary_get_data(a3, "font", &length);
  if ( data )
  {
    v5 = CFDataCreate(0LL, data, length);
    if ( v5 )
    {
      v6 = sub_100004538(v5);
      if ( v6 )
      {
        v7 = (const void *)v6;
        -[NSTextField setFont:](self->_textField, "setFont:", v6);
        CFRelease(v7);
      }
    }
  }
}
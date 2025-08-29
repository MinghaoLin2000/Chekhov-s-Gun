-[FudPersonalizer overrideServerURL:]
void __cdecl -[FudPersonalizer overrideServerURL:](FudPersonalizer *self, SEL a2, id a3)
{
  __CFString *serverURL; // x0
  __CFString *v6; // x0

  serverURL = self->_serverURL;
  if ( serverURL )
  {
    CFRelease(serverURL);
    self->_serverURL = 0LL;
  }
  if ( a3 )
    v6 = (__CFString *)CFRetain(a3);
  else
    v6 = 0LL;
  self->_serverURL = v6;
}
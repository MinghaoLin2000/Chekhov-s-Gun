-[EAAccessoryUpdater isRoamingEnabled]
bool __cdecl -[EAAccessoryUpdater isRoamingEnabled](EAAccessoryUpdater *self, SEL a2)
{
  id v3; // x0
  void *v4; // x21
  unsigned int v5; // w20
  __int64 v7; // [xsp+8h] [xbp-28h] BYREF

  v7 = 0LL;
  v3 = objc_alloc_init((Class)&OBJC_CLASS___CoreTelephonyClient);
  if ( v3 )
  {
    v4 = v3;
    v5 = (unsigned int)objc_msgSend(v3, "getInternationalDataAccessStatusSync:", &v7);
    if ( v7 )
      -[FudPluginDelegate log:format:](self->delegate, "log:format:", 7LL, CFSTR("error = %@"), v7);
    objc_release(v4);
  }
  else
  {
    v5 = 1;
  }
  -[FudPluginDelegate log:format:](self->delegate, "log:format:", 7LL, CFSTR("isRoamingEnabled = %d"), v5);
  return v5;
}
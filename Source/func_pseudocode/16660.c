-[EAAccessoryUpdater compareLongVersionString:withFirmwareVersion:]
signed __int64 __cdecl -[EAAccessoryUpdater compareLongVersionString:withFirmwareVersion:](
        EAAccessoryUpdater *self,
        SEL a2,
        $3CC19D079FD0B010EE84973AA846B91B *a3,
        $3CC19D079FD0B010EE84973AA846B91B *a4)
{
  unsigned __int64 var1; // x10
  unsigned __int64 v8; // x11
  unsigned __int64 var2; // x10
  unsigned __int64 v10; // x11
  signed __int64 v11; // x22
  unsigned __int64 var3; // x10
  unsigned __int64 v14; // x11
  bool v15; // cc
  _BOOL8 v16; // x10

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater compareLongVersionString:withFirmwareVersion:]",
    670LL);
  if ( a4->var0 > a3->var0 )
    goto LABEL_6;
  if ( a4->var0 < a3->var0 )
    goto LABEL_8;
  var1 = a4->var1;
  v8 = a3->var1;
  if ( var1 > v8 )
  {
LABEL_6:
    v11 = -1LL;
    goto LABEL_9;
  }
  if ( var1 < v8 )
    goto LABEL_8;
  var2 = a4->var2;
  v10 = a3->var2;
  if ( var2 > v10 )
    goto LABEL_6;
  if ( var2 < v10 )
  {
LABEL_8:
    v11 = 1LL;
    goto LABEL_9;
  }
  var3 = a4->var3;
  v14 = a3->var3;
  v15 = var3 > v14;
  v16 = var3 < v14;
  if ( v15 )
    v11 = -1LL;
  else
    v11 = v16;
LABEL_9:
  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    6LL,
    CFSTR("Comparing Result: %ld, AccessoryVersion: %lld.%lld.%lld.%lld FirmwareVersion: %lld.%lld.%lld.%lld"),
    v11,
    a3->var0,
    a3->var1,
    a3->var2,
    a3->var3,
    a4->var0,
    a4->var1,
    a4->var2,
    a4->var3);
  return v11;
}
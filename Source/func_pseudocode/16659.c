-[EAAccessoryUpdater accessoryVersionFromString:accyVersion:]
bool __cdecl -[EAAccessoryUpdater accessoryVersionFromString:accyVersion:](
        EAAccessoryUpdater *self,
        SEL a2,
        id a3,
        $3CC19D079FD0B010EE84973AA846B91B *a4)
{
  void *v5; // x20
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x8
  void *v9; // x0
  bool v10; // w21
  unsigned __int64 v11; // x8

  if ( !a4 )
    return 0;
  v5 = objc_msgSend(a3, "componentsSeparatedByString:", CFSTR("."));
  if ( (unsigned __int64)objc_msgSend(v5, "count") < 4 )
    v6 = 0LL;
  else
    v6 = (unsigned int)objc_msgSend(objc_msgSend(v5, "objectAtIndex:", 3LL), "intValue");
  a4->var3 = v6;
  if ( (unsigned __int64)objc_msgSend(v5, "count") < 3 )
    v7 = 0LL;
  else
    v7 = (unsigned int)objc_msgSend(objc_msgSend(v5, "objectAtIndex:", 2LL), "intValue");
  a4->var2 = v7;
  if ( (unsigned __int64)objc_msgSend(v5, "count") < 2 )
    v8 = 0LL;
  else
    v8 = (unsigned int)objc_msgSend(objc_msgSend(v5, "objectAtIndex:", 1LL), "intValue");
  a4->var1 = v8;
  v9 = objc_msgSend(v5, "count");
  v10 = v9 != 0LL;
  if ( v9 )
    v11 = (unsigned int)objc_msgSend(objc_msgSend(v5, "objectAtIndex:", 0LL), "intValue");
  else
    v11 = 0LL;
  a4->var0 = v11;
  return v10;
}
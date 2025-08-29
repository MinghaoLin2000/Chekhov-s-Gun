-[AMActionLoaderServiceInstance replacementObjectForXPCConnection:encoder:object:]
id __cdecl -[AMActionLoaderServiceInstance replacementObjectForXPCConnection:encoder:object:](
        AMActionLoaderServiceInstance *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  id v9; // x0
  void *v10; // x21
  id v11; // x0
  void *v12; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  v10 = v9;
  if ( v9 )
  {
    if ( (unsigned int)objc_msgSend(v9, "conformsToProtocol:", &OBJC_PROTOCOL___NSSecureCoding)
      && (unsigned int)objc_msgSend((id)objc_opt_class(v10), "supportsSecureCoding") )
    {
      v11 = objc_retain(v10);
    }
    else
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_100011998(v10);
      v11 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___AMUnknownXPCToken), "initWithObject:", v10);
    }
    v12 = v11;
  }
  else
  {
    v12 = 0LL;
  }
  objc_release(v10);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}
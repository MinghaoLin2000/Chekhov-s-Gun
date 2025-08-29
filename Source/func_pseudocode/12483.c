-[NSObject tsu_addObserver:forKeyPath:options:context:]
id __cdecl -[NSObject tsu_addObserver:forKeyPath:options:context:](
        NSObject *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        void *a6)
{
  TSUKVOToken *v11; // x20
  id AssociatedObject; // x0
  void *v13; // x25
  os_log_s *v14; // x24
  NSMutableSet *v15; // x0
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  id v18; // [xsp+14h] [xbp-7Ch]
  __int16 v19; // [xsp+1Ch] [xbp-74h]
  NSObject *v20; // [xsp+1Eh] [xbp-72h]
  __int16 v21; // [xsp+26h] [xbp-6Ah]
  id v22; // [xsp+28h] [xbp-68h]
  __int16 v23; // [xsp+30h] [xbp-60h]
  void *v24; // [xsp+32h] [xbp-5Eh]

  v11 = -[TSUKVOToken initWithObserver:target:keyPath:context:](
          objc_alloc(&OBJC_CLASS___TSUKVOToken),
          "initWithObserver:target:keyPath:context:",
          a3,
          self,
          a4,
          a6);
  AssociatedObject = objc_getAssociatedObject(self, off_1001F6FB8);
  if ( !AssociatedObject )
  {
    v15 = +[NSMutableSet setWithObjects:](&OBJC_CLASS___NSMutableSet, "setWithObjects:", v11, 0LL);
    objc_setAssociatedObject(self, off_1001F6FB8, v15, (void *)1);
LABEL_9:
    -[NSObject addObserver:forKeyPath:options:context:](self, "addObserver:forKeyPath:options:context:", a3, a4, a5, a6);
    return objc_autorelease(v11);
  }
  v13 = AssociatedObject;
  if ( ((unsigned int)objc_msgSend(AssociatedObject, "containsObject:", v11) & 1) == 0 )
  {
    objc_msgSend(v13, "addObject:", v11);
    goto LABEL_9;
  }
  if ( TSUDefaultCat_init_token != -1 )
    dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC358);
  v14 = (os_log_s *)TSUDefaultCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 138413058;
    v18 = a3;
    v19 = 2112;
    v20 = self;
    v21 = 2112;
    v22 = a4;
    v23 = 2048;
    v24 = a6;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      v14,
      OS_LOG_TYPE_ERROR,
      "%@ is already observing %@ for key path %@ using context %p",
      buf,
      0x2Au);
  }
  return objc_autorelease(v11);
}
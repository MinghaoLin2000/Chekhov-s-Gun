-[AMActionLoaderServiceInstance loaderServiceActionForActionUUID:]
id __cdecl -[AMActionLoaderServiceInstance loaderServiceActionForActionUUID:](
        AMActionLoaderServiceInstance *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  NSMapTable *v6; // x21
  id v7; // x20
  NSAssertionHandler *v8; // x22
  NSAssertionHandler *v9; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v8,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      263LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("actionUUID"));
    objc_release(v8);
  }
  if ( +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    if ( v5 )
    {
LABEL_5:
      v6 = objc_retainAutoreleasedReturnValue(-[AMActionLoaderServiceInstance _loaderServiceActionsByUUID](self, "_loaderServiceActionsByUUID"));
      v7 = objc_retainAutoreleasedReturnValue(-[NSMapTable objectForKey:](v6, "objectForKey:", v5));
      objc_release(v6);
      goto LABEL_8;
    }
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v9,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      266LL,
      CFSTR("Should be on main thread!"));
    objc_release(v9);
    if ( v5 )
      goto LABEL_5;
  }
  v7 = 0LL;
LABEL_8:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}
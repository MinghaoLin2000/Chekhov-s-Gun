-[AMActionLoaderServiceInstance invalidateLoaderServiceAction:]
void __cdecl -[AMActionLoaderServiceInstance invalidateLoaderServiceAction:](
        AMActionLoaderServiceInstance *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  void *v6; // x22
  void *v7; // x21
  NSMapTable *v8; // x20
  NSAssertionHandler *v9; // x22
  NSAssertionHandler *v10; // x22
  NSAssertionHandler *v11; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v9,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      289LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("loaderServiceAction"));
    objc_release(v9);
  }
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "uuid"));
  objc_release(v6);
  if ( !v6 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      290LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("loaderServiceAction.uuid"));
    objc_release(v10);
  }
  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v11 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v11,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      291LL,
      CFSTR("Should be on main thread!"));
    objc_release(v11);
  }
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "uuid"));
  if ( v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[AMActionLoaderServiceInstance _loaderServiceActionsByUUID](self, "_loaderServiceActionsByUUID"));
    -[NSMapTable removeObjectForKey:](v8, "removeObjectForKey:", v7);
    objc_release(v8);
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}
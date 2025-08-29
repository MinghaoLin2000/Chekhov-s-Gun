-[AMActionLoaderServiceInstance _loaderServiceActionForDefinition:workflowUUID:actionDelegate:variableDelegate:variables:error:]
id __cdecl -[AMActionLoaderServiceInstance _loaderServiceActionForDefinition:workflowUUID:actionDelegate:variableDelegate:variables:error:](
        AMActionLoaderServiceInstance *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id *a8)
{
  id v15; // x19
  id v16; // x20
  id v17; // x21
  id v18; // x22
  id v19; // x23
  void *v20; // x28
  void *v21; // x26
  id v22; // x27
  NSUUID *v23; // x24
  AMLoaderServiceAction *v24; // x28
  NSError *v25; // x0
  NSAssertionHandler *v27; // x27
  NSAssertionHandler *v28; // x27
  id v29; // [xsp+8h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v15 = objc_retain(a3);
  v16 = objc_retain(a4);
  v17 = objc_retain(a5);
  v18 = objc_retain(a6);
  v19 = objc_retain(a7);
  if ( +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    if ( v15 )
    {
LABEL_3:
      v20 = objc_retainAutoreleasedReturnValue(+[AMActionLoader sharedActionLoader](&OBJC_CLASS___AMActionLoader, "sharedActionLoader"));
      v29 = 0LL;
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "actionWithPropertyList:error:", v15, &v29));
      v22 = objc_retain(v29);
      objc_release(v20);
      if ( v21 )
      {
        v23 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
        v24 = -[AMLoaderServiceAction initWithAction:uuid:serivice:workflowUUID:actionDelegate:variableDelegate:variables:](
                objc_alloc(&OBJC_CLASS___AMLoaderServiceAction),
                "initWithAction:uuid:serivice:workflowUUID:actionDelegate:variableDelegate:variables:",
                v21,
                v23,
                self,
                v16,
                v17,
                v18,
                v19);
        -[NSMapTable setObject:forKey:](self->__loaderServiceActionsByUUID, "setObject:forKey:", v24, v23);
        objc_release(v23);
      }
      else
      {
        if ( a8 )
        {
          if ( v22 )
            v25 = (NSError *)objc_retainAutorelease(v22);
          else
            v25 = objc_autorelease(
                    objc_retainAutoreleasedReturnValue(
                      +[NSError errorWithDomain:code:userInfo:](
                        &OBJC_CLASS___NSError,
                        "errorWithDomain:code:userInfo:",
                        CFSTR("com.apple.Automator"),
                        0LL,
                        0LL)));
          *a8 = v25;
          if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
            sub_100011804(v22, v15);
          if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
            sub_100011728();
        }
        v24 = 0LL;
      }
      objc_release(v21);
      objc_release(v22);
      goto LABEL_15;
    }
  }
  else
  {
    v27 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v27,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      60LL,
      CFSTR("Should be on main thread!"));
    objc_release(v27);
    if ( v15 )
      goto LABEL_3;
  }
  v28 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v28,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("AMActionLoaderServiceInstance.m"),
    61LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("definition"));
  objc_release(v28);
  v24 = 0LL;
  if ( a8 )
    *a8 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("com.apple.Automator"),
                0LL,
                0LL)));
LABEL_15:
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v24);
}
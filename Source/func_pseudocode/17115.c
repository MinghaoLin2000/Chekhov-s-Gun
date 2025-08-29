-[AMActionLoaderServiceInstance remoteActionServiceActionForDefinition:workflowUUID:actionDelegate:variableDelegate:variables:completionHandler:]
void __cdecl -[AMActionLoaderServiceInstance remoteActionServiceActionForDefinition:workflowUUID:actionDelegate:variableDelegate:variables:completionHandler:](
        AMActionLoaderServiceInstance *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8)
{
  id v15; // x19
  id v16; // x20
  id v17; // x21
  id v18; // x22
  id v19; // x23
  id v20; // x24
  NSError *v21; // x0
  NSError *v22; // x25
  NSAssertionHandler *v23; // x27
  NSAssertionHandler *v24; // x27
  NSAssertionHandler *v25; // x27
  NSAssertionHandler *v26; // x27
  _QWORD block[5]; // [xsp+8h] [xbp-A8h] BYREF
  NSError *v28; // [xsp+30h] [xbp-80h]
  id v29; // [xsp+38h] [xbp-78h]
  id v30; // [xsp+40h] [xbp-70h]
  id v31; // [xsp+48h] [xbp-68h]
  id v32; // [xsp+50h] [xbp-60h]
  id v33; // [xsp+58h] [xbp-58h]

  v15 = objc_retain(a3);
  v16 = objc_retain(a4);
  v17 = objc_retain(a5);
  v18 = objc_retain(a6);
  v19 = objc_retain(a7);
  v20 = objc_retain(a8);
  if ( +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v23 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v23,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      154LL,
      CFSTR("Should be off main thread!"));
    objc_release(v23);
    if ( v20 )
    {
LABEL_3:
      if ( v15 )
        goto LABEL_4;
      goto LABEL_14;
    }
  }
  else if ( v20 )
  {
    goto LABEL_3;
  }
  v24 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v24,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("AMActionLoaderServiceInstance.m"),
    155LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("completionHandler"));
  objc_release(v24);
  if ( v15 )
  {
LABEL_4:
    if ( v16 )
      goto LABEL_5;
LABEL_15:
    v26 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v26,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      157LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("workflowUUID"));
    objc_release(v26);
    if ( v20 )
      goto LABEL_6;
    goto LABEL_16;
  }
LABEL_14:
  v25 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v25,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("AMActionLoaderServiceInstance.m"),
    156LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("definition"));
  objc_release(v25);
  if ( !v16 )
    goto LABEL_15;
LABEL_5:
  if ( v20 )
  {
LABEL_6:
    if ( v15 )
    {
      block[0] = _NSConcreteStackBlock;
      block[1] = 3254779904LL;
      block[2] = sub_1000055F4;
      block[3] = &unk_10001C368;
      block[4] = self;
      v28 = (NSError *)objc_retain(v15);
      v29 = objc_retain(v16);
      v30 = objc_retain(v17);
      v31 = objc_retain(v18);
      v32 = objc_retain(v19);
      v33 = objc_retain(v20);
      dispatch_async(&_dispatch_main_q, block);
      objc_release(v33);
      objc_release(v32);
      objc_release(v31);
      objc_release(v30);
      objc_release(v29);
      v21 = v28;
    }
    else
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_100011918();
      v22 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("com.apple.Automator"),
                0LL,
                0LL));
      (*((void (__fastcall **)(id, _QWORD, _QWORD, _QWORD, NSError *))v20 + 2))(v20, 0LL, 0LL, 0LL, v22);
      v21 = v22;
    }
    objc_release(v21);
    goto LABEL_18;
  }
LABEL_16:
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    sub_100011898();
LABEL_18:
  objc_release(v20);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
}
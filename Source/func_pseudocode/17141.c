-[AMLoaderServiceVariableController initWithVariableDelegate:variables:]
AMLoaderServiceVariableController *__cdecl -[AMLoaderServiceVariableController initWithVariableDelegate:variables:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v8; // x19
  id v9; // x20
  AMLoaderServiceVariableController *v10; // x21
  NSMutableArray *v11; // x0
  NSMutableArray *v12; // x8
  NSMutableArray *variables; // x0
  AMLoaderServiceVariableController *v14; // x22
  NSAssertionHandler *v16; // x22
  objc_super v17; // [xsp+10h] [xbp-40h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v17.receiver = self;
  v17.super_class = (Class)&OBJC_CLASS___AMLoaderServiceVariableController;
  v10 = -[AMLoaderServiceVariableController init](&v17, "init");
  if ( !v10 )
  {
LABEL_7:
    v14 = objc_retain(v10);
    goto LABEL_8;
  }
  if ( v8 )
  {
    if ( v9 )
      v11 = (NSMutableArray *)objc_msgSend(v9, "mutableCopy");
    else
      v11 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v12 = v11;
    variables = v10->__variables;
    v10->__variables = v12;
    objc_release(variables);
    objc_storeStrong((id *)&v10->__xpcVariableDelegate, a3);
    v10->__variablesLock._os_unfair_lock_opaque = 0;
    goto LABEL_7;
  }
  v16 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v16,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    v10,
    CFSTR("AMLoaderServiceVariableController.m"),
    41LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("variableDelegate"));
  objc_release(v16);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    sub_100011A4C();
  v14 = 0LL;
LABEL_8:
  objc_release(v9);
  objc_release(v8);
  objc_release(v10);
  return v14;
}
-[AMLoaderServiceVariableController _xpc:errorHandler:]
void __cdecl -[AMLoaderServiceVariableController _xpc:errorHandler:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3,
        id a4)
{
  void (__fastcall **v7)(id, void *); // x19
  id v8; // x20
  AMRemoteActionVariableDelegateXPCProtocol *v9; // x23
  AMRemoteActionVariableDelegateXPCProtocol *v10; // x22
  AMRemoteActionVariableDelegateXPCProtocol *v11; // x22
  void *v12; // x21
  void *v13; // x0
  NSError *v14; // x21
  NSAssertionHandler *v15; // x23
  NSAssertionHandler *v16; // x23
  _QWORD v17[5]; // [xsp+10h] [xbp-60h] BYREF
  id v18; // [xsp+38h] [xbp-38h]

  v7 = (void (__fastcall **)(id, void *))objc_retain(a3);
  v8 = objc_retain(a4);
  if ( !v7 )
  {
    v15 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v15,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      185LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("work != nil"));
    v13 = v15;
    goto LABEL_8;
  }
  v9 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _xpcVariableDelegate](self, "_xpcVariableDelegate"));
  objc_release(v9);
  if ( !v9 )
  {
    v16 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v16,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      192LL,
      CFSTR("Should have variable delegate!"));
    objc_release(v16);
  }
  v10 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _xpcVariableDelegate](self, "_xpcVariableDelegate"));
  objc_release(v10);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _xpcVariableDelegate](self, "_xpcVariableDelegate"));
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_100007634;
    v17[3] = &unk_10001C4D8;
    v17[4] = self;
    v18 = objc_retain(v8);
    v12 = objc_retainAutoreleasedReturnValue(
            -[AMRemoteActionVariableDelegateXPCProtocol synchronousRemoteObjectProxyWithErrorHandler:](
              v11,
              "synchronousRemoteObjectProxyWithErrorHandler:",
              v17));
    objc_release(v11);
    v7[2](v7, v12);
    objc_release(v12);
    v13 = v18;
LABEL_8:
    objc_release(v13);
    goto LABEL_9;
  }
  if ( v8 )
  {
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("com.apple.Automator"),
              0LL,
              0LL));
    (*((void (__fastcall **)(id, NSError *))v8 + 2))(v8, v14);
    v13 = v14;
    goto LABEL_8;
  }
LABEL_9:
  objc_release(v8);
  objc_release(v7);
}
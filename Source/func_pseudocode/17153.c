-[AMLoaderServiceVariableController _addVariableViaXPC:expectingNewUUID:]
void __cdecl -[AMLoaderServiceVariableController _addVariableViaXPC:expectingNewUUID:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL4 v4; // w21
  id v6; // x19
  const __CFUUID *v7; // x22
  CFStringRef v8; // x23
  NSString *v9; // x21
  NSString *v10; // x21
  id v11; // x22
  NSMutableArray *v12; // x24
  NSDictionary *v13; // x20
  NSNotificationCenter *v14; // x22
  _QWORD v15[5]; // [xsp+8h] [xbp-C8h] BYREF
  id v16; // [xsp+30h] [xbp-A0h]
  _QWORD v17[4]; // [xsp+38h] [xbp-98h] BYREF
  id v18; // [xsp+58h] [xbp-78h]
  id v19; // [xsp+60h] [xbp-70h]
  _QWORD v20[2]; // [xsp+68h] [xbp-68h] BYREF
  _QWORD v21[2]; // [xsp+78h] [xbp-58h] BYREF

  v4 = a4;
  v6 = objc_retain(a3);
  if ( v6 )
  {
    if ( v4 )
    {
      v7 = CFUUIDCreate(0LL);
      v8 = CFUUIDCreateString(0LL, v7);
      v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithString:](&OBJC_CLASS___NSString, "stringWithString:", v8));
      CFRelease(v7);
      CFRelease(v8);
    }
    else
    {
      v9 = 0LL;
    }
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_100007FCC;
    v17[3] = &unk_10001C508;
    v18 = objc_retain(v6);
    v10 = objc_retain(v9);
    v19 = v10;
    v15[0] = _NSConcreteStackBlock;
    v15[1] = 3254779904LL;
    v15[2] = sub_100008014;
    v15[3] = &unk_10001C538;
    v15[4] = self;
    v11 = objc_retain(v18);
    v16 = v11;
    -[AMLoaderServiceVariableController _xpc:errorHandler:](self, "_xpc:errorHandler:", v17, v15);
    if ( v10 )
      objc_msgSend(v11, "setUUID:", v10);
    os_unfair_lock_lock(&self->__variablesLock);
    v12 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables"));
    -[NSMutableArray addObject:](v12, "addObject:", v11);
    objc_release(v12);
    os_unfair_lock_unlock(&self->__variablesLock);
    v20[0] = AMVariablesControllerNotificationKeyVariable;
    v20[1] = AMVariablesControllerNotificationKeyVariablesController;
    v21[0] = v11;
    v21[1] = self;
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v21,
              v20,
              2LL));
    v14 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
    -[NSNotificationCenter postNotificationName:object:](
      v14,
      "postNotificationName:object:",
      AMVariablesControllerDidAddVariableNotification,
      v13);
    objc_release(v14);
    objc_release(v13);
    objc_release(v16);
    objc_release(v19);
    objc_release(v18);
    objc_release(v10);
  }
  objc_release(v6);
}
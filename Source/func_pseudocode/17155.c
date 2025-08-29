-[AMLoaderServiceVariableController renameVariable:name:]
void __cdecl -[AMLoaderServiceVariableController renameVariable:name:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x20
  NSAssertionHandler *v9; // x23
  NSAssertionHandler *v10; // x23
  _QWORD v11[5]; // [xsp+8h] [xbp-A8h] BYREF
  id v12; // [xsp+30h] [xbp-80h]
  id v13; // [xsp+38h] [xbp-78h]
  _QWORD v14[4]; // [xsp+40h] [xbp-70h] BYREF
  id v15; // [xsp+60h] [xbp-50h]
  id v16; // [xsp+68h] [xbp-48h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  if ( !v7 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v9,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      416LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("variable"));
    objc_release(v9);
  }
  if ( objc_msgSend(v8, "length") )
  {
    if ( !v7 )
      goto LABEL_7;
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      417LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("name.length > 0"));
    objc_release(v10);
    if ( !v7 )
      goto LABEL_7;
  }
  if ( objc_msgSend(v8, "length") )
  {
    v14[0] = _NSConcreteStackBlock;
    v14[1] = 3254779904LL;
    v14[2] = sub_100008564;
    v14[3] = &unk_10001C508;
    v15 = objc_retain(v7);
    v16 = objc_retain(v8);
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3254779904LL;
    v11[2] = sub_1000085C8;
    v11[3] = &unk_10001C568;
    v11[4] = self;
    v12 = objc_retain(v15);
    v13 = objc_retain(v16);
    -[AMLoaderServiceVariableController _xpc:errorHandler:](self, "_xpc:errorHandler:", v14, v11);
    objc_release(v13);
    objc_release(v12);
    objc_release(v16);
    objc_release(v15);
  }
LABEL_7:
  objc_release(v8);
  objc_release(v7);
}
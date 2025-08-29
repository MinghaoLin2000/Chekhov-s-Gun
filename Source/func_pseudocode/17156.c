-[AMLoaderServiceVariableController updateValueOfVariable:value:]
void __cdecl -[AMLoaderServiceVariableController updateValueOfVariable:value:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x20
  id v9; // x0
  NSAssertionHandler *v10; // x23
  _QWORD v11[5]; // [xsp+8h] [xbp-A8h] BYREF
  id v12; // [xsp+30h] [xbp-80h]
  id v13; // [xsp+38h] [xbp-78h]
  _QWORD v14[4]; // [xsp+40h] [xbp-70h] BYREF
  id v15; // [xsp+60h] [xbp-50h]
  id v16; // [xsp+68h] [xbp-48h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  if ( v7 )
  {
    v14[0] = _NSConcreteStackBlock;
    v14[1] = 3254779904LL;
    v14[2] = sub_100008844;
    v14[3] = &unk_10001C508;
    v15 = objc_retain(v7);
    v16 = objc_retain(v8);
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3254779904LL;
    v11[2] = sub_1000088A8;
    v11[3] = &unk_10001C568;
    v11[4] = self;
    v12 = objc_retain(v15);
    v13 = objc_retain(v16);
    -[AMLoaderServiceVariableController _xpc:errorHandler:](self, "_xpc:errorHandler:", v14, v11);
    objc_release(v13);
    objc_release(v12);
    objc_release(v16);
    v9 = v15;
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
      435LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("variable"));
    v9 = v10;
  }
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
}
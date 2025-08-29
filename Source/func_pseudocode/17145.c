-[AMLoaderServiceVariableController _updateWithVariables:]
void __cdecl -[AMLoaderServiceVariableController _updateWithVariables:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3)
{
  id v4; // x24
  void *v5; // x22
  void *v6; // x21
  void *v7; // x23
  NSMutableArray *v8; // x25
  id v9; // x23
  id v10; // x21
  id v11; // x22
  id v12; // x23
  _QWORD v13[5]; // [xsp+0h] [xbp-140h] BYREF
  _QWORD v14[5]; // [xsp+28h] [xbp-118h] BYREF
  _QWORD v15[5]; // [xsp+50h] [xbp-F0h] BYREF
  _QWORD v16[4]; // [xsp+78h] [xbp-C8h] BYREF
  id v17; // [xsp+98h] [xbp-A8h]
  AMLoaderServiceVariableController *v18; // [xsp+A0h] [xbp-A0h]
  id v19; // [xsp+A8h] [xbp-98h]
  id v20; // [xsp+B0h] [xbp-90h]
  _QWORD v21[4]; // [xsp+B8h] [xbp-88h] BYREF
  id v22; // [xsp+D8h] [xbp-68h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  os_unfair_lock_lock(&self->__variablesLock);
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables"));
  v21[0] = _NSConcreteStackBlock;
  v21[1] = 3254779904LL;
  v21[2] = sub_100006E9C;
  v21[3] = &unk_10001C408;
  v9 = objc_retain(v7);
  v22 = v9;
  -[NSMutableArray enumerateObjectsUsingBlock:](v8, "enumerateObjectsUsingBlock:", v21);
  objc_release(v8);
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_100006F34;
  v16[3] = &unk_10001C438;
  v17 = v9;
  v18 = self;
  v19 = v5;
  v20 = v6;
  v10 = objc_retain(v6);
  v11 = objc_retain(v5);
  v12 = objc_retain(v9);
  objc_msgSend(v4, "enumerateObjectsUsingBlock:", v16);
  objc_release(v4);
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_100007134;
  v15[3] = &unk_10001C468;
  v15[4] = self;
  objc_msgSend(v12, "enumerateObjectsUsingBlock:", v15);
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_1000071A8;
  v14[3] = &unk_10001C468;
  v14[4] = self;
  objc_msgSend(v12, "enumerateObjectsUsingBlock:", v14);
  v13[0] = _NSConcreteStackBlock;
  v13[1] = 3254779904LL;
  v13[2] = sub_1000072A0;
  v13[3] = &unk_10001C408;
  v13[4] = self;
  objc_msgSend(v11, "enumerateObjectsUsingBlock:", v13);
  objc_msgSend(v10, "enumerateObjectsUsingBlock:", &stru_10001C4B8);
  os_unfair_lock_unlock(&self->__variablesLock);
  objc_release(v20);
  objc_release(v19);
  objc_release(v17);
  objc_release(v22);
  objc_release(v10);
  objc_release(v11);
  objc_release(v12);
}
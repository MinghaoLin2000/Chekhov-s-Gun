-[ipp_t userCodableDictionary]
id __cdecl -[ipp_t userCodableDictionary](ipp_t *self, SEL a2)
{
  NSMutableArray *v3; // x0
  NSMutableArray *attrs; // x21
  NSMutableArray *v5; // x19
  id v6; // x21
  id v7; // x23
  NSString *v8; // x20
  NSDictionary *v9; // x21
  objc_super v11; // [xsp+10h] [xbp-80h] BYREF
  _QWORD v12[4]; // [xsp+20h] [xbp-70h] BYREF
  id v13; // [xsp+40h] [xbp-50h]
  NSString *v14; // [xsp+48h] [xbp-48h] BYREF
  NSMutableArray *v15; // [xsp+50h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v3 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  attrs = self->_attrs;
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_10003C584;
  v12[3] = &unk_10009E828;
  v5 = objc_retain(v3);
  v13 = v5;
  -[NSMutableArray enumerateObjectsUsingBlock:](attrs, "enumerateObjectsUsingBlock:", v12);
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___ipp_t;
  v6 = objc_retainAutoreleasedReturnValue(-[ipp_t description](&v11, "description"));
  v7 = objc_retainAutoreleasedReturnValue(-[ipp_t _descriptionLeader](self, "_descriptionLeader"));
  v8 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@ %@"), v6, v7));
  objc_release(v7);
  objc_release(v6);
  v14 = v8;
  v15 = v5;
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v15,
           &v14,
           1LL));
  objc_release(v8);
  objc_release(v13);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}
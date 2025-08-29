-[ipp_collection_t debugDescription]
id __cdecl -[ipp_collection_t debugDescription](ipp_collection_t *self, SEL a2)
{
  NSMutableArray *v3; // x0
  NSMutableArray *attrs; // x21
  NSMutableArray *v5; // x19
  id v6; // x21
  id v7; // x23
  NSString *v8; // x20
  objc_super v10; // [xsp+20h] [xbp-A0h] BYREF
  _QWORD v11[4]; // [xsp+30h] [xbp-90h] BYREF
  id v12; // [xsp+50h] [xbp-70h]
  __int64 *v13; // [xsp+58h] [xbp-68h]
  __int64 v14; // [xsp+60h] [xbp-60h] BYREF
  __int64 *v15; // [xsp+68h] [xbp-58h]
  __int64 v16; // [xsp+70h] [xbp-50h]
  __int64 (__fastcall *v17)(); // [xsp+78h] [xbp-48h]
  __int64 (__fastcall *v18)(); // [xsp+80h] [xbp-40h]
  id v19; // [xsp+88h] [xbp-38h]
  __int64 vars8; // [xsp+C8h] [xbp+8h]

  v14 = 0LL;
  v15 = &v14;
  v16 = 0x3032000000LL;
  v17 = sub_10003E648;
  v18 = sub_10003E658;
  v19 = 0LL;
  v3 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  attrs = self->super._attrs;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10003EB20;
  v11[3] = &unk_10009EB68;
  v13 = &v14;
  v5 = objc_retain(v3);
  v12 = v5;
  -[NSMutableArray enumerateObjectsUsingBlock:](attrs, "enumerateObjectsUsingBlock:", v11);
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___ipp_collection_t;
  v6 = objc_retainAutoreleasedReturnValue(-[ipp_t description](&v10, "description"));
  v7 = objc_retainAutoreleasedReturnValue(-[ipp_t _descriptionLeader](self, "_descriptionLeader"));
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@ %@ { \"%@\": %@ }"),
           v6,
           v7,
           v15[5],
           v5));
  objc_release(v7);
  objc_release(v6);
  objc_release(v12);
  objc_release(v5);
  _Block_object_dispose(&v14, 8);
  objc_release(v19);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}
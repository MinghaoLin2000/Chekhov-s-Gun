+[_NSAttributedStringAgentService sharedApplication]
id __cdecl +[_NSAttributedStringAgentService sharedApplication](id a1, SEL a2)
{
  void *v2; // x0
  id v3; // x19
  void *v4; // x0
  _QWORD v6[5]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v7; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v8; // [xsp+38h] [xbp-28h]
  __int64 v9; // [xsp+40h] [xbp-20h]
  __int64 v10; // [xsp+48h] [xbp-18h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v7 = 0LL;
  v8 = &v7;
  v9 = 0x2050000000LL;
  v2 = (void *)qword_100008870;
  v10 = qword_100008870;
  if ( !qword_100008870 )
  {
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 3254779904LL;
    v6[2] = sub_100001944;
    v6[3] = &unk_100004158;
    v6[4] = &v7;
    sub_100001944(v6, a2);
    v2 = (void *)v8[3];
  }
  v3 = objc_retainAutorelease(v2);
  _Block_object_dispose(&v7, 8);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "sharedApplication"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}
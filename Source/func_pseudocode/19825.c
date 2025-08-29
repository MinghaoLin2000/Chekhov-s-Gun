__Z12internStringP8NSString
NSString *__fastcall internString(NSString *a1)
{
  NSString *v1; // x19
  void *v2; // x0
  void *v3; // x20
  NSString *v4; // x0
  NSString *v5; // x21
  const char *v6; // x22
  void *v7; // x23
  _QWORD *Value; // x0
  NSString *v9; // x22
  NSString *v10; // x22
  _QWORD v12[4]; // [xsp+0h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(objc_msgSend(&off_1000B4788, "objectForKeyedSubscript:", v1));
  v3 = v2;
  if ( v2 )
  {
    v4 = objc_retain(v2);
LABEL_9:
    v10 = v4;
    goto LABEL_10;
  }
  v5 = objc_retainAutorelease(v1);
  v6 = -[NSString UTF8String](v5, "UTF8String");
  v7 = (void *)strlen(v6);
  if ( (void *)-[NSString length](v5, "length") != v7 )
  {
    v4 = objc_retain(v5);
    v1 = v4;
    goto LABEL_9;
  }
  v12[0] = v6;
  v12[1] = v7;
  v12[2] = sub_100014958(v6, v7);
  v12[3] = 0LL;
  if ( qword_1000C3ED0 != -1 )
    dispatch_once(&qword_1000C3ED0, &stru_100091AC0);
  Value = CFDictionaryGetValue((CFDictionaryRef)qword_1000C3ED8, v12);
  if ( Value )
  {
    v9 = (NSString *)Value[3];
  }
  else if ( (unsigned int)sub_1000149A0(v6, v7) )
  {
    v9 = (NSString *)objc_retainAutoreleasedReturnValue((id)sub_100014A14(v5));
    objc_release(v5);
    v5 = v9;
  }
  else
  {
    v9 = v5;
  }
  v10 = objc_retain(v9);
  v1 = v5;
LABEL_10:
  objc_release(v3);
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}
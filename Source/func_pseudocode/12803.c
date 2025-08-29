-[NSError tsu_isErrorPassingTest:]
bool __cdecl -[NSError tsu_isErrorPassingTest:](NSError *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  bool v6; // w20
  _QWORD v8[4]; // [xsp+0h] [xbp-70h] BYREF
  id v9; // [xsp+20h] [xbp-50h]
  __int64 *v10; // [xsp+28h] [xbp-48h]
  __int64 v11; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v12; // [xsp+38h] [xbp-38h]
  __int64 v13; // [xsp+40h] [xbp-30h]
  char v14; // [xsp+48h] [xbp-28h]

  v4 = objc_retain(a3);
  v5 = v4;
  v11 = 0LL;
  v12 = &v11;
  v13 = 0x2020000000LL;
  v14 = 0;
  if ( v4 )
  {
    v8[0] = _NSConcreteStackBlock;
    v8[1] = 3254779904LL;
    v8[2] = sub_100135B6C;
    v8[3] = &unk_1001DD4A0;
    v9 = objc_retain(v4);
    v10 = &v11;
    -[NSError tsu_enumerateErrorUsingBlock:](self, "tsu_enumerateErrorUsingBlock:", v8);
    objc_release(v9);
    v6 = *((_BYTE *)v12 + 24) != 0;
  }
  else
  {
    v6 = 0;
  }
  _Block_object_dispose(&v11, 8);
  objc_release(v5);
  return v6;
}
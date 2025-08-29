-[ipp_t _findAttribute0:valueTag:]
id __cdecl -[ipp_t _findAttribute0:valueTag:](ipp_t *self, SEL a2, id a3, int a4)
{
  id v6; // x0
  void *v7; // x19
  id v8; // x21
  id v9; // x20
  _QWORD v11[4]; // [xsp+8h] [xbp-88h] BYREF
  id v12; // [xsp+28h] [xbp-68h]
  __int64 *v13; // [xsp+30h] [xbp-60h]
  int v14; // [xsp+38h] [xbp-58h]
  __int64 v15; // [xsp+40h] [xbp-50h] BYREF
  __int64 *v16; // [xsp+48h] [xbp-48h]
  __int64 v17; // [xsp+50h] [xbp-40h]
  __int64 (__fastcall *v18)(); // [xsp+58h] [xbp-38h]
  __int64 (__fastcall *v19)(); // [xsp+60h] [xbp-30h]
  id v20; // [xsp+68h] [xbp-28h]
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = v6;
  if ( v6 )
  {
    v15 = 0LL;
    v16 = &v15;
    v17 = 0x3032000000LL;
    v18 = sub_10003E648;
    v19 = sub_10003E658;
    v20 = 0LL;
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3254779904LL;
    v11[2] = sub_10003E660;
    v11[3] = &unk_10009EB38;
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "lowercaseString"));
    v13 = &v15;
    v14 = a4;
    v8 = objc_retain(v12);
    -[ipp_t enumerateAttributes:](self, "enumerateAttributes:", v11);
    v9 = objc_retain((id)v16[5]);
    objc_release(v12);
    objc_release(v8);
    _Block_object_dispose(&v15, 8);
    objc_release(v20);
  }
  else
  {
    v9 = 0LL;
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}
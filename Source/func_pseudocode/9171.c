-[NSError tsp_hints]
NSSet *__cdecl -[NSError tsp_hints](NSError *self, SEL a2)
{
  void *v2; // x0
  NSSet *v3; // x0
  NSSet *v4; // x19
  _QWORD v6[6]; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v7; // [xsp+30h] [xbp-70h] BYREF
  __int64 *v8; // [xsp+38h] [xbp-68h]
  __int64 v9; // [xsp+40h] [xbp-60h]
  __int64 (__fastcall *v10)(); // [xsp+48h] [xbp-58h]
  __int64 (__fastcall *v11)(); // [xsp+50h] [xbp-50h]
  id v12; // [xsp+58h] [xbp-48h]
  __int64 v13; // [xsp+60h] [xbp-40h] BYREF
  __int64 *v14; // [xsp+68h] [xbp-38h]
  __int64 v15; // [xsp+70h] [xbp-30h]
  __int64 (__fastcall *v16)(); // [xsp+78h] [xbp-28h]
  __int64 (__fastcall *v17)(); // [xsp+80h] [xbp-20h]
  id v18; // [xsp+88h] [xbp-18h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v13 = 0LL;
  v14 = &v13;
  v15 = 0x3032000000LL;
  v16 = sub_100012D2C;
  v17 = sub_100012D3C;
  v18 = 0LL;
  v7 = 0LL;
  v8 = &v7;
  v9 = 0x3032000000LL;
  v10 = sub_100012D2C;
  v11 = sub_100012D3C;
  v12 = 0LL;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_100012D44;
  v6[3] = &unk_1001D1AD0;
  v6[4] = &v13;
  v6[5] = &v7;
  -[NSError tsu_enumerateErrorUsingBlock:](self, "tsu_enumerateErrorUsingBlock:", v6);
  v2 = (void *)v8[5];
  if ( v2 || (v2 = (void *)v14[5]) != 0LL )
    v3 = objc_retain(v2);
  else
    v3 = objc_opt_new(&OBJC_CLASS___NSSet);
  v4 = v3;
  _Block_object_dispose(&v7, 8);
  objc_release(v12);
  _Block_object_dispose(&v13, 8);
  objc_release(v18);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}
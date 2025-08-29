-[PAMediaConversionServiceResourceURLCollection hash]
unsigned __int64 __cdecl -[PAMediaConversionServiceResourceURLCollection hash](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2)
{
  unsigned __int64 v2; // x19
  _QWORD v4[5]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v5; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v6; // [xsp+38h] [xbp-28h]
  __int64 v7; // [xsp+40h] [xbp-20h]
  __int64 v8; // [xsp+48h] [xbp-18h]

  v5 = 0LL;
  v6 = &v5;
  v7 = 0x2020000000LL;
  v8 = 0LL;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_10000B454;
  v4[3] = &unk_100040EA0;
  v4[4] = &v5;
  -[PAMediaConversionServiceResourceURLCollection enumerateResourceURLReferences:](
    self,
    "enumerateResourceURLReferences:",
    v4);
  v2 = v6[3];
  _Block_object_dispose(&v5, 8);
  return v2;
}
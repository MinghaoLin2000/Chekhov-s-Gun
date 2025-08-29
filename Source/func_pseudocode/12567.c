-[NSArray tsu_arrayByFlattening]
id __cdecl -[NSArray tsu_arrayByFlattening](NSArray *self, SEL a2)
{
  void *v3; // x19
  _QWORD v5[5]; // [xsp+8h] [xbp-68h] BYREF
  _QWORD v6[6]; // [xsp+30h] [xbp-40h] BYREF

  v3 = +[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array");
  v6[0] = 0LL;
  v6[1] = v6;
  v6[2] = 0x3052000000LL;
  v6[3] = sub_100124AE8;
  v6[4] = sub_100124AF8;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_100124B04;
  v5[3] = &unk_1001DC698;
  v5[4] = v6;
  v6[5] = v5;
  sub_100124B04(v5, self, v3);
  _Block_object_dispose(v6, 8);
  return v3;
}
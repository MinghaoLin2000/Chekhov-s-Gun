+[TSUAssertionHandler p_performBlockIgnoringAssertions:onlyFatal:]
id __cdecl +[TSUAssertionHandler p_performBlockIgnoringAssertions:onlyFatal:](id a1, SEL a2, id a3, bool a4)
{
  void *v6; // x19
  __int64 v7; // x23
  char v8; // w25
  _QWORD v10[5]; // [xsp+0h] [xbp-70h] BYREF
  bool v11; // [xsp+28h] [xbp-48h]

  v6 = +[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array");
  v7 = qword_1001F8088;
  v8 = byte_1001F8080;
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_10016517C;
  v10[3] = &unk_1001DF688;
  v11 = a4;
  v10[4] = v6;
  qword_1001F8088 = (__int64)v10;
  byte_1001F8080 = 1;
  (*((void (__fastcall **)(id))a3 + 2))(a3);
  byte_1001F8080 = v8;
  qword_1001F8088 = v7;
  return v6;
}
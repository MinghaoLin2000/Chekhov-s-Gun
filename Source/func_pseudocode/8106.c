-[XPCSignpostReader packageMXSignpostData]
id __cdecl -[XPCSignpostReader packageMXSignpostData](XPCSignpostReader *self, SEL a2)
{
  id v3; // x0
  NSMutableDictionary *summarizedSignpostDurations; // x20
  id v5; // x19
  void *v6; // x20
  id v7; // x19
  _QWORD v9[5]; // [xsp+0h] [xbp-40h] BYREF
  id v10; // [xsp+28h] [xbp-18h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  summarizedSignpostDurations = self->_summarizedSignpostDurations;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_1000083AC;
  v9[3] = &unk_100014438;
  v9[4] = self;
  v5 = objc_retain(v3);
  v10 = v5;
  -[NSMutableDictionary enumerateKeysAndObjectsUsingBlock:](
    summarizedSignpostDurations,
    "enumerateKeysAndObjectsUsingBlock:",
    v9);
  v6 = v10;
  v7 = objc_retainAutoreleaseReturnValue(v5);
  objc_release(v6);
  objc_release(v7);
  return v7;
}
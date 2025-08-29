-[MediaConversionQueueEntry requestIdentifiersForConnectionIdentifier:]
id __cdecl -[MediaConversionQueueEntry requestIdentifiersForConnectionIdentifier:](
        MediaConversionQueueEntry *self,
        SEL a2,
        id a3)
{
  void *v4; // x21
  id v5; // x20
  void *v6; // x19
  id v7; // x21
  _QWORD v9[4]; // [xsp+0h] [xbp-50h] BYREF
  id v10; // [xsp+20h] [xbp-30h]
  void *v11; // [xsp+28h] [xbp-28h]

  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_10000CDEC;
  v9[3] = &unk_100041110;
  v10 = objc_retain(a3);
  v4 = objc_retain(objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array")));
  v11 = v4;
  v5 = objc_retain(v10);
  -[MediaConversionQueueEntry withLockEnumerateClientRequests:](self, "withLockEnumerateClientRequests:", v9);
  v6 = v11;
  v7 = objc_retainAutoreleaseReturnValue(v4);
  objc_release(v6);
  objc_release(v10);
  objc_release(v7);
  objc_release(v5);
  return v7;
}
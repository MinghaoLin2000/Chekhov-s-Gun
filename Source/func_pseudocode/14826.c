-[TBXPCService fetchTileFromVisitedCallback:cacheAge:]
void __cdecl -[TBXPCService fetchTileFromVisitedCallback:cacheAge:](
        TBXPCService *self,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  id v5; // x24
  void *v6; // x19
  NSNumber *v7; // x22
  TBTileItemDescriptor *v8; // x21
  NSSet *v9; // x22
  void *v10; // x23
  void *v11; // x24
  NSNumber *v12; // x25
  NSDictionary *v13; // x26
  void *v14; // x20
  _QWORD v15[5]; // [xsp+20h] [xbp-90h] BYREF
  _QWORD v16[2]; // [xsp+48h] [xbp-68h] BYREF
  _QWORD v17[2]; // [xsp+58h] [xbp-58h] BYREF

  v5 = objc_retain(a4);
  NSLog(
    &CFSTR("%s: tileKey = %llu, cacheAge = %@").isa,
    "-[TBXPCService fetchTileFromVisitedCallback:cacheAge:]",
    a3,
    v5);
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___WiFi3BarsSource), "initWithChangeHandler:localStoreType:", 0LL, 1LL);
  v7 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", a3));
  v8 = objc_retainAutoreleasedReturnValue(
         +[TBTileItemDescriptor tileItemDescriptorWithKey:](
           &OBJC_CLASS___TBTileItemDescriptor,
           "tileItemDescriptorWithKey:",
           v7));
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(+[NSSet setWithObjects:](&OBJC_CLASS___NSSet, "setWithObjects:", v8, 0LL));
  v10 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___TBTileFetchRequestDescriptor),
          "initWithTileItems:maxCacheAge:",
          v9,
          v5);
  objc_release(v5);
  v11 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___TBTileFetchRequest),
          "initWithDescriptor:sourcePolicy:cacheable:",
          v10,
          3LL,
          1LL);
  v16[0] = CFSTR("trigger");
  v16[1] = CFSTR("tileKey");
  v17[0] = &off_1000043F0;
  v12 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", a3));
  v17[1] = v12;
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v17,
            v16,
            2LL));
  objc_msgSend(v11, "setUserInfo:", v13);
  objc_release(v13);
  objc_release(v12);
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3221225472LL;
  v15[2] = sub_10000277C;
  v15[3] = &unk_100004108;
  v15[4] = a3;
  objc_msgSend(v11, "setResultsHandler:", v15);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "sourceMediator"));
  objc_msgSend(v14, "executeFetchRequest:", v11);
  objc_release(v14);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v6);
}
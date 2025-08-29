-[VideoConversionService connectionTerminationEventHandlerForConnectionIdentifier:eventDescription:]
id __cdecl -[VideoConversionService connectionTerminationEventHandlerForConnectionIdentifier:eventDescription:](
        VideoConversionService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  id v8; // x19
  id v9; // x21
  _QWORD *v10; // x22
  _QWORD v12[4]; // [xsp+0h] [xbp-60h] BYREF
  id v13; // [xsp+20h] [xbp-40h]
  id v14; // [xsp+28h] [xbp-38h]
  id v15; // [xsp+30h] [xbp-30h] BYREF
  id location; // [xsp+38h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  objc_initWeak(&location, self);
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_100021118;
  v12[3] = &unk_100041800;
  objc_copyWeak(&v15, &location);
  v13 = v6;
  v14 = v7;
  v8 = objc_retain(v7);
  v9 = objc_retain(v6);
  v10 = objc_retainBlock(v12);
  objc_release(v14);
  objc_release(v13);
  objc_release(v8);
  objc_release(v9);
  objc_destroyWeak(&v15);
  objc_destroyWeak(&location);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}
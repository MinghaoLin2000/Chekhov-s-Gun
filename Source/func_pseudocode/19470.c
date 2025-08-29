_configure_xpc_interface
void __fastcall configure_xpc_interface(void *a1)
{
  id v1; // x19
  id v2; // x20
  NSArray *v3; // x21
  void *v4; // x20
  _QWORD v5[4]; // [xsp+8h] [xbp-48h] BYREF

  v1 = objc_retain(a1);
  v2 = objc_alloc((Class)&OBJC_CLASS___NSSet);
  v5[0] = +[NSDictionary class](&OBJC_CLASS___NSDictionary, "class");
  v5[1] = +[NSString class](&OBJC_CLASS___NSString, "class");
  v5[2] = +[NSNumber class](&OBJC_CLASS___NSNumber, "class");
  v5[3] = +[NSArray class](&OBJC_CLASS___NSArray, "class");
  v3 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v5, 4LL));
  v4 = objc_msgSend(v2, "initWithArray:", v3);
  objc_release(v3);
  objc_msgSend(
    v1,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v4,
    "retrieveProperty:forUUID:type:withReply:",
    0LL,
    1LL);
  objc_msgSend(
    v1,
    "setClasses:forSelector:argumentIndex:ofReply:",
    v4,
    "retrievePropertiesForUUID:type:withReply:",
    0LL,
    1LL);
  objc_release(v1);
  objc_release(v4);
}
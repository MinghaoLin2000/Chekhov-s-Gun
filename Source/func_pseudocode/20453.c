__Z35getPrintdRPCBrowseProtocolInterfacev
NSXPCInterface *getPrintdRPCBrowseProtocolInterface(void)
{
  NSXPCInterface *v0; // x19
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  NSArray *v4; // x20
  __int64 v5; // x23
  char v6; // w8
  char v7; // w25
  NSSet *v8; // x22
  NSSet *v9; // x24
  __int64 v11; // [xsp+0h] [xbp-60h] BYREF
  __int64 v12; // [xsp+8h] [xbp-58h]
  __int64 v13; // [xsp+10h] [xbp-50h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v0 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___PKPrintdRPC_BrowseClient_ClientProtocol));
  v11 = objc_opt_class(&OBJC_CLASS___NSSet, v1);
  v12 = objc_opt_class(&OBJC_CLASS___NSString, v2);
  v13 = objc_opt_class(&OBJC_CLASS___PKPrinterBrowseInfo, v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v11, 3LL));
  v5 = 0LL;
  v6 = 1;
  do
  {
    v7 = v6;
    v8 = objc_retainAutoreleasedReturnValue(
           -[NSXPCInterface classesForSelector:argumentIndex:ofReply:](
             v0,
             "classesForSelector:argumentIndex:ofReply:",
             "browserAdded:removed:",
             v5,
             0LL,
             v11,
             v12));
    v9 = objc_retainAutoreleasedReturnValue(-[NSSet setByAddingObjectsFromArray:](v8, "setByAddingObjectsFromArray:", v4));
    -[NSXPCInterface setClasses:forSelector:argumentIndex:ofReply:](
      v0,
      "setClasses:forSelector:argumentIndex:ofReply:",
      v9,
      "browserAdded:removed:",
      v5,
      0LL);
    objc_release(v9);
    objc_release(v8);
    v6 = 0;
    v5 = 1LL;
  }
  while ( (v7 & 1) != 0 );
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v0);
}
-[DataDetectorsRemoteScanner scanString:range:configuration:withReply:]
void __cdecl -[DataDetectorsRemoteScanner scanString:range:configuration:withReply:](
        DataDetectorsRemoteScanner *self,
        SEL a2,
        id a3,
        _NSRange a4,
        id a5,
        id a6)
{
  NSUInteger length; // x20
  NSUInteger location; // x21
  id v10; // x24
  _QWORD v11[4]; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+28h] [xbp-38h]

  length = a4.length;
  location = a4.location;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_1000039A8;
  v11[3] = &unk_100004050;
  v12 = objc_retain(a6);
  v10 = objc_retain(v12);
  +[DDScannerService scanString:range:configuration:completionBlock:](
    &OBJC_CLASS___DDScannerService,
    "scanString:range:configuration:completionBlock:",
    a3,
    location,
    length,
    a5,
    v11);
  objc_release(v12);
  objc_release(v10);
}
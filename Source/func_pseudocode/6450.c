-[ExportSessionVideoTranscodingTask startExportSession:]
void __cdecl -[ExportSessionVideoTranscodingTask startExportSession:](
        ExportSessionVideoTranscodingTask *self,
        SEL a2,
        id a3)
{
  id v3; // x20
  _QWORD v4[4]; // [xsp+0h] [xbp-40h] BYREF
  ExportSessionVideoTranscodingTask *v5; // [xsp+20h] [xbp-20h]
  id v6; // [xsp+28h] [xbp-18h]

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_10001E318;
  v4[3] = &unk_100041680;
  v5 = self;
  v6 = objc_retain(a3);
  v3 = objc_retain(v6);
  -[VideoTranscodingTask transitionToRunningStateAndConditionallyRunBlock:](
    v5,
    "transitionToRunningStateAndConditionallyRunBlock:",
    v4);
  objc_release(v6);
  objc_release(v3);
}
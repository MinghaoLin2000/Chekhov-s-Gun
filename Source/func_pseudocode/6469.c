-[GIFExportVideoTranscodingTask performExport]
void __cdecl -[GIFExportVideoTranscodingTask performExport](GIFExportVideoTranscodingTask *self, SEL a2)
{
  id v3; // x20
  NSURL *v4; // x21
  void *v5; // x20
  NSURL *v6; // x22
  void *v7; // x21
  _QWORD v8[5]; // [xsp+8h] [xbp-48h] BYREF

  v3 = objc_alloc((Class)&OBJC_CLASS___PFExportGIFRequest);
  v4 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask sourceMainResourceURL](self, "sourceMainResourceURL"));
  v5 = objc_msgSend(v3, "initWithVideoURL:", v4);
  objc_release(v4);
  -[GIFExportVideoTranscodingTask setExportGIFRequest:](self, "setExportGIFRequest:", v5);
  v6 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask outputMainResourceURL](self, "outputMainResourceURL"));
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100020118;
  v8[3] = &unk_100041740;
  v8[4] = self;
  v7 = objc_retainAutoreleasedReturnValue(
         +[PFExportGIFRequest runExport:toURL:completion:](
           &OBJC_CLASS___PFExportGIFRequest,
           "runExport:toURL:completion:",
           v5,
           v6,
           v8));
  -[GIFExportVideoTranscodingTask setProgress:](self, "setProgress:", v7);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
}
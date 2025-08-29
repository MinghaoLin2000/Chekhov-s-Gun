-[PhotosAdjustmentsVideoTranscodingTask photosAdjustmentsExporterCompletionHandler]
id __cdecl -[PhotosAdjustmentsVideoTranscodingTask photosAdjustmentsExporterCompletionHandler](
        PhotosAdjustmentsVideoTranscodingTask *self,
        SEL a2)
{
  _QWORD *v2; // x0
  _QWORD v4[5]; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_10001B454;
  v4[3] = &unk_100041600;
  v4[4] = self;
  v2 = objc_retainBlock(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}
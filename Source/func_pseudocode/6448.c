-[ExportSessionVideoTranscodingTask hasProgress]
bool __cdecl -[ExportSessionVideoTranscodingTask hasProgress](ExportSessionVideoTranscodingTask *self, SEL a2)
{
  AVAssetExportSession *v2; // x0
  bool v3; // w19

  v2 = objc_retainAutoreleasedReturnValue(-[ExportSessionVideoTranscodingTask exportSession](self, "exportSession"));
  v3 = v2 != 0LL;
  objc_release(v2);
  return v3;
}
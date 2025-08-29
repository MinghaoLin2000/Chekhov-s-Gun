-[GIFExportVideoTranscodingTask hasProgress]
bool __cdecl -[GIFExportVideoTranscodingTask hasProgress](GIFExportVideoTranscodingTask *self, SEL a2)
{
  NSProgress *v2; // x0
  bool v3; // w19

  v2 = objc_retainAutoreleasedReturnValue(-[GIFExportVideoTranscodingTask progress](self, "progress"));
  v3 = v2 != 0LL;
  objc_release(v2);
  return v3;
}
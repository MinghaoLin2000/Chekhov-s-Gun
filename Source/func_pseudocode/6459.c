-[SinglePassVideoTranscodingTask hasProgress]
bool __cdecl -[SinglePassVideoTranscodingTask hasProgress](SinglePassVideoTranscodingTask *self, SEL a2)
{
  PFSinglePassVideoExportItem *v2; // x0
  bool v3; // w19

  v2 = objc_retainAutoreleasedReturnValue(-[SinglePassVideoTranscodingTask singlePassExportItem](self, "singlePassExportItem"));
  v3 = v2 != 0LL;
  objc_release(v2);
  return v3;
}
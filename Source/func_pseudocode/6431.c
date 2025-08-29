-[PhotosAdjustmentsVideoTranscodingTask hasProgress]
bool __cdecl -[PhotosAdjustmentsVideoTranscodingTask hasProgress](PhotosAdjustmentsVideoTranscodingTask *self, SEL a2)
{
  NSProgress *v2; // x0
  bool v3; // w19

  v2 = objc_retainAutoreleasedReturnValue(-[PhotosAdjustmentsVideoTranscodingTask progress](self, "progress"));
  v3 = v2 != 0LL;
  objc_release(v2);
  return v3;
}
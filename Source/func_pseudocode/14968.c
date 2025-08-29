+[ATXHeuristicJSEnv defaultHeuristicBundlePath]
id __cdecl +[ATXHeuristicJSEnv defaultHeuristicBundlePath](id a1, SEL a2)
{
  void *v2; // x0
  void *v3; // x19
  id v4; // x0
  os_log_s *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(
         +[ATXAssets2 pathForResource:ofType:isDirectory:](
           &OBJC_CLASS___ATXAssets2,
           "pathForResource:ofType:isDirectory:",
           CFSTR("Heuristics"),
           &stru_100029D80,
           1LL));
  v3 = v2;
  if ( v2 )
  {
    v4 = objc_retain(v2);
  }
  else
  {
    v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC());
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_ERROR) )
      sub_10001BC18(v5);
    objc_release(v5);
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}
-[NSString tsu_pathConformsToUTI:]
bool __cdecl -[NSString tsu_pathConformsToUTI:](NSString *self, SEL a2, id a3)
{
  id v4; // x20
  NSString *v5; // x19
  unsigned __int8 v6; // w21

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[NSString pathExtension](self, "pathExtension"));
  v6 = -[NSString tsu_pathExtensionConformsToUTI:](v5, "tsu_pathExtensionConformsToUTI:", v4);
  objc_release(v4);
  objc_release(v5);
  return v6;
}
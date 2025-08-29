__uncacheFilepath
__int64 __fastcall _uncacheFilepath(void *a1)
{
  id v1; // x19

  v1 = objc_retainAutorelease(objc_retain(a1));
  uncache_filename((const char *)objc_msgSend(v1, "UTF8String"), 0LL);
  objc_release(v1);
  return 0LL;
}
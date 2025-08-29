_uncache_regular_file
__int64 __fastcall uncache_regular_file(int a1, size_t a2)
{
  void *v3; // x0
  void *v4; // x20
  os_log_s *v6; // x21
  uint8_t v7[16]; // [xsp+0h] [xbp-30h] BYREF

  if ( !a2 )
    return 0LL;
  v3 = mmap(0LL, a2, 1, 1, a1, 0LL);
  if ( v3 == (void *)-1LL )
  {
    sub_1000086E4();
  }
  else
  {
    v4 = v3;
    if ( msync(v3, a2, 18) != -1 )
    {
      munmap(v4, a2);
      return 0LL;
    }
    v6 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)v7 = 0;
      _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_ERROR, "Error while trying to uncache: msync", v7, 2u);
    }
    objc_release(v6);
    munmap(v4, a2);
  }
  return 1LL;
}
-[TSPSnappyReadChannel uncompressDataFromSource:]
id __cdecl -[TSPSnappyReadChannel uncompressDataFromSource:](TSPSnappyReadChannel *self, SEL a2, SnappySource *a3)
{
  unsigned __int64 v4; // x19
  unsigned int *v5; // x2
  void *v6; // x19
  char *v7; // x2
  dispatch_data_t v8; // x0
  void *v9; // x19
  void *v10; // x20
  size_t size; // [xsp+Ch] [xbp-14h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  LODWORD(size) = 0;
  v4 = TSP::SnappySource::Offset((TSP::SnappySource *)a3);
  if ( (unsigned int)snappy::GetUncompressedLength((snappy *)a3, (snappy::Source *)&size, v5) )
  {
    TSP::SnappySource::SetOffset((TSP::SnappySource *)a3, v4);
    v6 = malloc_type_malloc((unsigned int)size, 0x85C438ADuLL);
    if ( (unsigned int)snappy::RawUncompress((snappy *)a3, (snappy::Source *)v6, v7) )
    {
      v8 = dispatch_data_create(v6, (unsigned int)size, 0LL, _dispatch_data_destructor_free);
      goto LABEL_14;
    }
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D15D8);
    v10 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169810(v10);
    free(v6);
  }
  else
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D15F8);
    v9 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169844(v9);
  }
  v8 = 0LL;
LABEL_14:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}
-[TSPSnappyReadChannel uncompressData:]
id __cdecl -[TSPSnappyReadChannel uncompressData:](TSPSnappyReadChannel *self, SEL a2, id a3)
{
  id v3; // x19
  unsigned int *v4; // x2
  void *v5; // x20
  char *v6; // x2
  dispatch_data_t v7; // x20
  void *v8; // x20
  void *v9; // x21
  _BYTE v11[68]; // [xsp+8h] [xbp-68h] BYREF
  unsigned int v12; // [xsp+4Ch] [xbp-24h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v3 = objc_retain(a3);
  v12 = 0;
  TSP::SnappySource::SnappySource((int)v11, v3);
  if ( (snappy::GetUncompressedLength((snappy *)v11, (snappy::Source *)&v12, v4) & 1) != 0 )
  {
    TSP::SnappySource::~SnappySource((TSP::SnappySource *)v11);
    TSP::SnappySource::SnappySource((int)v11, v3);
    v5 = malloc_type_malloc(v12, 0x733AFDCuLL);
    if ( (unsigned int)snappy::RawUncompress((snappy *)v11, (snappy::Source *)v5, v6) )
    {
      v7 = dispatch_data_create(v5, v12, 0LL, _dispatch_data_destructor_free);
    }
    else
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001D1638);
      v9 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100169810(v9);
      free(v5);
      v7 = 0LL;
    }
    TSP::SnappySource::~SnappySource((TSP::SnappySource *)v11);
  }
  else
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D1618);
    v8 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169844(v8);
    TSP::SnappySource::~SnappySource((TSP::SnappySource *)v11);
    v7 = 0LL;
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}
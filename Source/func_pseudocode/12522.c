-[NSURL tsu_isOnSameVolumeAs:]
bool __cdecl -[NSURL tsu_isOnSameVolumeAs:](NSURL *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  void *v6; // x21
  void *v7; // x24
  const char *v8; // x22
  int v9; // w22
  void *v10; // x22
  os_log_s *v11; // x22
  NSString *v12; // x23
  int *v13; // x0
  char *v14; // x0
  bool v15; // w22
  void *v16; // x24
  const char *v17; // x23
  int v18; // w0
  void *v19; // x23
  os_log_s *v20; // x23
  NSString *v21; // x24
  int *v22; // x0
  char *v23; // x0
  bool v24; // zf
  stat v26; // [xsp+0h] [xbp-180h] BYREF
  stat v27; // [xsp+90h] [xbp-F0h] BYREF
  uint8_t buf[4]; // [xsp+120h] [xbp-60h] BYREF
  NSString *v29; // [xsp+124h] [xbp-5Ch]
  __int16 v30; // [xsp+12Ch] [xbp-54h]
  char *v31; // [xsp+12Eh] [xbp-52h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSURL tsu_reachableFileURLByDeletingUnreachablePathComponents](
           self,
           "tsu_reachableFileURLByDeletingUnreachablePathComponents"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "tsu_reachableFileURLByDeletingUnreachablePathComponents"));
  if ( (unsigned int)objc_msgSend(v5, "isFileURL") && (unsigned int)objc_msgSend(v6, "isFileURL") )
  {
    memset(&v27, 0, sizeof(v27));
    memset(&v26, 0, sizeof(v26));
    v7 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "path")));
    v8 = (const char *)objc_msgSend(v7, "fileSystemRepresentation");
    objc_release(v7);
    if ( v8 )
    {
      v9 = lstat(v8, &v27);
      if ( v9 == -1 )
      {
        if ( TSUDefaultCat_init_token != -1 )
          dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC4A8);
        v10 = TSUDefaultCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_INFO) )
        {
          v11 = objc_retain(v10);
          v12 = objc_retainAutoreleasedReturnValue(-[NSURL path](self, "path"));
          v13 = __error();
          v14 = strerror(*v13);
          *(_DWORD *)buf = 138412546;
          v29 = v12;
          v30 = 2082;
          v31 = v14;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v11,
            OS_LOG_TYPE_INFO,
            "Error retrieving the file system of path %@: %{public}s",
            buf,
            0x16u);
          objc_release(v12);
          objc_release(v11);
        }
        v9 = -1;
      }
    }
    else
    {
      v9 = -2;
    }
    v16 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path")));
    v17 = (const char *)objc_msgSend(v16, "fileSystemRepresentation");
    objc_release(v16);
    if ( v17 )
    {
      v18 = lstat(v17, &v26);
      if ( v18 == -1 )
      {
        if ( TSUDefaultCat_init_token != -1 )
          dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC4C8);
        v19 = TSUDefaultCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_INFO) )
        {
          v20 = objc_retain(v19);
          v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "path"));
          v22 = __error();
          v23 = strerror(*v22);
          *(_DWORD *)buf = 138412546;
          v29 = v21;
          v30 = 2082;
          v31 = v23;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v20,
            OS_LOG_TYPE_INFO,
            "Error retrieving the file system of path %@: %{public}s",
            buf,
            0x16u);
          objc_release(v21);
          objc_release(v20);
        }
        v18 = -1;
      }
    }
    else
    {
      v18 = -2;
    }
    if ( v18 | v9 )
      v24 = 0;
    else
      v24 = v27.st_dev == v26.st_dev;
    v15 = v24;
  }
  else
  {
    v15 = 0;
  }
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  return v15;
}
-[TSUZipArchive addEntry:]
void __cdecl -[TSUZipArchive addEntry:](TSUZipArchive *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  void *v6; // x22
  id v7; // x20
  void *v8; // x22
  void *v9; // x21

  v4 = objc_retain(a3);
  v5 = v4;
  if ( v4 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
    v7 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive normalizeEntryName:](self, "normalizeEntryName:", v6));
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_entriesMap, "objectForKeyedSubscript:", v7));
    objc_release(v8);
    if ( v8 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DD188);
      v9 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016F818(v7, v9);
    }
    else
    {
      -[NSMutableDictionary setObject:forKeyedSubscript:](self->_entriesMap, "setObject:forKeyedSubscript:", v5, v7);
      -[NSMutableOrderedSet addObject:](self->_entries, "addObject:", v5);
    }
    objc_release(v7);
  }
  objc_release(v5);
}
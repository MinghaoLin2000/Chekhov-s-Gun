-[TSUZipWriter initWithOptions:]
TSUZipWriter *__cdecl -[TSUZipWriter initWithOptions:](TSUZipWriter *self, SEL a2, unsigned __int64 a3)
{
  TSUZipWriter *v4; // x0
  TSUZipWriter *v5; // x19
  NSMutableArray *v6; // x0
  NSMutableArray *entries; // x8
  NSMutableDictionary *v8; // x0
  NSMutableDictionary *entriesMap; // x8
  dispatch_queue_attr_s *v10; // x20
  dispatch_queue_t v11; // x0
  OS_dispatch_queue *channelQueue; // x8
  dispatch_queue_attr_s *v13; // x20
  dispatch_queue_t v14; // x0
  OS_dispatch_queue *writeQueue; // x8
  NSDate *v16; // x0
  NSDate *newEntryLastModificationDate; // x8
  objc_super v19; // [xsp+0h] [xbp-20h] BYREF

  v19.receiver = self;
  v19.super_class = (Class)&OBJC_CLASS___TSUZipWriter;
  v4 = -[TSUZipWriter init](&v19, "init");
  v5 = v4;
  if ( v4 )
  {
    v4->_options = a3;
    v6 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
    entries = v5->_entries;
    v5->_entries = v6;
    objc_release(entries);
    v8 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
    entriesMap = v5->_entriesMap;
    v5->_entriesMap = v8;
    objc_release(entriesMap);
    v10 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v11 = dispatch_queue_create("TSUZipWriter.Channel", v10);
    channelQueue = v5->_channelQueue;
    v5->_channelQueue = (OS_dispatch_queue *)v11;
    objc_release(channelQueue);
    objc_release(v10);
    v13 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v14 = dispatch_queue_create("TSUZipWriter.Write", v13);
    writeQueue = v5->_writeQueue;
    v5->_writeQueue = (OS_dispatch_queue *)v14;
    objc_release(writeQueue);
    objc_release(v13);
    v16 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    newEntryLastModificationDate = v5->_newEntryLastModificationDate;
    v5->_newEntryLastModificationDate = v16;
    objc_release(newEntryLastModificationDate);
  }
  return v5;
}
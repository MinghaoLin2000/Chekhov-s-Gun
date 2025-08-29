-[IKPTRecentsService saveDatabaseWithInfo:thumbnails:]
void __cdecl -[IKPTRecentsService saveDatabaseWithInfo:thumbnails:](IKPTRecentsService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x21
  id v8; // x22
  NSMutableArray *recents; // x22
  id v10; // x23
  NSMutableDictionary *thumbnailData; // x0
  _QWORD v12[5]; // [xsp+8h] [xbp-58h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( v6 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService repositoryPath](self, "repositoryPath"));
    objc_msgSend(v6, "writeToFile:atomically:", v8, 1LL);
    objc_release(v8);
    -[NSMutableArray removeAllObjects](self->_recents, "removeAllObjects");
    -[NSMutableArray addObjectsFromArray:](self->_recents, "addObjectsFromArray:", v6);
  }
  if ( v7 )
  {
    -[NSMutableDictionary removeAllObjects](self->_thumbnailData, "removeAllObjects");
    -[NSMutableDictionary addEntriesFromDictionary:](self->_thumbnailData, "addEntriesFromDictionary:", v7);
  }
  recents = self->_recents;
  v10 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService dataFilePath](self, "dataFilePath"));
  -[NSMutableArray writeToFile:atomically:](recents, "writeToFile:atomically:", v10, 1LL);
  objc_release(v10);
  thumbnailData = self->_thumbnailData;
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_100001EE8;
  v12[3] = &unk_100004180;
  v12[4] = self;
  -[NSMutableDictionary enumerateKeysAndObjectsUsingBlock:](thumbnailData, "enumerateKeysAndObjectsUsingBlock:", v12);
  objc_release(v7);
  objc_release(v6);
}
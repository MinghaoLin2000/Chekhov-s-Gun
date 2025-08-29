-[FileSharingListItem initWithPlaceholderURL:]
FileSharingListItem *__cdecl -[FileSharingListItem initWithPlaceholderURL:](FileSharingListItem *self, SEL a2, id a3)
{
  id v4; // x21
  void *v5; // x20
  void *v6; // x22
  id v7; // x21
  NSString *v8; // x22
  const __CFString *v9; // x2
  void *v10; // x22
  FileSharingListItem *v11; // x19

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "lastPathComponent"));
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v6, CFSTR("name"));
  objc_release(v6);
  v7 = objc_retainAutorelease(v4);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           objc_msgSend(v7, "fileSystemRepresentation")));
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v8, CFSTR("path"));
  objc_release(v8);
  if ( (unsigned int)objc_msgSend(v7, "hasDirectoryPath") )
    v9 = CFSTR("folder");
  else
    v9 = CFSTR("file");
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v9, CFSTR("type"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "absoluteString"));
  objc_release(v7);
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v10, CFSTR("url"));
  objc_release(v10);
  v11 = -[FileSharingListItem initWithAttributes:](self, "initWithAttributes:", v5);
  -[FileSharingListItem setIsPlaceholder:](v11, "setIsPlaceholder:", 1LL);
  objc_release(v5);
  return v11;
}
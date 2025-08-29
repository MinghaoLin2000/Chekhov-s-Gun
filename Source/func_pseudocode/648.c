-[FileSharingListItem compareNames:]
signed __int64 __cdecl -[FileSharingListItem compareNames:](FileSharingListItem *self, SEL a2, id a3)
{
  id v4; // x20
  NSString *v5; // x19
  void *v6; // x21
  NSComparisonResult v7; // x20

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem name](self, "name"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  objc_release(v4);
  v7 = -[NSString localizedStandardCompare:](v5, "localizedStandardCompare:", v6);
  objc_release(v6);
  objc_release(v5);
  return v7;
}
-[TSUUUIDPath hash]
unsigned __int64 __cdecl -[TSUUUIDPath hash](TSUUUIDPath *self, SEL a2)
{
  id v2; // x0
  void *v3; // x19
  unsigned __int64 v4; // x20

  v2 = objc_retainAutoreleasedReturnValue(-[NSArray lastObject](self->_uuids, "lastObject"));
  v3 = v2;
  if ( v2 )
    v4 = (unsigned __int64)objc_msgSend(v2, "hash");
  else
    v4 = 1529057258LL;
  objc_release(v3);
  return v4;
}
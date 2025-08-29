-[TSUZipWriter sortedEntriesImpl]
id __cdecl -[TSUZipWriter sortedEntriesImpl](TSUZipWriter *self, SEL a2)
{
  NSArray *sortedEntries; // x0
  NSArray *v4; // x0
  NSArray *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  sortedEntries = self->_sortedEntries;
  if ( !sortedEntries )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[NSMutableArray sortedArrayUsingComparator:](self->_entries, "sortedArrayUsingComparator:", &stru_1001DEF28));
    v5 = self->_sortedEntries;
    self->_sortedEntries = v4;
    objc_release(v5);
    sortedEntries = self->_sortedEntries;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(sortedEntries);
}
-[TSUZipWriter entriesCountImpl]
unsigned __int64 __cdecl -[TSUZipWriter entriesCountImpl](TSUZipWriter *self, SEL a2)
{
  return (unsigned __int64)-[NSMutableDictionary count](self->_entriesMap, "count");
}
-[TSUUUIDPath lastUUID]
NSUUID *__cdecl -[TSUUUIDPath lastUUID](TSUUUIDPath *self, SEL a2)
{
  return (NSUUID *)-[NSArray lastObject](self->_uuids, "lastObject");
}
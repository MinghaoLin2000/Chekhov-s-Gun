-[TSUUUIDPath countByEnumeratingWithState:objects:count:]
unsigned __int64 __cdecl -[TSUUUIDPath countByEnumeratingWithState:objects:count:](
        TSUUUIDPath *self,
        SEL a2,
        $655AB7B2D2422B1B18367FB7F2D120EF *a3,
        id *a4,
        unsigned __int64 a5)
{
  return (unsigned __int64)-[NSArray countByEnumeratingWithState:objects:count:](
                             self->_uuids,
                             "countByEnumeratingWithState:objects:count:",
                             a3,
                             a4,
                             a5);
}
-[TSPTemporaryObjectContextDelegate addPersistenceWarnings:]
void __cdecl -[TSPTemporaryObjectContextDelegate addPersistenceWarnings:](
        TSPTemporaryObjectContextDelegate *self,
        SEL a2,
        id a3)
{
  -[NSMutableSet unionSet:](self->_persistenceWarnings, "unionSet:", a3);
}
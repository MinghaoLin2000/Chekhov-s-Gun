-[TSUExtendedAttributeCollection setAttributeCollectionToPath:intent:options:error:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[TSUExtendedAttributeCollection setAttributeCollectionToPath:intent:options:error:](
        TSUExtendedAttributeCollection *self,
        SEL a2,
        id a3,
        unsigned int a4,
        int a5,
        id *a6)
{
  return -[TSUExtendedAttributeCollection setAttributeCollectionToPath:intent:options:forRemoval:error:](
           self,
           "setAttributeCollectionToPath:intent:options:forRemoval:error:",
           a3,
           *(_QWORD *)&a4,
           *(_QWORD *)&a5,
           0LL,
           a6);
}